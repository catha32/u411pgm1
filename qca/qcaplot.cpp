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

#define USE_MAGNIFIER
#define USE_PANNER
#define USE_ZOOMER
#define LAST_POINT_ENHANCE
#undef AVOID_REPLOT

// Qt includes
#include <QPen>

// Qwt includes
#include "qwt_double_rect.h"
#include "qwt_plot_curve.h"
#include "qwt_plot_grid.h"
#include "qwt_plot_svgitem.h"
#include "qwt_symbol.h"
#ifdef USE_MAGNIFIER
#include "qwt_plot_magnifier.h"
#endif
#ifdef USE_PANNER
#include "qwt_plot_panner.h"
#endif
#ifdef USE_ZOOMER
#include "qwt_plot_zoomer.h"
#endif

// local includes
#include "qcachannel.h"
#include "qcaplotdata.h"

// declaration
#include "qcaplot.h"

QCAPlot::QCAPlot ( QWidget *parent )
		: QwtPlot ( parent )
{
	// CA init
	m_pvX = "none";
	m_pvY = "none";
	m_alarmSensitive = false;
	m_blankOnInvalid = true;
	m_hasToolTip  = false;

#if 0
	QwtPlotCurve *curve1 = new QwtPlotCurve("Curve 1");
	double x[] = { -600, -400, -200, 0, 0, 0, 0, 200, 400, 600 };
	double y[] = { -200, -250, -200, 200, 110, -10, -100, -100, -100, -100 };
	curve1->setData(x, y, 10);
	QwtSymbol *sym1 = new QwtSymbol();
	sym1->setStyle(QwtSymbol::Triangle);
	sym1->setSize(15);
	curve1->setSymbol(*sym1);
	curve1->setStyle(QwtPlotCurve::NoCurve);
	curve1->attach(this);
#endif

	m_curveXY = new QwtPlotCurve("Curve XY");
	m_dataXY = new QCAPlotData();
	m_curveXY->setData(*m_dataXY);
	QwtSymbol *symXY = new QwtSymbol();
	symXY->setStyle(QwtSymbol::Rect);
	symXY->setSize(10);
	m_curveXY->setSymbol(*symXY);
	m_curveXY->setStyle(QwtPlotCurve::NoCurve);
	m_curveXY->attach(this);

#ifdef LAST_POINT_ENHANCE
	m_curveLastPoint = new QwtPlotCurve("Last Point");
	m_dataLastPoint = new QCAPlotData();
	m_curveLastPoint->setData(*m_dataLastPoint);
	QwtSymbol *symLastPoint = new QwtSymbol();
	symLastPoint->setStyle(QwtSymbol::Rect);
	symLastPoint->setSize(10);
	QPen *pen = new QPen(Qt::red); // XXX: leak
	pen->setWidth(2);
	symLastPoint->setPen(*pen);
	m_curveLastPoint->setSymbol(*symLastPoint);
	m_curveLastPoint->setStyle(QwtPlotCurve::NoCurve);
	m_curveLastPoint->attach(this);
#endif

	QwtPlotGrid *m_grid = new QwtPlotGrid;
	m_grid->setMajPen(QPen(QColor(Qt::darkGray).darker(), 0, Qt::DashLine));
	m_grid->setMinPen(QPen(Qt::darkGray, 0, Qt::DotLine));
	m_grid->enableXMin(true);
	m_grid->enableYMin(true);
	m_grid->attach(this);

#ifdef USE_ZOOMER
	// LeftButton for the zooming
	// RightButton: zoom out by 1
	// Ctrl+RighButton: zoom out to full size
	m_zoomer = new QwtPlotZoomer(canvas());
	m_zoomer->setMousePattern(QwtEventPattern::MouseSelect2, Qt::RightButton, Qt::ControlModifier);
	m_zoomer->setMousePattern(QwtEventPattern::MouseSelect3, Qt::RightButton);
#endif

#ifdef USE_MAGNIFIER
	/*
	 * Navigation:
	 *
	 * Left Mouse Button: Panning
	 * Mouse Wheel:       Zooming In/Out
	 * Right Mouse Button: Reset to initial
	 */
	m_magnifier = new QwtPlotMagnifier(canvas());
#endif

#ifdef USE_PANNER
	// MidButton for the panning
	m_panner = new QwtPlotPanner(canvas());
	m_panner->setAxisEnabled(QwtPlot::yRight, false);
	m_panner->setMouseButton(Qt::MidButton);
#endif

	// CA coupling
	// FIXME
	m_chanX = new QCAChannel ( m_pvX, this );
	m_chanY = new QCAChannel ( m_pvY, this );
	connect ( m_chanX, SIGNAL ( valueChanged(double) ),
	          this,   SLOT   ( doAddPoints(double) ) );
	connect ( m_chanX, SIGNAL ( severityChanged() ),
	          this,   SLOT   ( doAlarmColors() ) );
	connect ( m_chanY, SIGNAL ( valueChanged(double) ),
	          this,   SLOT   ( doAddPoints(double) ) );
	connect ( m_chanY, SIGNAL ( severityChanged() ),
	          this,   SLOT   ( doAlarmColors() ) );
}

QCAPlot::~QCAPlot()
{
	// CA
	delete m_chanX;
	delete m_chanY;
	// end CA
	delete m_dataLastPoint;
	delete m_curveLastPoint;
	delete m_dataXY;
	delete m_curveXY;
#ifdef USE_MAGNIFIER
	delete m_magnifier;
#endif
#ifdef USE_PANNER
	delete m_panner;
#endif
#ifdef USE_ZOOMER
	delete m_zoomer;
#endif
}

void QCAPlot::doAlarmColors()
{
	if (!alarmSensitive())
		return;

	QPalette p = palette();
	QColor c;
	switch (m_chanX->severity()) // FIXME: chanY goes unnoticed
	{
	case NO_ALARM:
		//c = Qt::black;
		p = QPalette();
		break;
	case MINOR_ALARM:
		c = Qt::yellow;
		p.setColor(QPalette::Dark, c.dark());
		p.setColor(QPalette::Light, c.light());
		p.setColor(QPalette::WindowText, c);
		break;
	case MAJOR_ALARM:
		c = Qt::red;
		p.setColor(QPalette::Dark, c.dark());
		p.setColor(QPalette::Light, c.light());
		p.setColor(QPalette::WindowText, c);
		break;
	case INVALID_ALARM:
		c = Qt::white;
		p.setColor(QPalette::Dark, c.dark());
		p.setColor(QPalette::Light, c.light());
		p.setColor(QPalette::WindowText, c);
		break;
	}
	setPalette(p);
}

const QString& QCAPlot::pvX() const
{
	return m_pvX;
}

void QCAPlot::setPvX ( const QString& pv )
{
	m_pvX = pv;
	m_chanX->setName(pv);
}

const QString& QCAPlot::pvY() const
{
	return m_pvY;
}

void QCAPlot::setPvY ( const QString& pv )
{
	m_pvY = pv;
	m_chanY->setName(pv);
}

bool QCAPlot::alarmSensitive() const
{
	return m_alarmSensitive;
}

void QCAPlot::setAlarmSensitive ( bool onoff )
{
	m_alarmSensitive = onoff;
	if (onoff == false)
	{
		setPalette(QPalette());
		repaint();
	}
}

bool QCAPlot::blankOnInvalid() const
{
	return m_blankOnInvalid;
}

void QCAPlot::setBlankOnInvalid ( bool onoff )
{
	m_blankOnInvalid = onoff;
	repaint();
}

bool QCAPlot::hasToolTip() const
{
	return m_hasToolTip;
}

void QCAPlot::setHasToolTip ( bool onoff )
{
	m_hasToolTip = onoff;
}

bool QCAPlot::controlInfoFromChannel() const
{
	return m_controlInfoFromChannel;
}

void QCAPlot::setControlInfoFromChannel ( bool onoff )
{
	m_controlInfoFromChannel = onoff;
}

void QCAPlot::doAddPoints(double)
{
	// TODO: Verify flow of data here. Shouldn't the data be passed around
	// by reference instead of a QwtData::copy() on each of the
	// QwtPlotCurve::setData() calls?
	qDebug("Add in, dataSize = %d", m_curveXY->dataSize());
	m_dataXY->append(m_chanX->value(), m_chanY->value());
	m_curveXY->setData(*m_dataXY);
#ifdef LAST_POINT_ENHANCE
	m_dataLastPoint->clear();
	m_dataLastPoint->append(m_chanX->value(), m_chanY->value());
	m_curveLastPoint->setData(*m_dataLastPoint);
#endif
#ifdef AVOID_REPLOT
	const bool cacheMode = canvas()->testPaintAttribute(QwtPlotCanvas::PaintCached);
	canvas()->setPaintAttribute(QwtPlotCanvas::PaintCached, false);
	m_curveXY->draw(m_curveXY->dataSize() - 1, m_curveXY->dataSize() - 1);
#ifdef LAST_POINT_ENHANCE
	m_curveLastPoint->draw(m_curveLastPoint->dataSize() - 1, m_curveLastPoint->dataSize() - 1);
#endif
	canvas()->setPaintAttribute(QwtPlotCanvas::PaintCached, cacheMode);
#else
	replot();
#endif
	qDebug("Add out, dataSize = %d", m_curveXY->dataSize());
}

void QCAPlot::clearPoints()
{
	qDebug("QCAPlot::clearPoints()");
	m_dataXY->clear();
	m_curveXY->setData(*m_dataXY);
	replot();
}
