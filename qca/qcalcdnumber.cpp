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

// system includes
#include <math.h>

// Qt4 includes
#include <QAction>
#include <QContextMenuEvent>
#include <QMenu>
#include <QPainter>

// local includes
#include "qcachannel.h"

// declaration
#include "qcalcdnumber.h"

QCALCDNumber::QCALCDNumber ( QWidget *parent )
		: QLCDNumber ( parent )
{
#ifdef QCA_DEBUG
	qDebug ( "QCALCDNumber() in" );
#endif
	// CA init
	m_pv = "none";
	m_alarmSensitive = true;
	m_blankOnInvalid  = true;
	m_hasToolTip  = false;

	// CA coupling
	m_chan = new QCAChannel ( m_pv, this );
	connect(m_chan, SIGNAL(valueChanged(double)), this, SLOT(display(double)));
	connect(m_chan, SIGNAL(severityChanged()), this, SLOT(doAlarmColors()));
	connect(m_chan, SIGNAL(controlInfoChanged()), this, SLOT(updateControlInfo()));
	installEventFilter(m_chan);

	// context menu
	cutAct = new QAction ( tr ( "Cu&t" ), this );
	cutAct->setShortcut ( tr ( "Ctrl+X" ) );
	cutAct->setStatusTip ( tr ( "Cut the current selection's contents to the clipboard" ) );

	// default look
	setSegmentStyle(QLCDNumber::Flat);
	setSmallDecimalPoint(false);
}

/*!
	\fn QCALCDNumer::~QCALCDNumber()
	Destructor for CA aware LCD display
 */
QCALCDNumber::~QCALCDNumber()
{
	// clear channel
	delete m_chan;
}

#if 0
void QCALCDNumber::contextMenuEvent ( QContextMenuEvent *event )
{
	QMenu menu ( this );
	menu.addAction ( cutAct );
	//menu.addAction(copyAct);
	//menu.addAction(pasteAct);
	menu.exec ( event->globalPos() );
}
#endif

void QCALCDNumber::paintEvent ( QPaintEvent *event )
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
		QLCDNumber::paintEvent ( event );
	}
}

void QCALCDNumber::doAlarmColors()
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
		p.setColor(QPalette::Dark, c.darker(200));
		p.setColor(QPalette::Light, c.lighter());
		p.setColor(QPalette::WindowText, c.darker(135));
		break;
	case MAJOR_ALARM:
		c = Qt::red;
		p.setColor(QPalette::Dark, c.darker());
		p.setColor(QPalette::Light, c.lighter());
		p.setColor(QPalette::WindowText, c);
		break;
	case INVALID_ALARM:
		c = Qt::white;
		p.setColor(QPalette::Dark, c.darker());
		p.setColor(QPalette::Light, c.lighter());
		p.setColor(QPalette::WindowText, c);
		break;
	}
	setPalette(p);
}

const QString& QCALCDNumber::pv() const
{
	return m_pv;
}

void QCALCDNumber::setPv ( const QString& pv )
{
	m_pv = pv;
	m_chan->setName(pv);
}

bool QCALCDNumber::alarmSensitive() const
{
	return m_alarmSensitive;
}

void QCALCDNumber::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	if (onoff == false)
	{
		setPalette(QPalette());
		repaint();
	}
}

bool QCALCDNumber::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCALCDNumber::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

bool QCALCDNumber::hasToolTip() const
{
	return m_hasToolTip;
}

void QCALCDNumber::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
}

void QCALCDNumber::updateControlInfo()
{
	double min = m_chan->scaleMin();
	double max = m_chan->scaleMax();
	unsigned precision = m_chan->precision();

	// calculate number of digits
	double longer = qMax(fabs(min), fabs(max));
	if (longer == 0)
		longer = 100000;
	double length = logl(longer) / logl(10);
	unsigned numDigits = 1 + (unsigned)floor(length) + 1 + precision;
#ifdef QCA_DEBUG
	qDebug("chan:%s min:%e max:%e prec:%d longer:%e length:%e digits:%d", m_chan->name().toLatin1().constData(), min, max, precision, longer, length, numDigits);
#endif
    setDigitCount(numDigits);
	update();
}
