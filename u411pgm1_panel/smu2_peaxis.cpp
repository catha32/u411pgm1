#include "smu2_peaxis.h"
#include "ui_smu2_peaxis.h"

#include "qcachannel.h"
#include "qcacounter.h"

#include "smu2_peaxism1.h"
#include "smu2_peaxism2.h"
#include "smu2_peaxism3.h"
#include "smu2_peaxism4.h"
#include "smu2_peaxism5.h"

smu2_peaxis::smu2_peaxis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2_peaxis)
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

    counter = ui->m2Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m3Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m4Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(200);

    counter = ui->m5Axis_2->axisCounter;
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

    counter = ui->m2Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m3Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m4Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);

    counter = ui->m5Axis_1->axisCounter;
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

smu2_peaxis::~smu2_peaxis()
{
    delete ui;
}

bool smu2_peaxis::init()
{
    bool fb = true;

    ui->m1Axis_1->axisCounter->setValue(ui->m1Axis_1->axisReadback->value());
    ui->m2Axis_1->axisCounter->setValue(ui->m2Axis_1->axisReadback->value());
    ui->m3Axis_1->axisCounter->setValue(ui->m3Axis_1->axisReadback->value());
    ui->m4Axis_1->axisCounter->setValue(ui->m4Axis_1->axisReadback->value());
    ui->m5Axis_1->axisCounter->setValue(ui->m5Axis_1->axisReadback->value());



    return(fb);
}

void smu2_peaxis::on_pushButton_2_clicked()
{
    smu2_peaxism1 smu2_peaxism1;
    smu2_peaxism1.setModal(true);
    smu2_peaxism1.exec();
}

void smu2_peaxis::on_pushButton_4_clicked()
{
    smu2_peaxism2 smu2_peaxism2;
    smu2_peaxism2.setModal(true);
    smu2_peaxism2.exec();
}

void smu2_peaxis::on_pushButton_6_clicked()
{
    smu2_peaxism3 smu2_peaxism3;
    smu2_peaxism3.setModal(true);
    smu2_peaxism3.exec();
}

void smu2_peaxis::on_pushButton_8_clicked()
{
    smu2_peaxism4 smu2_peaxism4;
    smu2_peaxism4.setModal(true);
    smu2_peaxism4.exec();
}

void smu2_peaxis::on_pushButton_10_clicked()
{
    smu2_peaxism5 smu2_peaxism5;
    smu2_peaxism5.setModal(true);
    smu2_peaxism5.exec();
}
