#include "smu2_peaxism1.h"
#include "ui_smu2_peaxism1.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu2_peaxism1::smu2_peaxism1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_peaxism1)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed1Axis_2->axisCounter;
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
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_2PEAXIS M1");
}

smu2_peaxism1::~smu2_peaxism1()
{
    delete ui;
}

bool smu2_peaxism1::init()
{
    bool fb = true;

    ui->curr1Axis_2->axisCounter->setValue(ui->curr1Axis_2->axisReadback->value());
    ui->acc1Axis_2->axisCounter->setValue(ui->acc1Axis_2->axisReadback->value());
    ui->max1Axis_2->axisCounter->setValue(ui->max1Axis_2->axisReadback->value());
    ui->ref1Axis_2->axisCounter->setValue(ui->ref1Axis_2->axisReadback->value());
    ui->sofn1Axis_2->axisCounter->setValue(ui->sofn1Axis_2->axisReadback->value());
    ui->sofp1Axis_2->axisCounter->setValue(ui->sofp1Axis_2->axisReadback->value());
    ui->speed1Axis_2->axisCounter->setValue(ui->speed1Axis_2->axisReadback->value());

    return(fb);
}
