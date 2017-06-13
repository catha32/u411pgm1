#include "idcommunication.h"
#include "ui_idcommunication.h"

#include "qcachannel.h"

#include "idchikane.h"

idcommunication::idcommunication(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::idcommunication)
{
    ui->setupUi(this);
}

idcommunication::~idcommunication()
{
    delete ui;
}

void idcommunication::on_pushButton_clicked()
{
    idchikane idchikane;
    idchikane.setModal(true);
    idchikane.exec();
}
