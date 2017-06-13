#include "settings.h"
#include "ui_settings.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

settings::settings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::settings)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->cffAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->diffAxis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->holdAxis_3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(5000);

    this->setWindowTitle("Settings");
}

settings::~settings()
{
    delete ui;
}

bool settings::init()
{
    bool fb = true;

    ui->cffAxis->axisCounter->setValue(ui->cffAxis->axisReadback->value());
    ui->diffAxis_2->axisCounter->setValue(ui->diffAxis_2->axisReadback->value());
    ui->holdAxis_3->axisCounter->setValue(ui->holdAxis_3->axisReadback->value());

    return(fb);
}
