#include "inputsignals.h"
#include "ui_inputsignals.h"

inputsignals::inputsignals(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::inputsignals)
{
    ui->setupUi(this);

    this->setWindowTitle("InputSignals");
}

inputsignals::~inputsignals()
{
    delete ui;
}
