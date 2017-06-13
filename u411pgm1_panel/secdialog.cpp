#include "secdialog.h"
#include "ui_secdialog.h"

secDialog::secDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("About Mono");
}

secDialog::~secDialog()
{
    delete ui;
}
