#include "aperturedialog.h"
#include "ui_aperturedialog.h"

#include "qcachannel.h"
#include "qcacounter.h"

aperturedialog::aperturedialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aperturedialog)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_4->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);


    this->setWindowTitle("Aperture Help");
}

aperturedialog::~aperturedialog()
{
    delete ui;
}
