#include "smu1_m2.h"
#include "ui_smu1_m2.h"

#include "qcachannel.h"

smu1_m2::smu1_m2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_m2)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_IDaM2");
}

smu1_m2::~smu1_m2()
{
    delete ui;
}

bool smu1_m2::init()
{
    bool fb = true;

    ui->curr2Axis_1->axisCounter->setValue(ui->curr2Axis_1->axisReadback->value());
    ui->acc2Axis_1->axisCounter->setValue(ui->acc2Axis_1->axisReadback->value());
    ui->max2Axis_1->axisCounter->setValue(ui->max2Axis_1->axisReadback->value());
    ui->ref2Axis_1->axisCounter->setValue(ui->ref2Axis_1->axisReadback->value());
    ui->sofn2Axis_1->axisCounter->setValue(ui->sofn2Axis_1->axisReadback->value());
    ui->sofp2Axis_1->axisCounter->setValue(ui->sofp2Axis_1->axisReadback->value());
    ui->speed2Axis_1->axisCounter->setValue(ui->speed2Axis_1->axisReadback->value());

    return(fb);
}

