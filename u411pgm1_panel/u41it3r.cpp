#include "u41it3r.h"
#include "ui_u41it3r.h"

#include "qcachannel.h"

u41it3r::u41it3r(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::u41it3r)
{
    ui->setupUi(this);

    this->setWindowTitle("U41IT3R");
}

u41it3r::~u41it3r()
{
    delete ui;
}
