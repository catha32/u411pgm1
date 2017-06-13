#include "heydemanndata.h"
#include "ui_heydemanndata.h"

#include "qcachannel.h"

#include <qwt_plot.h>
#include <qwt_compat.h>
#include <qwt_plot_curve.h>
#include <qwt_picker.h>
#include <qwt_plot_picker.h>
#include <qwt_plot_zoomer.h>

heydemanndata::heydemanndata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::heydemanndata)
{
    ui->setupUi(this);

    this->setWindowTitle("HeydemannData");

    chanX = new QCAChannel("u411pgm1:wfCOSu411pgm1:wfSIN");
    chanY = new QCAChannel("u411pgm1:wfBrkptTableR");



    connect(ui->pushButton_17, SIGNAL(clicked()), this, SLOT(close()));

    ui->qwtPlot->setAxisScale(QwtPlot::xBottom, 0, 1);
    ui->qwtPlot->setAxisScale(QwtPlot::yLeft, 0, 1);


    ui->qwtPlot_2->setAxisScale(QwtPlot::xBottom, 0, 4500);
    ui->qwtPlot_2->setAxisScale(QwtPlot::yLeft, -600, 400);

    QwtPlotCurve *curve = new QwtPlotCurve();
    //curve->setSamples(chanX->value());
    curve->attach(ui->qwtPlot);
    ui->qwtPlot->setAxisTitle(QwtPlot::xBottom, " ");
    ui->qwtPlot->setAxisTitle(QwtPlot::yLeft, " ");
    ui->qwtPlot->replot();

    QwtPlotCurve *curve2 = new QwtPlotCurve();
    //curve->setSamples(chanX->value());

    curve2->attach(ui->qwtPlot_2);
    ui->qwtPlot_2->setAxisTitle(QwtPlot::xBottom, " ");
    ui->qwtPlot_2->setAxisTitle(QwtPlot::yLeft, " ");
    ui->qwtPlot_2->replot();

}

heydemanndata::~heydemanndata()
{
    delete ui;
    delete chanX;
    delete chanY;
}
