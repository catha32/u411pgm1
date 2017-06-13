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
#include <float.h>
#include <math.h>

// Qt4 includes
#include <QVariant>

// local includes
#include "qcachannel.h"
#include "qcacounterconfdialog.h"

// declaration
#include "qcacounter.h"

QCACounter::QCACounter ( QWidget *parent )
		: QwtCounter ( parent )
{
	// CA init
	m_pv = "none";
	m_alarmSensitive = true;
	m_blankOnInvalid  = true;
	m_hasToolTip  = false;
	m_controlInfoFromChannel = true;

	// CA coupling
	m_chan = new QCAChannel ( m_pv, this );
	connect ( m_chan, SIGNAL ( valueChanged ( double ) ),
	          this,   SLOT   ( displayOnly ( double ) ) );
	connect ( m_chan, SIGNAL ( controlInfoChanged() ),
	          this,   SLOT   ( updateControlInfo() ) );
	connect ( m_chan, SIGNAL ( severityChanged() ),
	          this,   SLOT   ( doAlarmColors() ) );
	connect ( this,   SIGNAL ( valueChanged ( double ) ),
	          m_chan, SLOT   ( put ( double ) ) );
	installEventFilter(m_chan);

	// default look
	setNumButtons ( 3 );
}

QCACounter::~QCACounter()
{
	// CA
	delete m_chan;
	// end CA
}

/*!
    \fn QCACounter::updateControlInfo()
 */
void QCACounter::updateControlInfo()
{
#ifdef QCA_DEBUG
	qDebug ( QString ( "Updating control info, vstep=%1" )
	         .arg ( pow ( 10, -m_chan->precision() ) ).toLatin1() );
#endif
	if ( controlInfoFromChannel() )
	{
		// FIXME: the block/unblock here prevents spurious low value puts
		blockSignals(true);
		setMinimum ( m_chan->scaleMin() );
		setMaximum ( m_chan->scaleMax() );
        setRange ( m_chan->scaleMin(), m_chan->scaleMax());
		blockSignals(false);
	}
#define SET_INITIAL_VALUE_ON_CONTROL_INFO_EVENT
#ifdef SET_INITIAL_VALUE_ON_CONTROL_INFO_EVENT
	displayOnly ( m_chan->value() );
	qDebug ( QString ( "Updating control info for %1, vstep=%2 value=%3" )
	         .arg ( m_chan->name() )
	         .arg ( pow ( 10, -m_chan->precision() ) )
		 .arg ( m_chan->value() )
		 .toLatin1() );
#endif
	update();
}

/*!
 * \brief Set displayed value only, don't cause a put operation
 *
 * @param value the value to display
 */
void QCACounter::displayOnly ( double value )
{
#ifdef QCA_DEBUG
	qDebug ( "Display only %g", value );
#endif
	blockSignals ( true );
	setValue ( value );
	blockSignals ( false );
}

void QCACounter::doAlarmColors()
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
	update();
}

const QString& QCACounter::pv() const
{
	return m_pv;
}

void QCACounter::setPv ( const QString& pv )
{
	m_pv = pv;
	m_chan->setName(pv);
}

bool QCACounter::alarmSensitive() const
{
	return m_alarmSensitive;
}

void QCACounter::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	if (onoff == false)
	{
		setPalette(QPalette());
		repaint();
	}
}

bool QCACounter::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCACounter::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

bool QCACounter::hasToolTip() const
{
	return m_hasToolTip;
}

void QCACounter::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
}

bool QCACounter::controlInfoFromChannel() const
{
	return m_controlInfoFromChannel;
}

void QCACounter::setControlInfoFromChannel ( bool onoff )
{
	m_controlInfoFromChannel = onoff;
}

void QCACounter::contextMenuEvent ( QContextMenuEvent * event )
{
	qDebug("got c'menu event");

	QCACounterConfDialog d(this);

	// FIXME: QCAChannelConfDialog d(Q[CA]Widget *this, QCAControlInfo *controlInfo)
	qDebug("Transfer QCACounter --> Dialog");
	d.userDefined->setChecked(!controlInfoFromChannel());
    d.minimum->setValue(minimum());
    d.maximum->setValue(maximum());
	d.numButtons->setValue(numButtons());
    d.basicStep->setValue(singleStep());
	d.button1Steps->setValue(stepButton1());
	d.button2Steps->setValue(stepButton2());
	d.button3Steps->setValue(stepButton3());


	int result = d.exec();
    d.adjustSize();
	if (result == QDialog::Accepted)
	{
		qDebug("Accepted");
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
	}
	else
		qDebug("Rejected");
}
