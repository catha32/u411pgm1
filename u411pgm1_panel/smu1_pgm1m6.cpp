#include "smu1_pgm1m6.h"
#include "ui_smu1_pgm1m6.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_pgm1m6::smu1_pgm1m6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_pgm1m6)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed6Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis6->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_PGM1M6");
}

smu1_pgm1m6::~smu1_pgm1m6()
{
    delete ui;
}

bool smu1_pgm1m6::init()
{
    bool fb = true;

    ui->curr6Axis->axisCounter->setValue(ui->curr6Axis->axisReadback->value());
    ui->acc6Axis->axisCounter->setValue(ui->acc6Axis->axisReadback->value());
    ui->max6Axis->axisCounter->setValue(ui->max6Axis->axisReadback->value());
    ui->ref6Axis->axisCounter->setValue(ui->ref6Axis->axisReadback->value());
    ui->sofn6Axis->axisCounter->setValue(ui->sofn6Axis->axisReadback->value());
    ui->sofp6Axis->axisCounter->setValue(ui->sofp6Axis->axisReadback->value());
    ui->speed6Axis->axisCounter->setValue(ui->speed6Axis->axisReadback->value());

    return(fb);
}
