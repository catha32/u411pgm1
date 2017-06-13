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

// Qt4 includes
#include <qwt_data.h>

// declaration
#include "qcaplotdata.h"

QCAPlotData::QCAPlotData(size_t size)
	: m_size(size)
{
	qDebug("QCAPlotData c'tor_1");
	m_x.resize(size);
	m_y.resize(size);
}

QCAPlotData::QCAPlotData(QwtArray<double> x, QwtArray<double> y, size_t size)
{
	qDebug("QCAPlotData c'tor_2");
	m_x = x;
	m_y = y;
	m_size = size;
}

QCAPlotData::~QCAPlotData()
{
	qDebug("QCAPlotData d'tor");
}

QwtData *QCAPlotData::copy() const
{
	qDebug(__func__);
	return new QCAPlotData(m_x, m_y, m_size);
}

size_t QCAPlotData::size() const
{
	size_t size = m_x.size();
	//qDebug("%s: %d", __func__, size);
	return m_size;
}

void QCAPlotData::setSize(size_t size)
{
	//qDebug("NONONONONO");
	m_size = size;
	m_x.resize(size);
	m_y.resize(size);
}

double QCAPlotData::x(size_t i) const
{
	//qDebug("x size req: %d", i);
	double ret = m_x[int(i)];
	//qDebug("%s(%d): %f", __func__, i, ret);
	return ret;
}

double QCAPlotData::y(size_t i) const
{
	//qDebug("y size req: %d", i);
	return m_y[int(i)];
}

QwtDoubleRect QCAPlotData::boundingRect() const
{
	qDebug(__func__);
	//return QwtDoubleRect(-1000, -1000, 2000, 2000);
	return QwtData::boundingRect();
}

void QCAPlotData::append(double x, double y)
{
	qDebug("%s: %f %f", __func__, x, y);
#if 0
	if (m_x.count() > (int)m_size || m_y.count() > (int)m_size)
	{
		m_x.remove(0, m_x.count() - m_size);
		m_y.remove(0, m_y.count() - m_size);
	}
#endif
	//qDebug("before: %d", m_x.size());
	m_x.append(x);
	//qDebug("after: %d", m_x.size());
	m_y.append(y);
	m_size++;
}

void QCAPlotData::clear()
{
	m_x.clear();
	m_y.clear();
	m_size = 0;
}
