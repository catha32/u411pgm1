#include "smu41_2.h"
#include "ui_smu41_2.h"

#include "qcachannel.h"
#include "smu2_xm.h"
#include "smu2_peaxis.h"

smu41_2::smu41_2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smu41_2)
{
    ui->setupUi(this);

    this->setWindowTitle("SMU41_2");
}

smu41_2::~smu41_2()
{
    delete ui;
}

void smu41_2::on_pushButton_clicked()
{
    smu2_xm smu2_xm;
    smu2_xm.setModal(true);
    smu2_xm.exec();

    smu2_peaxis smu2_peaxis;
    smu2_peaxis.setModal(true);
    smu2_peaxis.exec();

}
