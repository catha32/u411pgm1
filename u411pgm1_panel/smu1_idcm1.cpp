#include "smu1_idcm1.h"
#include "ui_smu1_idcm1.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_idcm1::smu1_idcm1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_idcm1)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->currAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->accAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->maxAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->refAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofnAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofpAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speedAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(13000);




    this->setWindowTitle("SMU41_IdcM1");
}

smu1_idcm1::~smu1_idcm1()
{
    delete ui;
}

bool smu1_idcm1::init()
{
    bool fb = true;

    ui->currAxis->axisCounter->setValue(ui->currAxis->axisReadback->value());
    ui->accAxis->axisCounter->setValue(ui->accAxis->axisReadback->value());
    ui->maxAxis->axisCounter->setValue(ui->maxAxis->axisReadback->value());
    ui->refAxis->axisCounter->setValue(ui->refAxis->axisReadback->value());
    ui->sofnAxis->axisCounter->setValue(ui->sofnAxis->axisReadback->value());
    ui->sofpAxis->axisCounter->setValue(ui->sofpAxis->axisReadback->value());
    ui->speedAxis->axisCounter->setValue(ui->speedAxis->axisReadback->value());

    return(fb);
}
