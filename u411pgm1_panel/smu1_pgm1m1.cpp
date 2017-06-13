#include "smu1_pgm1m1.h"
#include "ui_smu1_pgm1m1.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_pgm1m1::smu1_pgm1m1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_pgm1m1)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed1Axis->axisCounter;
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

    this->setWindowTitle("SMU41_PGM1M1");
}

smu1_pgm1m1::~smu1_pgm1m1()
{
    delete ui;
}

bool smu1_pgm1m1::init()
{
    bool fb = true;

    ui->curr1Axis->axisCounter->setValue(ui->curr1Axis->axisReadback->value());
    ui->acc1Axis->axisCounter->setValue(ui->acc1Axis->axisReadback->value());
    ui->max1Axis->axisCounter->setValue(ui->max1Axis->axisReadback->value());
    ui->ref1Axis->axisCounter->setValue(ui->ref1Axis->axisReadback->value());
    ui->sofn1Axis->axisCounter->setValue(ui->sofn1Axis->axisReadback->value());
    ui->sofp1Axis->axisCounter->setValue(ui->sofp1Axis->axisReadback->value());
    ui->speed1Axis->axisCounter->setValue(ui->speed1Axis->axisReadback->value());

    return(fb);
}
