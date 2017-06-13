/***************************************************************************
 *   Copyright (C) 2007 by Stefan Heim <sheim@bessy.de>                    *
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

// Qt4 includes
#include <QPainter>

// local includes
#include "qcachannel.h"

// declaration
#include "qcacombobox.h"

QCAComboBox::QCAComboBox ( QWidget *parent )
		: QComboBox ( parent )
{
#ifdef QCA_DEBUG
	qDebug ( "QCAComboBox() in" );
#endif
	// CA init
	m_pv = "none";
	m_alarmSensitive = true;
	m_blankOnInvalid  = true;
	m_hasToolTip  = false;

	// CA coupling
	m_chan = new QCAChannel ( m_pv, this );
	connect(m_chan, SIGNAL(controlInfoChanged()), this, SLOT(setupEnumStrings()));
	connect(m_chan, SIGNAL(valueChanged(int)), this, SLOT(setCurrentIndex(int)));
	connect(m_chan, SIGNAL(severityChanged()), this, SLOT(doAlarmColors()));
	connect(this, SIGNAL(activated(int)), m_chan, SLOT(put(int)));
	installEventFilter(m_chan);

	// default look / settings
	setEditable ( false );
	setInsertPolicy( QComboBox::NoInsert );
}

/*!
	\fn QCALCDNumer::~QCAComboBox()
	Destructor for CA aware LCD display
 */
QCAComboBox::~QCAComboBox()
{
	// clear channel
	delete m_chan;
}

void QCAComboBox::paintEvent ( QPaintEvent *event )
{
#ifdef QCA_DEBUG
	if (!m_chan->pv())
		qDebug("!m_chan->pv()");
	if (!m_chan->pv()->is_valid())
		qDebug("!m_chan->pv()->is_valid()");
	if (m_chan->severity() == INVALID_ALARM)
		qDebug("m_chan->severity() == INVALID_ALARM");
#endif
	if ( blankOnInvalid() && m_chan->pv()
	     && ( !m_chan->pv()->is_valid() || m_chan->severity() == INVALID_ALARM ) )
	{
		QPainter painter ( this );
		QRect buttonRect = rect();
		//painter.setBrush ( QBrush ( Qt::white, Qt::SolidPattern ) );
		//painter.drawRect ( buttonRect );
		painter.fillRect( buttonRect, Qt::white);
		painter.setPen( Qt::red );
		painter.drawText ( buttonRect, Qt::AlignCenter | Qt::AlignVCenter, QString ( "invalid" ));
	}
	else
	{
		QComboBox::paintEvent ( event );
	}
}

void QCAComboBox::doAlarmColors()
{
	if (!alarmSensitive())
		return;

	QPalette p = palette();
	QColor c;
	switch (m_chan->severity())
	{
	case NO_ALARM:
		//c = Qt::black;
		p = QPalette();
		break;
	case MINOR_ALARM:
		c = Qt::yellow;
		p.setColor(QPalette::Dark, c.dark());
		p.setColor(QPalette::Light, c.light());
		p.setColor(QPalette::WindowText, c);
		break;
	case MAJOR_ALARM:
		c = Qt::red;
		p.setColor(QPalette::Dark, c.dark());
		p.setColor(QPalette::Light, c.light());
		p.setColor(QPalette::WindowText, c);
		break;
	case INVALID_ALARM:
		c = Qt::white;
		p.setColor(QPalette::Dark, c.dark());
		p.setColor(QPalette::Light, c.light());
		p.setColor(QPalette::WindowText, c);
		break;
	}
	setPalette(p);
}

void QCAComboBox::setupEnumStrings()
{
	ProcessVariable *pv = m_chan->pv();

#ifdef QCA_DEBUG
	qDebug("QCAComboBox::setupEnumStrings()");
#endif
	if (pv->is_valid() && pv->get_type().type == ProcessVariable::Type::enumerated)
	{
		clear();
		for (unsigned i = 0; i < pv->get_enum_count(); i++)
			insertItem(i, pv->get_enum(i));
	}

	// q&d hack; should be done elsewhere
	setEnabled(pv->have_write_access());
}

const QString& QCAComboBox::pv() const
{
	return m_pv;
}

void QCAComboBox::setPv ( const QString& pv )
{
	m_pv = pv;
	m_chan->setName(pv);
}

bool QCAComboBox::alarmSensitive() const
{
	return m_alarmSensitive;
}

void QCAComboBox::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	if (onoff == false)
	{
		setPalette(QPalette());
		repaint();
	}
}

bool QCAComboBox::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCAComboBox::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

bool QCAComboBox::hasToolTip() const
{
	return m_hasToolTip;
}

void QCAComboBox::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
}
