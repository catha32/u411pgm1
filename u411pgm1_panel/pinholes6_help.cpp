#include "pinholes6_help.h"
#include "ui_pinholes6_help.h"

#include "qcachannel.h"

pinholes6_help::pinholes6_help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pinholes6_help)
{
    ui->setupUi(this);

    this->setWindowTitle("motorHelp");
}

pinholes6_help::~pinholes6_help()
{
    delete ui;
}
