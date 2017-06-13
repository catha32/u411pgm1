#include "smu1_m3.h"
#include "ui_smu1_m3.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_m3::smu1_m3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_m3)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_IDaM3");
}

smu1_m3::~smu1_m3()
{
    delete ui;
}

bool smu1_m3::init()
{
    bool fb = true;

    ui->curr3Axis_1->axisCounter->setValue(ui->curr3Axis_1->axisReadback->value());
    ui->acc3Axis_1->axisCounter->setValue(ui->acc3Axis_1->axisReadback->value());
    ui->max3Axis_1->axisCounter->setValue(ui->max3Axis_1->axisReadback->value());
    ui->ref3Axis_1->axisCounter->setValue(ui->ref3Axis_1->axisReadback->value());
    ui->sofn3Axis_1->axisCounter->setValue(ui->sofn3Axis_1->axisReadback->value());
    ui->sofp3Axis_1->axisCounter->setValue(ui->sofp3Axis_1->axisReadback->value());
    ui->speed3Axis_1->axisCounter->setValue(ui->speed3Axis_1->axisReadback->value());

    return(fb);
}
