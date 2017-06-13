#include "slitttranslationhorizontalpanel.h"
#include "ui_slitttranslationhorizontalpanel.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

slitttranslationhorizontalpanel::slitttranslationhorizontalpanel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slitttranslationhorizontalpanel)
{
    ui->setupUi(this);


    QCACounter *counter;
    counter = ui->goto1axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->po1saxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->speed1axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->step1saxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);
}

slitttranslationhorizontalpanel::~slitttranslationhorizontalpanel()
{
    delete ui;
}

bool slitttranslationhorizontalpanel::init()
{
    bool fb = true;

    ui->goto1axis->axisCounter->setValue(ui->goto1axis->axisReadback->value());
    ui->po1saxis->axisCounter->setValue(ui->po1saxis->axisReadback->value());
    ui->speed1axis->axisCounter->setValue(ui->speed1axis->axisReadback->value());
    ui->step1saxis->axisCounter->setValue(ui->step1saxis->axisReadback->value());

    return(fb);
}
