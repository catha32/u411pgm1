#include "pinholes6_help2.h"
#include "ui_pinholes6_help2.h"

#include "qcachannel.h"

pinholes6_help2::pinholes6_help2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinholes6_help2)
{
    ui->setupUi(this);

    this->setWindowTitle("motorHelp");
}

pinholes6_help2::~pinholes6_help2()
{
    delete ui;
}
