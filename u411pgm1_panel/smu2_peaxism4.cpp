#include "smu2_peaxism4.h"
#include "ui_smu2_peaxism4.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu2_peaxism4::smu2_peaxism4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_peaxism4)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->Axis4->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(6000000);


    this->setWindowTitle("SMU41_2PEAXIS M4");
}

smu2_peaxism4::~smu2_peaxism4()
{
    delete ui;
}

bool smu2_peaxism4::init()
{
    bool fb = true;

    ui->curr4Axis_2->axisCounter->setValue(ui->curr4Axis_2->axisReadback->value());
    ui->acc4Axis_2->axisCounter->setValue(ui->acc4Axis_2->axisReadback->value());
    ui->max4Axis_2->axisCounter->setValue(ui->max4Axis_2->axisReadback->value());
    ui->ref4Axis_2->axisCounter->setValue(ui->ref4Axis_2->axisReadback->value());
    ui->sofn4Axis_2->axisCounter->setValue(ui->sofn4Axis_2->axisReadback->value());
    ui->sofp4Axis_2->axisCounter->setValue(ui->sofp4Axis_2->axisReadback->value());
    ui->speed4Axis_2->axisCounter->setValue(ui->speed4Axis_2->axisReadback->value());

    return(fb);
}
