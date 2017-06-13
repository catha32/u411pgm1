#include "motormore3.h"
#include "ui_motormore3.h"

#include "qcachannel.h"

motormore3::motormore3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::motormore3)
{
    ui->setupUi(this);

    this->setWindowTitle("Motor more");
}

motormore3::~motormore3()
{
    delete ui;
}
