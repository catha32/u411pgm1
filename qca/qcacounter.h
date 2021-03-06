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
#ifndef QCACOUNTER_H
#define QCACOUNTER_H

// Qt4 includes
#include <QObject>

// qwt includes
#include <qwt_counter.h>

// forward declarations
class QCAChannel;

/**
 * \brief This is a CA aware multi-button double spinbox.
 *
 * @author Stefan Heim <sheim@bessy.de>
*/
class QCACounter : public QwtCounter
{
	Q_OBJECT
	// CA
	Q_PROPERTY ( QString pv READ pv WRITE setPv )
	Q_PROPERTY ( bool alarmSensitive READ alarmSensitive WRITE setAlarmSensitive )
	Q_PROPERTY ( bool blankOnInvalid READ blankOnInvalid WRITE setBlankOnInvalid )
	Q_PROPERTY ( bool hasToolTip READ hasToolTip WRITE setHasToolTip )
	Q_PROPERTY ( bool controlInfoFromChannel READ controlInfoFromChannel WRITE setControlInfoFromChannel )
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
	bool controlInfoFromChannel() const;
	void setControlInfoFromChannel ( bool onoff );
	// end CA

	QCACounter(QWidget *parent = 0);
	~QCACounter();

public slots:
	void updateControlInfo();
	void displayOnly(double);
	void doAlarmColors();

private:
	// CA
	QString m_pv;
	QCAChannel * m_chan;
	bool m_alarmSensitive;
	bool m_blankOnInvalid;
	bool m_hasToolTip;
	bool m_controlInfoFromChannel;
	// end CA

	void contextMenuEvent ( QContextMenuEvent * event );
};

#endif
