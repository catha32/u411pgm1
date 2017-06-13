#include "smu1_idc.h"
#include "ui_smu1_idc.h"

#include "qcachannel.h"
#include "qcacounter.h"

#include "smu1_idcm1.h"
#include "smu1_idcm6.h"
#include "smu1_idcm7.h"
#include "smu1_idcm8.h"
#include "smu1_idcm9.h"

smu1_idc::smu1_idc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_idc)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->m1Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m6Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m7Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m8Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m9Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m1Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);

    counter = ui->m9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(600000);


    this->setWindowTitle("SMU41_1IDc");
}

smu1_idc::~smu1_idc()
{
    delete ui;
}

bool smu1_idc::init()
{
    bool fb = true;

    ui->m1Axis_1->axisCounter->setValue(ui->m1Axis_1->axisReadback->value());
    ui->m6Axis_1->axisCounter->setValue(ui->m7Axis_1->axisReadback->value());
    ui->m7Axis_1->axisCounter->setValue(ui->m7Axis_1->axisReadback->value());
    ui->m8Axis_1->axisCounter->setValue(ui->m8Axis_1->axisReadback->value());
    ui->m9Axis_1->axisCounter->setValue(ui->m9Axis_1->axisReadback->value());



    return(fb);
}


void smu1_idc::on_pushButton_2_clicked()
{
    smu1_idcm1 smu1_idcm1;
    smu1_idcm1.setModal(true);
    smu1_idcm1.exec();

}

void smu1_idc::on_pushButton_4_clicked()
{
    smu1_idcm6 smu1_idcm6;
    smu1_idcm6.setModal(true);
    smu1_idcm6.exec();
}

void smu1_idc::on_pushButton_6_clicked()
{
    smu1_idcm7 smu1_idcm7;
    smu1_idcm7.setModal(true);
    smu1_idcm7.exec();
}

void smu1_idc::on_pushButton_8_clicked()
{
    smu1_idcm8 smu1_idcm8;
    smu1_idcm8.setModal(true);
    smu1_idcm8.exec();
}

void smu1_idc::on_pushButton_10_clicked()
{
    smu1_idcm9 smu1_idcm9;
    smu1_idcm9.setModal(true);
    smu1_idcm9.exec();
}
