#include "slitdialog.h"
#include "ui_slitdialog.h"

//#include "slitunit.h"
#include "qcachannel.h"


slitDialog::slitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::slitDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("SlitDialog");

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

slitDialog::~slitDialog()
{
    delete ui;
}



