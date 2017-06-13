#include "feedback.h"
#include "ui_feedback.h"

#include <qcachannel.h>

feedback::feedback(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::feedback)
{
    ui->setupUi(this);

    this->setWindowTitle("Feedback");

    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
}

feedback::~feedback()
{
    delete ui;
}

