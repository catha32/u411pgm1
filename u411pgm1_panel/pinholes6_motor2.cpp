#include "pinholes6_motor2.h"
#include "ui_pinholes6_motor2.h"

#include "qcachannel.h"

pinholes6_motor2::pinholes6_motor2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinholes6_motor2)
{
    ui->setupUi(this);

    this->setWindowTitle("Motor more");
}

pinholes6_motor2::~pinholes6_motor2()
{
    delete ui;
}
