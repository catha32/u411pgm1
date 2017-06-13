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

// local includes
#include "qcacounter.h"

// declaration
#include "qcacounterconfdialog.h"

QCACounterConfDialog::QCACounterConfDialog ( QWidget* parent, Qt::WindowFlags flags )
		: QDialog(parent, flags), Ui::QCACounterConfDialogBase()
{
	setupUi ( this );

	if (!parent || !parent->inherits("QCACounter"))
		qFatal("Invalid use of QCACounterConfDialog");

	qDebug("DBL_MIN: %e", DBL_MIN);
	QCACounter *counter = dynamic_cast<QCACounter *>(parent);
	minimum->setRange(-DBL_MAX, DBL_MAX);
    minimum->setValue(counter->minimum());
	maximum->setRange(-DBL_MAX, DBL_MAX);
    maximum->setValue(counter->maximum());
	numButtons->setRange(0, 3);
	numButtons->setValue(counter->numButtons());
    basicStep->setValue(counter->singleStep());
	button1Steps->setValue(counter->stepButton1());
	button2Steps->setValue(counter->stepButton2());
	button3Steps->setValue(counter->stepButton3());
	connect(userDefined, SIGNAL(toggled(bool)), this, SLOT(enableUserLimits(bool)));
    this->adjustSize();
}

QCACounterConfDialog::~QCACounterConfDialog()
{
}

void QCACounterConfDialog::enableUserLimits(bool onoff)
{
	minimum->setEnabled(onoff);
	maximum->setEnabled(onoff);
	basicStep->setEnabled(onoff);
	numButtons->setEnabled(onoff);
	button1Steps->setEnabled(onoff);
	button2Steps->setEnabled(onoff);
	button3Steps->setEnabled(onoff);
}

