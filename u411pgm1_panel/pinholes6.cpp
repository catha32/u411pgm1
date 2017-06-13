#include "pinholes6.h"
#include "ui_pinholes6.h"

#include "qcachannel.h"
#include "qcacounter.h"

#include "pinholes6_motor.h"
#include "pinholes6_motor2.h"
#include "pinholes6_help.h"
#include "pinholes6_help2.h"

pinholes6::pinholes6(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pinholes6)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->pin1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(-200);
    counter->setMaximum(2500);

    counter = ui->pin2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(-200);
    counter->setMaximum(2500);


    counter = ui->pin1Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-200);
    counter->setMaximum(1000);

    counter = ui->pin2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-200);
    counter->setMaximum(1000);

    this->setWindowTitle("PinholeS6");
}

pinholes6::~pinholes6()
{
    delete ui;
}


bool pinholes6::init()
{
    bool fb = true;

    ui->pin1Axis->axisCounter->setValue(ui->pin1Axis->axisReadback->value());
    ui->pin2Axis->axisCounter->setValue(ui->pin2Axis->axisReadback->value());
    //ui->maxAxis->axisCounter->setValue(ui->maxAxis->axisReadback->value());
    //ui->refAxis->axisCounter->setValue(ui->refAxis->axisReadback->value());
    //ui->sofnAxis->axisCounter->setValue(ui->sofnAxis->axisReadback->value());
    //ui->sofpAxis->axisCounter->setValue(ui->sofpAxis->axisReadback->value());
    //ui->speedAxis->axisCounter->setValue(ui->speedAxis->axisReadback->value());

    return(fb);
}

void pinholes6::on_pushButton_clicked()
{
    pinholes6_help pinholes6_help;
    pinholes6_help.setModal(true);
    pinholes6_help.exec();

    pinholes6_motor pinhole6_motor;
    pinhole6_motor.setModal(true);
    pinhole6_motor.exec();
}

void pinholes6::on_pushButton_3_clicked()
{
    pinholes6_help2 pinhole6_help2;
    pinhole6_help2.setModal(true);
    pinhole6_help2.exec();

    pinholes6_motor2 pinhole6_motor2;
    pinhole6_motor2.setModal(true);
    pinhole6_motor2.exec();
}
