#include "smu2_m7.h"
#include "ui_smu2_m7.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu2_m7::smu2_m7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_m7)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed7Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis7->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_2M7");
}

smu2_m7::~smu2_m7()
{
    delete ui;
}

bool smu2_m7::init()
{
    bool fb = true;

    ui->curr7Axis->axisCounter->setValue(ui->curr7Axis->axisReadback->value());
    ui->acc7Axis->axisCounter->setValue(ui->acc7Axis->axisReadback->value());
    ui->max7Axis->axisCounter->setValue(ui->max7Axis->axisReadback->value());
    ui->ref7Axis->axisCounter->setValue(ui->ref7Axis->axisReadback->value());
    ui->sofn7Axis->axisCounter->setValue(ui->sofn7Axis->axisReadback->value());
    ui->sofp7Axis->axisCounter->setValue(ui->sofp7Axis->axisReadback->value());
    ui->speed7Axis->axisCounter->setValue(ui->speed7Axis->axisReadback->value());

    return(fb);
}
