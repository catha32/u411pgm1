#include "continuous.h"
#include "ui_continuous.h"

#include "qcachannel.h"
#include "qcacounter.h"

continuous::continuous(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::continuous)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->Axis1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis4->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis5->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis6->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis7->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis8->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis9->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis10->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->Axis11->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);


    this->setWindowTitle("Continuous");
}

continuous::~continuous()
{
    delete ui;
}

bool continuous::init()
{
    bool fb = true;

    ui->Axis1->axisCounter->setValue(ui->Axis1->axisReadback->value());
    ui->Axis2->axisCounter->setValue(ui->Axis2->axisReadback->value());
    ui->Axis3->axisCounter->setValue(ui->Axis3->axisReadback->value());
    ui->Axis4->axisCounter->setValue(ui->Axis4->axisReadback->value());
    ui->Axis5->axisCounter->setValue(ui->Axis5->axisReadback->value());
    ui->Axis6->axisCounter->setValue(ui->Axis6->axisReadback->value());
    ui->Axis7->axisCounter->setValue(ui->Axis7->axisReadback->value());
    ui->Axis8->axisCounter->setValue(ui->Axis8->axisReadback->value());
    ui->Axis9->axisCounter->setValue(ui->Axis9->axisReadback->value());
    ui->Axis10->axisCounter->setValue(ui->Axis10->axisReadback->value());
    ui->Axis11->axisCounter->setValue(ui->Axis11->axisReadback->value());

    return(fb);
}
