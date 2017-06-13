#include "storagering.h"
#include "ui_storagering.h"

// Qt includes
#include <QString>
#include <QPalette>

// local includes
#include "qcachannel.h"

storagering::storagering(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::storagering)
{
    ui->setupUi(this);

    changetSRState = new QCAChannel("TOPUPCC:message", this);

    connect(changetSRState, SIGNAL(valueChanged(double)), this, SLOT(updateBG(double)));
    installEventFilter(changetSRState);
    updateBG(changetSRState->value());
}

storagering::~storagering()
{
    delete ui;
    delete changetSRState;

}

void storagering::updateBG(double state)
{
    QPalette palette;

    if (state == 1.0)
    {
        palette.setColor(QPalette::Window, Qt::green);
    }else{
        palette.setColor(QPalette::Window, Qt::red);
    }

    palette.setColor(QPalette::WindowText, Qt::black);
    ui->Label_4->setAutoFillBackground(true);
    ui->Label_4->setPalette(palette);
}
