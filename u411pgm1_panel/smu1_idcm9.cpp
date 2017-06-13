#include "smu1_idcm9.h"
#include "ui_smu1_idcm9.h"

#include "qcachannel.h"
#include "qcacounter.h"

smu1_idcm9::smu1_idcm9(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_idcm9)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->curr9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->acc9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->max9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->ref9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofn9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->sofp9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(25000);

    counter = ui->speed9Axis_1->axisCounter;
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
    counter->setMaximum(13000);


    this->setWindowTitle("SMU41_IdcM9");
}

smu1_idcm9::~smu1_idcm9()
{
    delete ui;
}

bool smu1_idcm9::init()
{
    bool fb = true;

    ui->curr9Axis_1->axisCounter->setValue(ui->curr9Axis_1->axisReadback->value());
    ui->acc9Axis_1->axisCounter->setValue(ui->acc9Axis_1->axisReadback->value());
    ui->max9Axis_1->axisCounter->setValue(ui->max9Axis_1->axisReadback->value());
    ui->ref9Axis_1->axisCounter->setValue(ui->ref9Axis_1->axisReadback->value());
    ui->sofn9Axis_1->axisCounter->setValue(ui->sofn9Axis_1->axisReadback->value());
    ui->sofp9Axis_1->axisCounter->setValue(ui->sofp9Axis_1->axisReadback->value());
    ui->speed9Axis_1->axisCounter->setValue(ui->speed9Axis_1->axisReadback->value());

    return(fb);
}
