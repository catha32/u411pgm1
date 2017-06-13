#include "idchikane.h"
#include "ui_idchikane.h"

idchikane::idchikane(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::idchikane)
{
    ui->setupUi(this);

    this->setWindowTitle("idChikane");
}

idchikane::~idchikane()
{
    delete ui;
}
