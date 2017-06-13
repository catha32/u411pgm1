#include "smu2_m1.h"
#include "ui_smu2_m1.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu2_m1::smu2_m1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_m1)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed2Axis->axisCounter;
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

    this->setWindowTitle("SMU41_2M1");
}

smu2_m1::~smu2_m1()
{
    delete ui;
}

bool smu2_m1::init()
{
    bool fb = true;

    ui->curr2Axis->axisCounter->setValue(ui->curr2Axis->axisReadback->value());
    ui->acc2Axis->axisCounter->setValue(ui->acc2Axis->axisReadback->value());
    ui->max2Axis->axisCounter->setValue(ui->max2Axis->axisReadback->value());
    ui->ref2Axis->axisCounter->setValue(ui->ref2Axis->axisReadback->value());
    ui->sofn2Axis->axisCounter->setValue(ui->sofn2Axis->axisReadback->value());
    ui->sofp2Axis->axisCounter->setValue(ui->sofp2Axis->axisReadback->value());
    ui->speed2Axis->axisCounter->setValue(ui->speed2Axis->axisReadback->value());

    return(fb);
}
