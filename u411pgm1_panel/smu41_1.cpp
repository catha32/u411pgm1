#include "smu41_1.h"
#include "ui_smu41_1.h"

#include "qcachannel.h"
#include "smu1_ida.h"
#include "smu1_idc.h"


smu41_1::smu41_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::smu41_1)
{
    ui->setupUi(this);

    this->setWindowTitle("SMU41_1");
}

smu41_1::~smu41_1()
{
    delete ui;
}

void smu41_1::on_pushButton_clicked()
{
    smu1_ida smu1_ida;
    smu1_ida.setModal(true);
    smu1_ida.exec();

    smu1_idc smu1_idc;
    smu1_idc.setModal(true);
    smu1_idc.exec();


}
