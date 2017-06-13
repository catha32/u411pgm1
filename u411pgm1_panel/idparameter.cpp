#include "idparameter.h"
#include "ui_idparameter.h"

#include <QTimer>
#include <QEventLoop>

#include "qcachannel.h"
#include "qcacounter.h"
#include "qcacombobox.h"

idparameter::idparameter(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::idparameter)
{
    ui->setupUi(this);

    chanDebug = new QCAChannel("u411pgm1:IdSetAutoOrder");

    QCACounter *counter;
    counter = ui->energyAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->fixgapAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->fixshiftAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->forceAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->forceAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->gapiAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->offAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->posAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->shiAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->slopeAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->userAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->fixgapshiftAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

}

idparameter::~idparameter()
{
    delete ui;
    delete chanDebug;
}

bool idparameter::init1()
{
    bool fb = true;

    ui->energyAxis->axisCounter->setValue(ui->energyAxis->axisReadback->value());
    ui->fixgapAxis->axisCounter->setValue(ui->fixgapAxis->axisReadback->value());
    ui->fixshiftAxis->axisCounter->setValue(ui->fixshiftAxis->axisReadback->value());
    ui->fixgapAxis->axisCounter->setValue(ui->fixgapAxis->axisReadback->value());
    ui->forceAxis->axisCounter->setValue(ui->forceAxis->axisReadback->value());
    ui->gapiAxis->axisCounter->setValue(ui->gapiAxis->axisReadback->value());
    ui->offAxis->axisCounter->setValue(ui->offAxis->axisReadback->value());
    ui->posAxis->axisCounter->setValue(ui->posAxis->axisReadback->value());
    ui->shiAxis->axisCounter->setValue(ui->shiAxis->axisReadback->value());
    ui->slopeAxis->axisCounter->setValue(ui->slopeAxis->axisReadback->value());
    ui->userAxis->axisCounter->setValue(ui->userAxis->axisReadback->value());
    ui->fixgapshiftAxis->axisCounter->setValue(ui->fixgapshiftAxis->axisReadback->value());

    return(fb);
}

/*bool idparameter::init()
{
    bool fb = true;

    ui->ComboBox = new QCAComboBox;
    ui->ComboBox->setCurrentIndex(1);
    //QCAComboBox::
    QTimer *t = new QTimer(this);
    t->start(1000);
    QEventLoop *loop = new QEventLoop();
    connect(t, SIGNAL(timeout()), loop, SLOT(quit()));
    loop->exec();

    chanDebug->put("On");
    loop->exec();

    return(fb);

}*/
