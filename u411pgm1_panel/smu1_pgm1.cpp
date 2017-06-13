#include "smu1_pgm1.h"
#include "ui_smu1_pgm1.h"

#include "qcachannel.h"

#include "smu1_pgm1m1.h"
#include "smu1_pgm1m6.h"
#include "smu1_pgm1m7.h"
#include "smu1_pgm1m8.h"
#include "smu1_pgm1m9.h"

smu1_pgm1::smu1_pgm1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu1_pgm1)
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

    this->setWindowTitle("SMU41_PGM1");
}

smu1_pgm1::~smu1_pgm1()
{
    delete ui;
}

bool smu1_pgm1::init()
{
    bool fb = true;

    ui->m1Axis_1->axisCounter->setValue(ui->m1Axis_1->axisReadback->value());
    ui->m6Axis_1->axisCounter->setValue(ui->m7Axis_1->axisReadback->value());
    ui->m7Axis_1->axisCounter->setValue(ui->m7Axis_1->axisReadback->value());
    ui->m8Axis_1->axisCounter->setValue(ui->m8Axis_1->axisReadback->value());
    ui->m9Axis_1->axisCounter->setValue(ui->m9Axis_1->axisReadback->value());



    return(fb);
}


void smu1_pgm1::on_pushButton_2_clicked()
{
    smu1_pgm1m1 smu1_pgm1m1;
    smu1_pgm1m1.setModal(true);
    smu1_pgm1m1.exec();
}

void smu1_pgm1::on_pushButton_4_clicked()
{
    smu1_pgm1m6 smu1_pgm1m6;
    smu1_pgm1m6.setModal(true);
    smu1_pgm1m6.exec();
}

void smu1_pgm1::on_pushButton_6_clicked()
{
    smu1_pgm1m7 smu1_pgm1m7;
    smu1_pgm1m7.setModal(true);
    smu1_pgm1m7.exec();
}

void smu1_pgm1::on_pushButton_8_clicked()
{
    smu1_pgm1m8 smu1_pgm1m8;
    smu1_pgm1m8.setModal(true);
    smu1_pgm1m8.exec();
}

void smu1_pgm1::on_pushButton_10_clicked()
{
    smu1_pgm1m9 smu1_pgm1m9;
    smu1_pgm1m9.setModal(true);
    smu1_pgm1m9.exec();

}
