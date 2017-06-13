#include "smu1_idcm6.h"
#include "ui_smu1_idcm6.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_idcm6::smu1_idcm6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_idcm6)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed6Axis_1->axisCounter;
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
    counter->setMaximum(13000);


    this->setWindowTitle("SMU41_IdcM6");
}

smu1_idcm6::~smu1_idcm6()
{
    delete ui;
}

bool smu1_idcm6::init()
{
    bool fb = true;

    ui->curr6Axis_1->axisCounter->setValue(ui->curr6Axis_1->axisReadback->value());
    ui->acc6Axis_1->axisCounter->setValue(ui->acc6Axis_1->axisReadback->value());
    ui->max6Axis_1->axisCounter->setValue(ui->max6Axis_1->axisReadback->value());
    ui->ref6Axis_1->axisCounter->setValue(ui->ref6Axis_1->axisReadback->value());
    ui->sofn6Axis_1->axisCounter->setValue(ui->sofn6Axis_1->axisReadback->value());
    ui->sofp6Axis_1->axisCounter->setValue(ui->sofp6Axis_1->axisReadback->value());
    ui->speed6Axis_1->axisCounter->setValue(ui->speed6Axis_1->axisReadback->value());

    return(fb);
}
