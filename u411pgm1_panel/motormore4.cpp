#include "motormore4.h"
#include "ui_motormore4.h"

#include "qcachannel.h"

motormore4::motormore4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::motormore4)
{
    ui->setupUi(this);

    this->setWindowTitle("Motor more");
}

motormore4::~motormore4()
{
    delete ui;
}
