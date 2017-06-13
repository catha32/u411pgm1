#include "pinholes6_motor.h"
#include "ui_pinholes6_motor.h"

#include "qcachannel.h"

pinholes6_motor::pinholes6_motor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinholes6_motor)
{
    ui->setupUi(this);

    this->setWindowTitle("Motor more");
}

pinholes6_motor::~pinholes6_motor()
{
    delete ui;
}
