#include "slitunittranslation.h"
#include "ui_slitunittranslation.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

slitunittranslation::slitunittranslation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slitunittranslation)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->goto2axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->po2saxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->speed2axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->step2saxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);
}

slitunittranslation::~slitunittranslation()
{
    delete ui;
}


bool slitunittranslation::init()
{
    bool fb = true;

    ui->goto2axis->axisCounter->setValue(ui->goto2axis->axisReadback->value());
    ui->po2saxis->axisCounter->setValue(ui->po2saxis->axisReadback->value());
    ui->speed2axis->axisCounter->setValue(ui->speed2axis->axisReadback->value());
    ui->step2saxis->axisCounter->setValue(ui->step2saxis->axisReadback->value());

    return(fb);
}
