#include "undulator.h"
#include "ui_undulator.h"

#include <QProcess>
#include <QString>
#include <QMessageBox>
#include <QTimer>
#include <QEventLoop>

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

undulator::undulator(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::undulator)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->energyAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->slitAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->cffAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);
}

undulator::~undulator()
{
    delete ui;
}

bool undulator::init()
{
    bool fb = true;

    ui->energyAxis->axisCounter->setValue(ui->energyAxis->axisReadback->value());
    ui->slitAxis->axisCounter->setValue(ui->slitAxis->axisReadback->value());
    ui->cffAxis->axisCounter->setValue(ui->cffAxis->axisReadback->value());

    return(fb);
}
