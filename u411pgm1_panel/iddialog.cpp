#include "iddialog.h"
#include "ui_iddialog.h"

idDialog::idDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::idDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("idAbout");
}

idDialog::~idDialog()
{
    delete ui;
}
