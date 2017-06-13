#include "motormore2.h"
#include "ui_motormore2.h"

#include "qcachannel.h"

motormore2::motormore2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::motormore2)
{
    ui->setupUi(this);

    this->setWindowTitle("Motor more");
}

motormore2::~motormore2()
{
    delete ui;
}
