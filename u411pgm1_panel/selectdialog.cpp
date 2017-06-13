#include "selectdialog.h"
#include "ui_selectdialog.h"

#include "qcachannel.h"
#include "selectplusdialog.h"

selectDialog::selectDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("idSelect");
}

selectDialog::~selectDialog()
{
    delete ui;
}

void selectDialog::on_pushButton_clicked()
{
    selectplusdialog selectplusdialog;
    selectplusdialog.setModal(true);
    selectplusdialog.exec();

}
