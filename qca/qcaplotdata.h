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
#ifndef QCAPLOTDATA_H
#define QCAPLOTDATA_H

// Qwt / Qt4 includes
#include <qwt_array.h>
#include <qwt_data.h>

// forward declarations

/**
 * \brief This is a CA aware plot data container.
 *
 * @author Stefan Heim <sheim@bessy.de>
*/
class QCAPlotData : public QwtData
{
public:
	QCAPlotData(size_t size = 0);
	QCAPlotData(QwtArray<double> x, QwtArray<double> y, size_t size);
	~QCAPlotData();
	QwtData *copy() const;
	size_t size() const;
	void setSize(size_t n);
	double x(size_t i) const;
	double y(size_t i) const;
	QwtDoubleRect boundingRect() const;
	void append(double x, double y);
	void clear();

private:
	size_t m_size;
	QwtArray<double> m_x;
	QwtArray<double> m_y;
};

#endif
