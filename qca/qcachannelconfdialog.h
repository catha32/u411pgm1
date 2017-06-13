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

#ifndef QCACHANNELCONFDIALOG_H
#define QCACHANNELCONFDIALOG_H

// Qt4 includes
#include <QDialog>

// base clase
#include "ui_qcachannelconfdialogbase.h"

// forward declarations
class QCAChannel;

class QCAChannelConfDialog : public QDialog, public Ui::QCAChannelConfDialogBase
{
	Q_OBJECT

public:
	QCAChannelConfDialog ( QCAChannel* parent = 0, Qt::WindowFlags flags = 0 );
	~QCAChannelConfDialog();

public slots:

protected:

protected slots:

private:
};

#endif
