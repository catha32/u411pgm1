#include "smu2_peaxism5.h"
#include "ui_smu2_peaxism5.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu2_peaxism5::smu2_peaxism5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_peaxism5)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed5Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis5->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);

    this->setWindowTitle("SMU41_2PEAXIS M5");
}

smu2_peaxism5::~smu2_peaxism5()
{
    delete ui;
}


bool smu2_peaxism5::init()
{
    bool fb = true;

    ui->curr5Axis_2->axisCounter->setValue(ui->curr5Axis_2->axisReadback->value());
    ui->acc5Axis_2->axisCounter->setValue(ui->acc5Axis_2->axisReadback->value());
    ui->max5Axis_2->axisCounter->setValue(ui->max5Axis_2->axisReadback->value());
    ui->ref5Axis_2->axisCounter->setValue(ui->ref5Axis_2->axisReadback->value());
    ui->sofn5Axis_2->axisCounter->setValue(ui->sofn5Axis_2->axisReadback->value());
    ui->sofp5Axis_2->axisCounter->setValue(ui->sofp5Axis_2->axisReadback->value());
    ui->speed5Axis_2->axisCounter->setValue(ui->speed5Axis_2->axisReadback->value());

    return(fb);
}
