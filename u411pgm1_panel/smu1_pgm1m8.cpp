#include "smu1_pgm1m8.h"
#include "ui_smu1_pgm1m8.h"

#include "qcachannel.h"
#include "qcachannel.h"

smu1_pgm1m8::smu1_pgm1m8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_pgm1m8)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed8Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis8->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_PGM1M8");
}

smu1_pgm1m8::~smu1_pgm1m8()
{
    delete ui;
}

bool smu1_pgm1m8::init()
{
    bool fb = true;

    ui->curr8Axis->axisCounter->setValue(ui->curr8Axis->axisReadback->value());
    ui->acc8Axis->axisCounter->setValue(ui->acc8Axis->axisReadback->value());
    ui->max8Axis->axisCounter->setValue(ui->max8Axis->axisReadback->value());
    ui->ref8Axis->axisCounter->setValue(ui->ref8Axis->axisReadback->value());
    ui->sofn8Axis->axisCounter->setValue(ui->sofn8Axis->axisReadback->value());
    ui->sofp8Axis->axisCounter->setValue(ui->sofp8Axis->axisReadback->value());
    ui->speed8Axis->axisCounter->setValue(ui->speed8Axis->axisReadback->value());

    return(fb);
}
