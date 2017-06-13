#include "central.h"
#include "ui_central.h"

#include <QProcess>
#include <QString>

#include <qcachannel.h>


Central::Central(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Central)
{
    ui->setupUi(this);

    connect(ui->clearButton, SIGNAL(clicked()), ui->textEdit, SLOT(clear()));
}

Central::~Central()
{
    delete ui;
}

void Central::textrecieved(QString text)
{
    ui->textEdit->append(text);
}
