#include "smu1_idcm8.h"
#include "ui_smu1_idcm8.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_idcm8::smu1_idcm8(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_idcm8)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed8Axis_1->axisCounter;
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
    counter->setMaximum(13000);

    this->setWindowTitle("SMU41_IdcM8");
}

smu1_idcm8::~smu1_idcm8()
{
    delete ui;
}


bool smu1_idcm8::init()
{
    bool fb = true;

    ui->curr8Axis_1->axisCounter->setValue(ui->curr8Axis_1->axisReadback->value());
    ui->acc8Axis_1->axisCounter->setValue(ui->acc8Axis_1->axisReadback->value());
    ui->max8Axis_1->axisCounter->setValue(ui->max8Axis_1->axisReadback->value());
    ui->ref8Axis_1->axisCounter->setValue(ui->ref8Axis_1->axisReadback->value());
    ui->sofn8Axis_1->axisCounter->setValue(ui->sofn8Axis_1->axisReadback->value());
    ui->sofp8Axis_1->axisCounter->setValue(ui->sofp8Axis_1->axisReadback->value());
    ui->speed8Axis_1->axisCounter->setValue(ui->speed8Axis_1->axisReadback->value());

    return(fb);
}
