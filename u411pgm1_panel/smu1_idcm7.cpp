#include "smu1_idcm7.h"
#include "ui_smu1_idcm7.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_idcm7::smu1_idcm7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_idcm7)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed7Axis_1->axisCounter;
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
    counter->setMaximum(13000);

    this->setWindowTitle("SMU41_IdcM7");
}

smu1_idcm7::~smu1_idcm7()
{
    delete ui;
}

bool smu1_idcm7::init()
{
    bool fb = true;

    ui->curr7Axis_1->axisCounter->setValue(ui->curr7Axis_1->axisReadback->value());
    ui->acc7Axis_1->axisCounter->setValue(ui->acc7Axis_1->axisReadback->value());
    ui->max7Axis_1->axisCounter->setValue(ui->max7Axis_1->axisReadback->value());
    ui->ref7Axis_1->axisCounter->setValue(ui->ref7Axis_1->axisReadback->value());
    ui->sofn7Axis_1->axisCounter->setValue(ui->sofn7Axis_1->axisReadback->value());
    ui->sofp7Axis_1->axisCounter->setValue(ui->sofp7Axis_1->axisReadback->value());
    ui->speed7Axis_1->axisCounter->setValue(ui->speed7Axis_1->axisReadback->value());

    return(fb);
}

