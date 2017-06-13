#include "slitwidthvertical.h"
#include "ui_slitwidthvertical.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

//#include "dialog.h"


slitwidthvertical::slitwidthvertical(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slitwidthvertical)
{
    ui->setupUi(this);

    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(close()));

    QCACounter *counter;
    counter = ui->slitwidthaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->bandwidthaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->monoaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->exitarmaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(500);

    counter = ui->slitaxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.01);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(10);

    counter = ui->Axis_5->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(5);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);


}

slitwidthvertical::~slitwidthvertical()
{
    delete ui;
}

bool slitwidthvertical::init()
{
    bool fb = true;

    ui->slitwidthaxis->axisCounter->setValue(ui->slitwidthaxis->axisReadback->value());
    ui->bandwidthaxis->axisCounter->setValue(ui->bandwidthaxis->axisReadback->value());
    ui->monoaxis->axisCounter->setValue(ui->monoaxis->axisReadback->value());
    ui->exitarmaxis->axisCounter->setValue(ui->exitarmaxis->axisReadback->value());
    ui->slitaxis->axisCounter->setValue(ui->slitaxis->axisReadback->value());
    //ui->setslimaxis->axisCounter->setValue(ui->setslimaxis->axisReadback->value());



    return(fb);
}

/*void slitwidthvertical::on_pushButton_5_clicked()
{
    Dialog dialog;
    dialog.setModal(true);
    dialog.exec();
}*/


