#include "angles.h"
#include "ui_angles.h"


// local includes
#include "qcacounter.h"
#include "qcachannel.h"

angles::angles(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::angles)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->Axis1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-200);
    counter->setMaximum(200);

    counter = ui->Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis4->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);


}

angles::~angles()
{
    delete ui;
}




