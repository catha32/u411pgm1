#include "smu2_xm.h"
#include "ui_smu2_xm.h"

#include "qcachannel.h"

#include "smu2_m1.h"
#include "smu2_m6.h"
#include "smu2_m7.h"
#include "smu2_m8.h"
#include "smu2_m9.h"

smu2_xm::smu2_xm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_xm)
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
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m6Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m7Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m8Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m9Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    this->setWindowTitle("SMU41_2XM");
}

smu2_xm::~smu2_xm()
{
    delete ui;
}

bool smu2_xm::init()
{
    bool fb = true;

    ui->m1Axis_1->axisCounter->setValue(ui->m1Axis_1->axisReadback->value());
    ui->m6Axis_1->axisCounter->setValue(ui->m6Axis_1->axisReadback->value());
    ui->m7Axis_1->axisCounter->setValue(ui->m7Axis_1->axisReadback->value());
    ui->m8Axis_1->axisCounter->setValue(ui->m8Axis_1->axisReadback->value());
    ui->m9Axis_1->axisCounter->setValue(ui->m9Axis_1->axisReadback->value());



    return(fb);
}

void smu2_xm::on_pushButton_2_clicked()
{
    smu2_m1 smu2_m1;
    smu2_m1.setModal(true);
    smu2_m1.exec();
}

void smu2_xm::on_pushButton_4_clicked()
{
    smu2_m6 smu2_m6;
    smu2_m6.setModal(true);
    smu2_m6.exec();
}

void smu2_xm::on_pushButton_6_clicked()
{
    smu2_m7 smu2_m7;
    smu2_m7.setModal(true);
    smu2_m7.exec();
}

void smu2_xm::on_pushButton_8_clicked()
{
    smu2_m8 smu2_m8;
    smu2_m8.setModal(true);
    smu2_m8.exec();
}

void smu2_xm::on_pushButton_10_clicked()
{
    smu2_m9 smu2_m9;
    smu2_m9.setModal(true);
    smu2_m9.exec();
}
