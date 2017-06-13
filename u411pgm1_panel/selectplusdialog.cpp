#include "selectplusdialog.h"
#include "ui_selectplusdialog.h"

#include "qcachannel.h"

selectplusdialog::selectplusdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::selectplusdialog)
{
    ui->setupUi(this);

    this->setWindowTitle("idShortSelect");
}

selectplusdialog::~selectplusdialog()
{
    delete ui;
}
