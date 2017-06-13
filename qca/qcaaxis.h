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

#ifndef QCAAXIS_H
#define QCAAXIS_H

// Qt4 includes
#include <QString>
#include <QWidget>

// base clase
#include "ui_qcaaxisbase.h"

// forward declarations
class QCAChannel;

class QCAAxis : public QWidget, public Ui::QCAAxisBase
{
	Q_OBJECT
	Q_PROPERTY ( QString description READ description WRITE setDescription )
	Q_PROPERTY ( QString pvReadback READ pvReadback WRITE setPvReadback )
	Q_PROPERTY ( QString units READ units WRITE setUnits )
	// CA
	Q_PROPERTY ( QString pv READ pv WRITE setPv )
	Q_PROPERTY ( bool blankOnInvalid READ blankOnInvalid WRITE setBlankOnInvalid )
	Q_PROPERTY ( bool hasToolTip READ hasToolTip WRITE setHasToolTip )
	// end CA

public:
	// CA
	QString pv() const;
	void setPv ( const QString& value );
	bool alarmSensitive() const;
	void setAlarmSensitive ( bool onoff );
	bool blankOnInvalid() const;
	void setBlankOnInvalid ( bool onoff );
	bool hasToolTip() const;
	void setHasToolTip ( bool onoff );
	// end CA

	QCAAxis ( QWidget* parent = 0, Qt::WindowFlags fl = 0 );
	~QCAAxis();

	QString pvReadback() const;
	void setPvReadback ( const QString& value );

	QString description() const;
	void setDescription ( const QString& description );

	QString units() const;
	void setUnits ( const QString& units );

public slots:
	/*$PUBLIC_SLOTS$*/

protected:
	/*$PROTECTED_FUNCTIONS$*/

protected slots:
	/*$PROTECTED_SLOTS$*/

private:
	// CA
	QString m_pv;
	bool m_alarmSensitive;
	bool m_blankOnInvalid;
	bool m_hasToolTip;
	// end CA

	QString m_pvReadback;
	QString m_description;
	QString m_units;
};

#endif
