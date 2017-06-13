#include "heydemann.h"
#include "ui_heydemann.h"

#include "qcachannel.h"
#include "qcacounter.h"
#include <QProcess>

#include "inputsignals.h"
#include "feedback.h"
#include "heydemanndata.h"


heydemann::heydemann(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::heydemann)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->startAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->stopAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->offAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    counter = ui->rateAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(0);
    counter->setMaximum(2500);

    this->setWindowTitle("Heydemann");

    //connect(changeHey, SIGNAL(valueChanged(double)), this, SLOT(valueChangedSlot(double)));
    //installEventFilter(changeHey);

    changeHey = new QCAChannel("u411pgm1:liVAL", this);
}

heydemann::~heydemann()
{
    delete ui;
    delete changeHey;
}

bool heydemann::init()
{
    bool fb = true;

    ui->startAxis->axisCounter->setValue(ui->startAxis->axisReadback->value());
    ui->stopAxis->axisCounter->setValue(ui->stopAxis->axisReadback->value());
    ui->offAxis->axisCounter->setValue(ui->offAxis->axisReadback->value());
    ui->rateAxis->axisCounter->setValue(ui->rateAxis->axisReadback->value());
    return(fb);
}

void heydemann::valueChangedSlot(double value)
{
  //updateFieldSize(changeHey->value());
    //ui->progressBar->setValue(changeHey->value());
}

void heydemann::on_pushButton_4_clicked()
{
    heydemanndata heydemanndata;
    heydemanndata.setModal(true);
    heydemanndata.exec();
}

void heydemann::on_pushButton_6_clicked()
{
    inputsignals inputsignals;
    inputsignals.setModal(true);
    inputsignals.exec();

}

void heydemann::on_pushButton_7_clicked()
{
    feedback feedback;
    feedback.setModal(true);
    feedback.exec();
}
