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
#include "qcaled.h"

QCALed::QCALed ( QWidget *parent )
		: KLed ( parent )
{
#ifdef QCA_DEBUG
	qDebug ( "QCALCDNumber() in" );
#endif
	// CA init
	m_pv = "none";
	m_blankOnInvalid  = true;

	// CA coupling
	m_chan = new QCAChannel ( m_pv, this );
	connect(m_chan, SIGNAL(valueChanged(int)), this, SLOT(display(int)));
	connect(m_chan, SIGNAL(controlInfoChanged()), this, SLOT(update()));
	installEventFilter(m_chan);

	// default look
	m_mode = OffIfZero;
}

/*!
	\fn QCALCDNumer::~QCALCDNumber()
	Destructor for CA aware LCD display
 */
QCALed::~QCALed()
{
	// clear channel
	delete m_chan;
}

void QCALed::paintEvent ( QPaintEvent *event )
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
		KLed::paintEvent ( event );
	}
}

const QString& QCALed::pv() const
{
	return m_pv;
}

void QCALed::setPv ( const QString& pv )
{
	m_pv = pv;
	m_chan->setName(pv);
}

bool QCALed::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCALed::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

QCALed::LEDMode QCALed::mode() const
{
	return m_mode;
}

void QCALed::setMode ( LEDMode mode )
{
	m_mode = mode;
	// display( m_chan->pv()->get_int() );
}

void QCALed::display( int value )
{
#ifdef QCA_DEBUG
	qDebug("Display");
#endif
	switch ( mode() )
	{
	case OffIfZero:
		if ( value )
			setState( On );
		else
			setState( Off );
		break;
	case OnIfZero:
		if ( !value )
			setState( On );
		else
			setState( Off );
		break;
	}
}


