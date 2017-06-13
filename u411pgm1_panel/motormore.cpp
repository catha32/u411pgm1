#include "motormore.h"
#include "ui_motormore.h"

#include "qcachannel.h"

motormore::motormore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::motormore)
{
    ui->setupUi(this);

    this->setWindowTitle("Motor more");
}

motormore::~motormore()
{
    delete ui;
}
