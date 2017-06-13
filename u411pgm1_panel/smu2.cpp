#include "smu2.h"
#include "ui_smu2.h"

#include "smu2_xm.h"

#include "qcachannel.h"

smu2::smu2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::smu2)
{
    ui->setupUi(this);

    this->setWindowTitle("SMU41_2");
}

smu2::~smu2()
{
    delete ui;
}

void smu2::on_pushButton_clicked()
{
    smu2_xm smu2_xm;
    smu2_xm.setModal(true);
    smu2_xm.exec();

}
