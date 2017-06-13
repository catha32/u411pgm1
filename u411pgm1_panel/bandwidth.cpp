#include "bandwidth.h"
#include "ui_bandwidth.h"

#include <qcachannel.h>

bandwidth::bandwidth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bandwidth)
{
    ui->setupUi(this);

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));

    this->setWindowTitle("Bandwidth");
}

bandwidth::~bandwidth()
{
    delete ui;
}
