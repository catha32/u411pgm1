#include "setenergy.h"
#include "ui_setenergy.h"

#include "qcachannel.h"
#include "qcacounter.h"

setenergy::setenergy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::setenergy)
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
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->energyAxis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->energyAxis_3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->energyAxis_4->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->energyAxis_5->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->energyAxis_6->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    this->setWindowTitle("SetEnergy");
}

setenergy::~setenergy()
{
    delete ui;
}

bool setenergy::init()
{
    bool fb = true;

    ui->energyAxis->axisCounter->setValue(ui->energyAxis->axisReadback->value());
    ui->energyAxis_2->axisCounter->setValue(ui->energyAxis_2->axisReadback->value());
    ui->energyAxis_3->axisCounter->setValue(ui->energyAxis_3->axisReadback->value());
    ui->energyAxis_4->axisCounter->setValue(ui->energyAxis_4->axisReadback->value());
    ui->energyAxis_5->axisCounter->setValue(ui->energyAxis_5->axisReadback->value());
    ui->energyAxis_6->axisCounter->setValue(ui->energyAxis_6->axisReadback->value());


    return(fb);
}
