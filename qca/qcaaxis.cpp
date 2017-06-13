/***************************************************************************
 *   Copyright (C) 2007 by Stefan Heim   *
 *   sheim@bessy.de   *
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
#include "qcaaxis.h"

QCAAxis::QCAAxis ( QWidget* parent, Qt::WindowFlags fl )
		: QWidget ( parent, fl ), Ui::QCAAxisBase()
{
	setupUi ( this );

	// CA init
        m_pv = "none";
        m_pvReadback = "none";
	m_alarmSensitive = true;
	m_blankOnInvalid  = true;
	m_hasToolTip  = false;

	setDescription ( "Description" );
	//setPv ( "sheimHost:foo" );
	//setPvReadback ( "sheimHost:aiExample2" );
}

QCAAxis::~QCAAxis()
{
	//delete sth.
}

QString QCAAxis::description() const
{
	return m_description;
}

void QCAAxis::setDescription ( const QString& description )
{
	m_description = description;
	axisNameLabel->setText ( description );
}

QString QCAAxis::units() const
{
	return m_units;
}

void QCAAxis::setUnits ( const QString& units )
{
	m_units = units;
	axisUnitsLabel->setText ( units );
}

QString QCAAxis::pvReadback() const
{
	return m_pvReadback;
}

void QCAAxis::setPvReadback ( const QString& pv )
{
	m_pvReadback = pv;
	axisReadback->setPv( pv );
}

// CA
QString QCAAxis::pv() const
{
	return m_pv;
}

void QCAAxis::setPv ( const QString& pv )
{
	m_pv = pv;
	axisCounter->setPv(pv);
}
	
bool QCAAxis::alarmSensitive() const
{
	return m_alarmSensitive;
}
	
void QCAAxis::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	axisCounter->setAlarmSensitive( onoff );
	axisReadback->setAlarmSensitive( onoff );
}
	
bool QCAAxis::blankOnInvalid() const
{
	return m_blankOnInvalid;
}
	
void QCAAxis::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	axisCounter->setBlankOnInvalid( onoff );
	axisReadback->setBlankOnInvalid( onoff );
}

bool QCAAxis::hasToolTip() const
{
        return m_hasToolTip;
}

void QCAAxis::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
	axisCounter->setHasToolTip( onoff );
	axisReadback->setHasToolTip( onoff );
}
// end CA
