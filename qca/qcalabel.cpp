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
#include <QSize>

// local includes
#include "qcachannel.h"

// declaration
#include "qcalabel.h"

QCALabel::QCALabel(QWidget *parent)
 : QLabel(parent)
{
	// CA init
	m_pv = "none";
	m_alarmSensitive = true;
	m_blankOnInvalid  = true;
	m_hasToolTip  = false;

	// CA coupling
	m_chan = new QCAChannel ( m_pv, this );
	connect(m_chan, SIGNAL(valueChanged(const QString &)),
		this, SLOT(setText(const QString &)));
	connect(m_chan, SIGNAL(severityChanged()), this, SLOT(doAlarmColors()));
	installEventFilter(m_chan);
}

QCALabel::~QCALabel()
{
	// CA
	delete m_chan;
	// end CA
}

QSize QCALabel::minimumSize() const
{
	return fontMetrics().size(0, text());
}

QSize QCALabel::maximumSize() const
{
	return fontMetrics().size(0, text());
}

QSize QCALabel::sizeHint() const
{
	return fontMetrics().size(0, text());
}

void QCALabel::setText(const QString &text)
{
	QLabel::setText(text);
	// doesn't work so far
	//resize(sizeHint());
	//updateGeometry();
}

void QCALabel::doAlarmColors()
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

const QString& QCALabel::pv() const
{
	return m_pv;
}

void QCALabel::setPv ( const QString& pv )
{
	m_pv = pv;
	m_chan->setName(pv);
}

bool QCALabel::alarmSensitive() const
{
	return m_alarmSensitive;
}

void QCALabel::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	if (onoff == false)
	{
		setPalette(QPalette());
		repaint();
	}
}

bool QCALabel::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCALabel::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

bool QCALabel::hasToolTip() const
{
	return m_hasToolTip;
}

void QCALabel::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
}
