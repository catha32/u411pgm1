#include "apertures6.h"
#include "ui_apertures6.h"

#include "qcachannel.h"
#include "qcacounter.h"
#include "motormore.h"
#include "motormore2.h"
#include "motormore3.h"
#include "motormore4.h"

apertures6::apertures6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::apertures6)
{
    ui->setupUi(this);




    this->setWindowTitle("ApertureS6");
}

apertures6::~apertures6()
{
    delete ui;
}

void apertures6::on_pushButton_2_clicked()
{
    motormore motormore;
    motormore.setModal(true);
    motormore.exec();
}

void apertures6::on_pushButton_4_clicked()
{
    motormore2 motormore2;
    motormore2.setModal(true);
    motormore2.exec();
}

void apertures6::on_pushButton_7_clicked()
{
    motormore3 motormore3;
    motormore3.setModal(true);
    motormore3.exec();
}

void apertures6::on_pushButton_9_clicked()
{
    motormore4 motormore4;
    motormore4.setModal(true);
    motormore4.exec();
}
