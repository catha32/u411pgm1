#include "idexpert.h"
#include "ui_idexpert.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

IdExpert::IdExpert(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IdExpert)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->blazeAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->cAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->fixAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->fixtAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->idoAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->idsAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->amcAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->amc2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->distAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->gratAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->mirrAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);


}

IdExpert::~IdExpert()
{
    delete ui;
}

bool IdExpert::init()
{
    bool fb = true;

    ui->blazeAxis->axisCounter->setValue(ui->blazeAxis->axisReadback->value());
    ui->cAxis->axisCounter->setValue(ui->cAxis->axisReadback->value());
    ui->fixAxis->axisCounter->setValue(ui->fixAxis->axisReadback->value());
    ui->fixtAxis->axisCounter->setValue(ui->fixtAxis->axisReadback->value());
    ui->idoAxis->axisCounter->setValue(ui->idoAxis->axisReadback->value());
    ui->idsAxis->axisCounter->setValue(ui->idsAxis->axisReadback->value());
    ui->amcAxis->axisCounter->setValue(ui->amcAxis->axisReadback->value());
    ui->amc2Axis->axisCounter->setValue(ui->amc2Axis->axisReadback->value());
    ui->distAxis->axisCounter->setValue(ui->distAxis->axisReadback->value());
    ui->gratAxis->axisCounter->setValue(ui->gratAxis->axisReadback->value());
    ui->mirrAxis->axisCounter->setValue(ui->mirrAxis->axisReadback->value());

    return(fb);
}

