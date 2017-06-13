#include "pinholes6a.h"
#include "ui_pinholes6a.h"

#include "qcachannel.h"

pinholes6a::pinholes6a(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinholes6a)
{
    ui->setupUi(this);

     this->setWindowTitle("PinholeS6");
}

pinholes6a::~pinholes6a()
{
    delete ui;
}
