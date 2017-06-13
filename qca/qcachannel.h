/***************************************************************************
 *   Copyright (C) 2004-2007 by Stefan Heim <sheim@bessy.de>               *
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
#ifndef QCACHANNEL_H
#define QCACHANNEL_H

// Qt4 includes
#include <QObject>
#include <QString>

// local includes
#include "pv_factory.h"

// forward declarations
class QMutex;

/*!
 * 
 * \brief Represents a single EPICS channel accessed over channel access
 * 
 * The class QCAChannel allows for EPICS CA channels to be used with the convenient Qt
 * signal/slot paradigm.
 * 
 * You can refer to an EPICS process variable by its name and create a new
 * QCAChannel.
 * 
 * \code
 * QCAChannel *chan = new QCAChannel("my:EPICS:channel");
 * \endcode
 * 
 * This channel object will post a monitor on the process variable and start to
 * provide several signals for value change and status change events. For example,
 * you can use the valueChanged(double) signal to have your display widget
 * updated with the latest value of the process variable.
 * 
 * \code
 * connect(chan, SIGNAL(valueChanged(double)), myDisplayWidget, SLOT(display(double)));
 * \endcode
 *
 * Alarm sensitivity
 *
 * Invalid channel indication
 *
 * Tooltip info
 *
 * Context menu
 * 
 * @author Stefan Heim <sheim@bessy.de>
 */
class QCAChannel : public QObject
{
	Q_OBJECT
public:
	QCAChannel ( QObject *parent = 0 );
	QCAChannel ( const QString &name, QObject *parent = 0 );
	~QCAChannel();

	/** The channel name. */
	const QString &name() const { return m_name; }

	/**
	 * \brief Set a new channel name.
	 *
	 * Disconnects the old channel (if any) and connects to the new channel.
	 * @param name the new channel name
	 */
	void setName ( const QString& name );

	/** The display/control minimum of the current channel */
	double scaleMin();

	/** The display/control maximum of the current channel */
	double scaleMax();

	/**
	 * \brief The precision of the current channel.
	 *
	 * The .PREC record field usually denotes the number of significant
	 * digits.
	 */
	short precision();

	/**
	 * \brief The alarm severity.
	 *
	 * This really should return an enum data type. ATM this function
	 * exposes the (bad) way this is handled by libpv: it returns
	 * preprocessor constants ({NO,MINOR,MAJOR,INVALID}_ALARM).
	 * @returns NO_ALARM, MINOR_ALARM, MAJOR_ALARM, INVALID_ALARM
	 */
	short severity() const { return m_severity; }

	/**
	 * \brief The current value.
	 *
	 * @returns the current value of the channel.
	 */
	double value() const;

	/**
	 * \brief The process variable used to handle all communication
	 *
	 * This member will not be exposed in the API in future versions of
	 * this library. \em Deprecated!
	 */
	ProcessVariable* pv() const { return m_pv; }

public slots:
	/**
	 * \brief Write double precision floating point to CA channel.
	 *
	 * @param value the value to write to the channel
	 */
	void put ( double value );

	/**
	 * \brief Write integer number to CA channel.
	 *
	 * @param value the value to write to the channel
	 */
	void put ( int value );

	/**
	 * \brief Write string to CA channel.
	 *
	 * @param value the value to write to the channel
	 */
	void put ( const QString & value );

	/**
	 * \brief Reestablish connection to IOC.
	 */
	void reconnect();

	/**
	 * \brief Configure channel parameters.
	 */
	void configure();

signals:
	/**
	 * \brief The channel's latest monitor events' value as integer value
	 *
	 * @param value the latest value
	 */
	void valueChanged ( int value );

	/**
	 * \brief The channel's latest monitor events' value as floating point value
	 *
	 * @param value the latest value
	 */
	void valueChanged ( double value );

	/**
	 * \brief The channel's latest monitor events' value as string
	 *
	 * @param value the latest value
	 */
	void valueChanged ( const QString & value );

	/**
	 * \brief A change in the connection status of the channel occured
	 */
	void controlInfoChanged();

	/**
	 * \brief A change in the alarm status of the channel occured
	 */
	void severityChanged();

protected:
	QCAChannel ( const QCAChannel &chan ); // not impl.
	QCAChannel & operator= ( const QCAChannel &chan ); // not impl.
	bool event ( QEvent *e );
	bool eventFilter ( QObject *obj, QEvent *e );

protected slots:
	void channel2Clipboard();
	void channel2Selection();

private:
	QString m_name;
	short m_severity;
	ProcessVariable *m_pv;

	QMutex *m_renameLock;
};

#endif
