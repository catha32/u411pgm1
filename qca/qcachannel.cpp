/***************************************************************************
 *   Copyright (C) 2007 by Stefan Heim  <sheim@bessy.de>                   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

// system includes
#include <string.h>

// Qt4 includes
#include <QAction>
#include <QApplication>
#include <QClipboard>
#include <QCoreApplication>
#include <QContextMenuEvent>
#include <QEvent>
#include <QHelpEvent>
#include <QMenu>
#include <QMutex>
#include <QMutexLocker>
#include <QString>
#include <QToolTip>

// local includes
#include "qcachannelconfdialog.h"
#include "qcaevent.h"
#include "qcaiothread.h"

// declaration
#include "qcachannel.h"

#define QCA_DEBUG
#undef QCA_DEBUG2

static void conn_state_callback ( ProcessVariable *
#ifdef QCA_DEBUG
                                  pv
#endif
                                  , void *userarg )
{
#ifdef QCA_DEBUG
	if ( pv->is_valid() )
		fprintf ( stderr, "[CCB] UP: %s\n", pv->get_name() );
	else
		fprintf ( stderr, "[CCB] DOWN: %s\n", pv->get_name() );
#endif
	QCAChannel *c = ( QCAChannel * ) userarg;
	QCAEvent *e = new QCAEvent ( QCAEvent::ConnectionStatusChangeEvent );
	QCoreApplication::postEvent ( c, e );
}

static void value_change_callback ( ProcessVariable *
#ifdef QCA_DEBUG2
                                    pv
#endif
                                    , void *userarg )
{
#ifdef QCA_DEBUG2
	qDebug("[VCB] this:%p name:%s val:%g sev:%d", userarg, pv->get_name(), pv->get_double(), pv->get_severity());
#endif
	QCAChannel *c = ( QCAChannel * ) userarg;
	QCAEvent *e = new QCAEvent ( QCAEvent::ValueChangeEvent );
	QCoreApplication::postEvent ( c, e );
}

QCAChannel::QCAChannel ( const QString &name, QObject *parent )
		: QObject ( parent )
{
	QCAIOThread::initCAIO();
	m_renameLock = new QMutex;
	m_pv = NULL;

	setName ( name );
}

QCAChannel::QCAChannel ( QObject *parent )
		: QObject ( parent )
{
	QCAIOThread::initCAIO();
	m_renameLock = new QMutex;
	m_pv = NULL;

	setName( "QCA:invalid" );
}

QCAChannel::~QCAChannel()
{
	qDebug( QString( "DOWN: %1" ).arg( m_name ).toLatin1() );
	m_renameLock->lock();
	if ( m_pv )
	{
		if ( strncmp( m_pv->get_name(), "QCA:invalid", strlen( "QCA:invalid" ) ) != 0 )
		{
			m_pv->remove_conn_state_callback ( conn_state_callback, this );
			m_pv->remove_value_callback ( value_change_callback, this );
		}
		m_pv->release();
	}
	m_renameLock->unlock();
	delete m_renameLock;
}

void QCAChannel::setName ( const QString &name )
{
#ifdef QCA_DEBUG
	qDebug("QCAChannel::setName '%s' -> '%s'", m_name.toLatin1().constData(), name.toLatin1().constData());
#endif
	QMutexLocker locker(m_renameLock);
	if (m_pv)
	{
		if (strncmp(m_pv->get_name(), "QCA:invalid", strlen("QCA:invalid")) != 0)
		{
			m_pv->remove_conn_state_callback ( conn_state_callback, this );
			m_pv->remove_value_callback ( value_change_callback, this );
		}
		m_pv->release();
	}
	m_name = name;
    setObjectName(QString("channel_%1_%2").arg(name).arg(*(int *)this));
	m_severity = INVALID_ALARM;
	m_pv = the_PV_Factory->create ( name.toLatin1() );
	if ( !m_pv )
	{
		qWarning ( "Got NULL pv from factory" );
	}
	else
	{
		m_pv->reference();
		m_pv->add_conn_state_callback ( conn_state_callback, this );
		m_pv->add_value_callback ( value_change_callback, this );
	}
}

bool QCAChannel::event ( QEvent *e )
{
	//QMutexLocker locker(m_renameLock);
	QCAEvent::QCAEventType type = static_cast<QCAEvent::QCAEventType> ( e->type() );
	if ( type == QCAEvent::ValueChangeEvent && m_pv->is_valid() )
	{
#ifdef QCA_DEBUG2
		qDebug("[VAL event] %s", m_name.toLatin1().constData());
#endif
		if ( severity() != m_pv->get_severity() )
		{
			m_severity = m_pv->get_severity();
			emit severityChanged();
		}
#define BUFLEN 64
		char buf[BUFLEN];
		m_pv->get_string ( buf, BUFLEN );
#undef BUFLEN
		//qDebug(QString("%1: got %2 chars: '%3'").arg(m_name).arg(len).arg(buf).toLatin1());
		emit valueChanged ( QString ( buf ) );
		emit valueChanged ( m_pv->get_int() );
		emit valueChanged ( m_pv->get_double() );
		e->accept();
		return true;
	}
	else if ( type == QCAEvent::ConnectionStatusChangeEvent )
	{
#ifdef QCA_DEBUG
		qDebug("[CON event] %s", m_name.toLatin1().constData());
#endif
		if ( m_pv->is_valid() )
			emit controlInfoChanged();
		e->accept();
		return true;
	}
	else
	{
		if (m_pv->is_valid())
		{
#ifdef QCA_DEBUG2
			qWarning ( "QCAChannel: got unknown event %d", e->type());
#endif
		}
		e->ignore();
		return QObject::event ( e );
	}
}

void QCAChannel::put ( double val )
{
#ifdef QCA_DEBUG
	qDebug ( QString ( "PUT: %2: double %1" ).arg ( val ).arg( name() ).toLatin1() );
#endif
	if ( m_pv && m_pv->is_valid() )
		m_pv->put ( val );
}

void QCAChannel::put ( int val )
{
#ifdef QCA_DEBUG
	qDebug ( QString ( "PUT: %2: integer %1" ).arg ( val ).arg( name() ).toLatin1() );
#endif
	if ( m_pv && m_pv->is_valid() )
		m_pv->put ( val );
}

void QCAChannel::put ( const QString & val )
{
#ifdef QCA_DEBUG
	qDebug ( QString ( "PUT: %2: string %1" ).arg ( val ).arg( name() ).toLatin1() );
#endif
	if ( m_pv && m_pv->is_valid() )
		m_pv->put ( val.toLatin1().constData() );
}

double QCAChannel::value() const
{
	double val = 0;
	if ( m_pv && m_pv->is_valid() )
		val = m_pv->get_double();
	return val;
}

double QCAChannel::scaleMin()
{
	if ( m_pv && m_pv->is_valid() )
		return m_pv->get_lower_disp_limit();
	else
		return 0.;
}

double QCAChannel::scaleMax()
{
	if ( m_pv && m_pv->is_valid() )
		return m_pv->get_upper_disp_limit();
	else
		return 0.;
}

short QCAChannel::precision()
{
	if ( m_pv && m_pv->is_valid() )
		return m_pv->get_precision();
	else
		return 0;
}

bool QCAChannel::eventFilter(QObject *obj, QEvent *e)
{
	if (e->type() == QEvent::ContextMenu)
	{
		if (obj->inherits("QCACounter"))
			return false;
		qDebug("channel context menu");
		QContextMenuEvent *event = static_cast<QContextMenuEvent *>(e);

		QAction *clipboardAction = new QAction ( tr ( "Channel name to &clipboard" ), this );
		clipboardAction->setStatusTip ( tr ( "Cut the channel name to the clipboard" ) );
		connect(clipboardAction, SIGNAL(triggered()), this, SLOT(channel2Clipboard()));

		QAction *selectionAction = new QAction ( tr ( "Channel name to &selection" ), this );
		selectionAction->setStatusTip ( tr ( "Cut the channel name to the selection" ) );
		connect(selectionAction, SIGNAL(triggered()), this, SLOT(channel2Selection()));

		QAction *reconnectAction = new QAction ( tr ( "&Reconnect" ), this );
		reconnectAction->setStatusTip ( tr ( "Trigger reconnect" ) );
		connect(reconnectAction, SIGNAL(triggered()), this, SLOT(reconnect()));

		QAction *channelConfAction = new QAction ( tr ( "C&onfigure" ), this );
		channelConfAction->setStatusTip ( tr ( "Configure channel" ) );
		connect(channelConfAction, SIGNAL(triggered()), this, SLOT(configure()));

		QMenu menu(static_cast<QWidget*>(parent()));
		menu.addAction(clipboardAction);
		menu.addAction(selectionAction);
		menu.addSeparator();
		menu.addAction(reconnectAction);
		menu.addSeparator();
		menu.addAction(channelConfAction);
		menu.exec(event->globalPos());

		return true;
	}
	else if (e->type() == QEvent::MouseButtonPress)
	{
		QMouseEvent *event = static_cast<QMouseEvent *>(e);
		if (event->button() != Qt::MidButton)
			return QObject::eventFilter(obj, e);

		QString text;
		if (m_pv->is_valid())
			// XXX: very ugly
			text =
QString("<table><tr><td bgcolor=green><font color=white size=+2>%1</font></td><td bgcolor=red><font color=white size=+2>%2</font></td><td bgcolor=blue><font color=white size=+2>%3</font></td><td valign=middle><font color=pink>%4</font></td><td> <font size=+2>%5</font></td></tr></table>")
.arg(m_pv->get_num_times_connected())
.arg(m_pv->get_num_times_disconnected())
.arg(m_pv->get_num_value_change_events())
.arg(m_pv->have_write_access() ? "<font color=green>RW</font>" : "<font color=red>RO</font>" )
.arg(m_pv->get_name()) +
QString("<b>Value:</b> %1 <b>Units:</b> %2<br><b>Dim:</b> %3 <b>Type:</b> %4<br>")
.arg(m_pv->get_double())
.arg(m_pv->get_units())
.arg(m_pv->get_dimension())
.arg(m_pv->get_type().description) +
QString("<b>Node:</b> %1<br>").arg(m_pv->get_node_name()) +
QString("<b>Alarm status:</b> %1").arg(m_pv->get_status());
		else
			text =
QString("<table><tr><td bgcolor=green><font color=white size=+2>%1</font></td><td bgcolor=red><font color=white size=+2>%2</font></td><td bgcolor=blue><font color=white size=+2>%3</font></td><td valign=middle><font color=grey>%4</font></td><td> <font size=+2>%5</font></td></tr></table>")
.arg("0")
.arg("0")
.arg("0")
.arg("??")
.arg(m_pv->get_name()) +
QString("<b>Value:</b> %1 <b>Units:</b> %2<br><b>Dim:</b> %3 <b>Type:</b> %4<br>")
.arg("0")
.arg("none")
.arg("0")
.arg("none") +
QString("<b>Node:</b> %1<br>").arg("none") +
QString("<b>Alarm status:</b> %1").arg("none");

		QToolTip::showText(event->globalPos(), text, static_cast<QWidget *>(obj));
		return true;
	}
	else
	{
		return QObject::eventFilter(obj, e);
	}
}

void QCAChannel::channel2Clipboard()
{
	qApp->clipboard()->setText( name() );
}

void QCAChannel::channel2Selection()
{
	qApp->clipboard()->setText( name(), QClipboard::Selection );
}

void QCAChannel::reconnect()
{
	setName( name() );
}

void QCAChannel::configure()
{
	qDebug("QCAChannel::configure()");
	QCAChannelConfDialog d(this);
	d.channelName->setText(name());
	if (m_pv && m_pv->is_valid())
		d.units->setText(m_pv->get_units());
	d.precision->setValue(precision());

        int result = d.exec();
        if (result == QDialog::Accepted)
        {
                qDebug("Accepted");
#if 0
                setControlInfoFromChannel(!d.userDefined->isChecked());
                if (d.userDefined->isChecked())
                {
                        qDebug("Transfer dialog --> QCACounter");
                        setMinimum(d.minimum->value());
                        setMaximum(d.maximum->value());
                        // hack to prevent diabled state -> no context menu
                        if (!isValid())
                                setMaximum(DBL_MAX);
                        setNumButtons(d.numButtons->value());
                        setSingleStep(d.basicStep->value());
                        setStepButton1(d.button1Steps->value());
                        setStepButton2(d.button2Steps->value());
                        setStepButton3(d.button3Steps->value());
                }
                else
                {
                        qDebug("Re-read from Channel -> QCACounter");
                        updateControlInfo();
                }
#endif
        }
        else
                qDebug("Rejected");
}
