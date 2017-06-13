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
#ifndef QCALED_H
#define QCALED_H

// Qt4 includes
#include <QObject>

// local includes
#include "kled.h"

// forward declarations
class QCAChannel;

/**
Channel access aware LED.

@author Stefan Heim <sheim@bessy.de>
*/
class QCALed : public KLed
{
	Q_OBJECT
	// CA
	Q_PROPERTY ( QString pv READ pv WRITE setPv )
	Q_PROPERTY ( bool blankOnInvalid READ blankOnInvalid WRITE setBlankOnInvalid )
	//end CA
	Q_ENUMS ( LEDMode )
	Q_PROPERTY ( LEDMode mode READ mode WRITE setMode )

public:
	// CA
	const QString& pv() const;
	void setPv ( const QString& name );
	bool blankOnInvalid() const;
	void setBlankOnInvalid ( bool onoff );
	//end CA

	QCALed ( QWidget *parent = 0 );
	~QCALed();

	/**
	 * \brief When the LED should be green
	 */
	enum LEDMode { OffIfZero, OnIfZero };

	LEDMode mode() const;
	void setMode ( const LEDMode mode );

public slots:
	void paintEvent ( QPaintEvent *event );
	void display ( int value );

private:
	// CA
	QString m_pv;
	bool m_blankOnInvalid;
	QCAChannel * m_chan;
	// end CA

	LEDMode m_mode;
};

#endif
