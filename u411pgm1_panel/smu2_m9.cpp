#include "smu2_m9.h"
#include "ui_smu2_m9.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu2_m9::smu2_m9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_m9)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed9Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis9->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);


    this->setWindowTitle("SMU41_2M9");
}

smu2_m9::~smu2_m9()
{
    delete ui;
}

bool smu2_m9::init()
{
    bool fb = true;

    ui->curr9Axis->axisCounter->setValue(ui->curr9Axis->axisReadback->value());
    ui->acc9Axis->axisCounter->setValue(ui->acc9Axis->axisReadback->value());
    ui->max9Axis->axisCounter->setValue(ui->max9Axis->axisReadback->value());
    ui->ref9Axis->axisCounter->setValue(ui->ref9Axis->axisReadback->value());
    ui->sofn9Axis->axisCounter->setValue(ui->sofn9Axis->axisReadback->value());
    ui->sofp9Axis->axisCounter->setValue(ui->sofp9Axis->axisReadback->value());
    ui->speed9Axis->axisCounter->setValue(ui->speed9Axis->axisReadback->value());

    return(fb);
}
