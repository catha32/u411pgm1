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

// local includes
#include "qcachannel.h"

// declaration
#include "qcapushbutton.h"

QCAPushButton::QCAPushButton ( QWidget *parent )
		: QPushButton ( parent )
{
	// CA init
	m_pv = "none";
	m_pushValue = "0";
	m_alarmSensitive = true;
	m_blankOnInvalid = true;
	m_hasToolTip  = false;

	// CA coupling
	m_chan = new QCAChannel ( m_pv, this );
	connect ( m_chan, SIGNAL ( severityChanged() ),
	          this,   SLOT   ( doAlarmColors() ) );
	connect ( this,   SIGNAL ( clicked() ),
		  this,   SLOT ( sendValue() ) );
	installEventFilter(m_chan);
}

QCAPushButton::~QCAPushButton()
{
	// CA
	delete m_chan;
	// end CA
}

void QCAPushButton::sendValue()
{
	m_chan->put(m_pushValue);
}

void QCAPushButton::doAlarmColors()
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

const QString& QCAPushButton::pv() const
{
	return m_pv;
}

void QCAPushButton::setPv ( const QString& pv )
{
	m_pv = pv;
	m_chan->setName(pv);
}
const QString& QCAPushButton::pushValue() const
{
	return m_pushValue;
}

void QCAPushButton::setPushValue ( const QString& pushValue )
{
	m_pushValue = pushValue;
}

bool QCAPushButton::alarmSensitive() const
{
	return m_alarmSensitive;
}

void QCAPushButton::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	if (onoff == false)
	{
		setPalette(QPalette());
		repaint();
	}
}

bool QCAPushButton::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCAPushButton::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

bool QCAPushButton::hasToolTip() const
{
	return m_hasToolTip;
}

void QCAPushButton::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
}

bool QCAPushButton::controlInfoFromChannel() const
{
	return m_controlInfoFromChannel;
}

void QCAPushButton::setControlInfoFromChannel ( bool onoff )
{
	m_controlInfoFromChannel = onoff;
}
