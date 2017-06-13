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
#ifndef QCAIOTHREAD_H
#define QCAIOTHREAD_H

// Qt4 includes
#include <QMutex>
#include <QObject>
#include <QThread>

// forward declarations
struct ca_client_context;
class QCAIOThread;

/**

\brief EPICS channel access communication thread

This is QCA's channel access workhorse. It repeatedly does ca_pend_event()
and the incoming callbacks are executed in its context. Communication with the
QCAChannels is realized via custom events posted with
QCoreApplication::postEvent().

You shouldn't have to take care of starting the CA IO thread, as it will be
done implicitly in the constructor of the first QCAChannel you use. If you
want to explicitly create the CA IO thread, you can use
\code
#include <qcaiothread.h>

QCAIOThread::initCAIO();
\endcode

\sa QCAChannel

@author Stefan Heim <sheim@bessy.de>
*/
class QCAIOThread : public QThread
{
	Q_OBJECT
public:
	/**
	 * \brief Constructor for QCAIOThread.
	 *
	 * Creates thread object and starts the CA IO thread. \em Don't use
	 * directly!
	 * @param context the channel access thread context to attach to
	 */
	QCAIOThread(struct ca_client_context *context);
	~QCAIOThread();
	static void initCAIO();
	bool isAlive() const;

public slots:
	/**
	 * \brief Stops channel access IO.
	 *
	 * This slot reliably shuts down QCAIOThread and by that allows for a
	 * clean shutdown of the main application.
	 */
	void shutdown();

protected:
	// TODO: disable CC and operator= here

private:
	static QCAIOThread *		m_caIOThread;
	struct ca_client_context *	m_caContext;
	bool				m_stopFlag;
	bool				m_alive;
	QMutex				m_creationLock;

	void run();
};

#endif
