#include "slitwidthhorizontal.h"
#include "ui_slitwidthhorizontal.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"



slitwidthhorizontal::slitwidthhorizontal(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slitwidthhorizontal)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->gotoaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->posaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->speedaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->stepsaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

}

slitwidthhorizontal::~slitwidthhorizontal()
{
    delete ui;
}


bool slitwidthhorizontal::init()
{
    bool fb = true;

    ui->gotoaxis->axisCounter->setValue(ui->gotoaxis->axisReadback->value());
    ui->posaxis->axisCounter->setValue(ui->posaxis->axisReadback->value());
    ui->speedaxis->axisCounter->setValue(ui->speedaxis->axisReadback->value());
    ui->stepsaxis->axisCounter->setValue(ui->stepsaxis->axisReadback->value());

    return(fb);
}
