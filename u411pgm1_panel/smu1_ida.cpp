#include "smu1_ida.h"
#include "ui_smu1_ida.h"

#include "qcachannel.h"
#include "qcacounter.h"

#include "smu1_m1.h"
#include "smu1_m2.h"
#include "smu1_m3.h"
#include "smu1_m4.h"
#include "smu1_m5.h"

smu1_ida::smu1_ida(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_ida)
{
    ui->setupUi(this);

    this->setWindowTitle("SMU41_1IDa");

    QCACounter *counter;
    counter = ui->m5Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m5Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m4Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m4Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m3Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m3Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m2Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m2Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m1Axis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m1Axis2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);
}

smu1_ida::~smu1_ida()
{
    delete ui;
}

bool smu1_ida::init()
{
    bool fb = true;

    ui->m5Axis2->axisCounter->setValue(ui->m5Axis2->axisReadback->value());
    ui->m4Axis2->axisCounter->setValue(ui->m4Axis2->axisReadback->value());
    ui->m3Axis2->axisCounter->setValue(ui->m3Axis2->axisReadback->value());
    ui->m2Axis2->axisCounter->setValue(ui->m2Axis2->axisReadback->value());
    ui->m1Axis2->axisCounter->setValue(ui->m1Axis2->axisReadback->value());


    return(fb);
}



void smu1_ida::on_pushButton_16_clicked()
{
    smu1_m1 smu1_m1;
    smu1_m1.setModal(true);
    smu1_m1.exec();

}

void smu1_ida::on_pushButton_17_clicked()
{
    smu1_m2 smu1_m2;
    smu1_m2.setModal(true);
    smu1_m2.exec();
}

void smu1_ida::on_pushButton_18_clicked()
{
    smu1_m3 smu1_m3;
    smu1_m3.setModal(true);
    smu1_m3.exec();
}

void smu1_ida::on_pushButton_19_clicked()
{
    smu1_m4 smu1_m4;
    smu1_m4.setModal(true);
    smu1_m4.exec();
}

void smu1_ida::on_pushButton_20_clicked()
{
    smu1_m5 smu1_m5;
    smu1_m5.setModal(true);
    smu1_m5.exec();
}
