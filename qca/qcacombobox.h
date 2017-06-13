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
#ifndef QCACOMBOBOX_H
#define QCACOMBOBOX_H

// Qt4 includes
#include <QComboBox>
#include <QObject>

// forward declarations
class QCAChannel;

/**
Channel access aware LCD-style number display.

@author Stefan Heim <sheim@bessy.de>
*/
class QCAComboBox : public QComboBox
{
	Q_OBJECT
	// CA
	Q_PROPERTY ( QString pv READ pv WRITE setPv )
	Q_PROPERTY ( bool alarmSensitive READ alarmSensitive WRITE setAlarmSensitive )
	Q_PROPERTY ( bool blankOnInvalid READ blankOnInvalid WRITE setBlankOnInvalid )
	Q_PROPERTY ( bool hasToolTip READ hasToolTip WRITE setHasToolTip )
	// end CA

public:
	// CA
	const QString& pv() const;
	void setPv ( const QString& name );
	bool alarmSensitive() const;
	void setAlarmSensitive ( bool onoff );
	bool blankOnInvalid() const;
	void setBlankOnInvalid ( bool onoff );
	bool hasToolTip() const;
	void setHasToolTip ( bool onoff );
	// end CA

	QCAComboBox ( QWidget *parent = 0 );
	~QCAComboBox();

public slots:
	void paintEvent ( QPaintEvent *event );
	void doAlarmColors();
	void setupEnumStrings();

private:
	// CA
	QString m_pv;
	bool m_alarmSensitive;
	bool m_blankOnInvalid;
	bool m_hasToolTip;
	QCAChannel * m_chan;
	// end CA
};

#endif
