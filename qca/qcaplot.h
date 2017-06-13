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
#ifndef QCAPLOT_H
#define QCAPLOT_H

// Qt4 includes
#include <qwt_plot.h>
#include <QObject>

// forward declarations
class QwtPlotCurve;
class QwtPlotGrid;
class QwtPlotMagnifier;
class QwtPlotPanner;
class QwtPlotZoomer;
class QCAChannel;
class QCAPlotData;

/**
 * \brief This is a CA aware x-y-plot widget.
 *
 * @author Stefan Heim <sheim@bessy.de>
*/
class QCAPlot : public QwtPlot
{
	Q_OBJECT
	// CA
	Q_PROPERTY ( QString pvX READ pvX WRITE setPvX )
	Q_PROPERTY ( QString pvY READ pvY WRITE setPvY )
	Q_PROPERTY ( bool alarmSensitive READ alarmSensitive WRITE setAlarmSensitive )
	Q_PROPERTY ( bool blankOnInvalid READ blankOnInvalid WRITE setBlankOnInvalid )
	Q_PROPERTY ( bool hasToolTip READ hasToolTip WRITE setHasToolTip )
	Q_PROPERTY ( bool controlInfoFromChannel READ controlInfoFromChannel WRITE setControlInfoFromChannel )
	// end CA

public:
	QCAPlot( QWidget *parent = 0 );
	~QCAPlot();

        // CA
	const QString& pvX() const;
	void setPvX ( const QString& name );
	const QString& pvY() const;
	void setPvY ( const QString& name );
	const QString& pushValue() const;
	void setPushValue ( const QString& value );
	bool alarmSensitive() const;
	void setAlarmSensitive ( bool onoff );
	bool blankOnInvalid() const;
	void setBlankOnInvalid ( bool onoff );
	bool hasToolTip() const;
	void setHasToolTip ( bool onoff );
	bool controlInfoFromChannel() const;
	void setControlInfoFromChannel ( bool onoff );
	// end CA
	
	QwtPlotMagnifier *magnifier() { return m_magnifier; };
	QwtPlotPanner *panner() { return m_panner; };
	QwtPlotZoomer *zoomer() { return m_zoomer; };

public slots:
	void clearPoints();

protected slots:
	void doAddPoints( double value );
	void doAlarmColors();

private:
	// CA
	QString m_pvX;
	QString m_pvY;
	QCAChannel * m_chanX;
	QCAChannel * m_chanY;
	bool m_alarmSensitive;
	bool m_blankOnInvalid;
	bool m_hasToolTip;
	bool m_controlInfoFromChannel;
	// end CA

	QwtPlotCurve *m_curveXY;
	QCAPlotData *m_dataXY;
	QwtPlotCurve *m_curveLastPoint;
	QCAPlotData *m_dataLastPoint;

	QwtPlotGrid *m_grid;
	QwtPlotMagnifier *m_magnifier;
	QwtPlotPanner *m_panner;
	QwtPlotZoomer *m_zoomer;
};

#endif
