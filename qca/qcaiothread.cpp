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

// EPICS channel access
#include <cadef.h>

// Qt4 includes
#include <QApplication>
#include <QMutexLocker>

// declaration
#include "qcaiothread.h"

// static vars
static QMutex creationLock;
QCAIOThread *QCAIOThread::m_caIOThread = 0 ;

void QCAIOThread::initCAIO()
{
	QMutexLocker locker( &creationLock );
	if ( !m_caIOThread )
	{
		int status;
		struct ca_client_context *context;
		status = ca_context_create ( ca_enable_preemptive_callback );
		if ( status != ECA_NORMAL )
		{
			context = 0;
			qCritical ( "Couldn't create CA context (%s)\n",
			            ca_message ( status ) );
		}
		context = ca_current_context();

		qDebug( "Starting CA IO thread (CA context at %p)", context );
		m_caIOThread = new QCAIOThread ( context );

		/* wait for singleton instance to come up */
		const unsigned int MAX_RETRIES = 20;
		const unsigned int SINGLE_WAIT_MS = 10;
		unsigned int retries = 0;
		while ( ! m_caIOThread->isAlive()  && retries++ < MAX_RETRIES )
		{
			m_caIOThread->wait( SINGLE_WAIT_MS );
		}
		if ( retries == MAX_RETRIES )
			qDebug( "QCAIOThread didn't come up after %d retries @ %d ms",
			        MAX_RETRIES, SINGLE_WAIT_MS);
	}
}

QCAIOThread::QCAIOThread ( struct ca_client_context *context )
		: QThread()
{
	m_caContext = context;
	m_stopFlag = false;
	connect(qApp, SIGNAL(lastWindowClosed()), this, SLOT(shutdown()));
	start();
}


QCAIOThread::~QCAIOThread()
{}

bool QCAIOThread::isAlive() const
{
	return m_alive;
}

void QCAIOThread::run()
{
    qDebug ( "CA IO thread id 0x%x", *( unsigned int *) QThread::currentThreadId() );
	int status;

	/* attach to CA client context */
	status = ca_attach_context ( m_caContext );
	if ( status != ECA_NORMAL )
	{
		qCritical ( "Could not attach CA context (%s).\n", ca_message ( status ) );
		return;
	}

	/* handle CA activity */
	m_alive = true;
	while ( !m_stopFlag )
	{
		status = ca_pend_event ( .01 );
		if ( status != ECA_TIMEOUT )
			qWarning ( "ca_pend_event: %d (%s)\n",
			           status, ca_message ( status ) );
	}
	m_alive = false;

	/* detach from CA client context */
	// FIXME: function is documented in CA reference manual but non-existent
	//ca_detach_context();

	/* shutdown CA */
	ca_context_destroy();
}

void QCAIOThread::shutdown()
{
	m_stopFlag = true;

	unsigned tries = 0;
	while (isRunning() && tries++ < 5)
		wait(200);

	if (isRunning())
	{
		qWarning("QCAIOThread didn't stop, terminating...");
		terminate();
	}
	else
		qDebug("QCAIOThread gently stopped after %d %s", tries, tries == 1 ? "try" : "tries");
}
