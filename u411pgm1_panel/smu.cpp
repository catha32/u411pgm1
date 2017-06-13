#include "smu.h"
#include "ui_smu.h"

#include "qcachannel.h"

smu::smu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu)
{
    ui->setupUi(this);
}

smu::~smu()
{
    delete ui;
}
