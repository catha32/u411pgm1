#include "u411pgm1.h"
#include "ui_u411pgm1.h"

#include <QTimer>
#include <QEventLoop>
#include <QTextEdit>
#include <QString>
#include <QObject>

// local includes
#include "qcacounter.h"
#include "qcachannel.h"

#include "qcacombobox.h"

#include "settings.h"
#include "smu.h"
#include "smu2.h"
#include "bandwidth.h"
#include "pinholes6a.h"
#include "u41it3r.h"
#include "apertures6.h"
#include "smu1_pgm1.h"
#include "continuous.h"

u411pgm1::u411pgm1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::u411pgm1)
{
    ui->setupUi(this);

    QCACounter *counter;
    counter = ui->energyAxis->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(0);
    counter->setSingleStep(0.1);
    counter->setStepButton1(1);
    counter->setStepButton2(10);
    counter->setStepButton3(100);
    counter->setMinimum(170);
    counter->setMaximum(2500);


    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(clear()));
    connect(ui->textEdit, SIGNAL(textChanged(QString)), this, SLOT(setText(QString)));

    //chanDebug = new QCAChannel("u411pgm1:IdSetAutoOrder");
    chanTXM = new QCAChannel("u411pgm1:SetBranch");
}

u411pgm1::~u411pgm1()
{
    delete ui;
    //delete chanDebug;
    delete chanTXM;
}



/*bool u411pgm1::init()
{
    bool fb = true;

    ui->ComboBox = new QCAComboBox;

    //ui->ComboBox->currentTextChanged(("TXM"));

    QTimer *t = new QTimer(this);
    t->start(1000);
    QEventLoop *loop = new QEventLoop();
    connect(t, SIGNAL(timeout()), loop, SLOT(quit()));
    loop->exec();

    //chanDebug->put("On");
    chanTXM->put("TXM");
    loop->exec();

    return(fb);

}*/

bool u411pgm1::init()
{
    bool fb = true;

    ui->energyAxis->axisCounter->setValue(ui->energyAxis->axisReadback->value());

    return(fb);
}

void u411pgm1::on_pushButton_5_clicked()
{
    settings settings;
    settings.setModal(true);
    settings.exec();

}

void u411pgm1::on_pushButton_2_clicked()
{
     QApplication::quit();
}



void u411pgm1::on_pushButton_clicked()
{
    bandwidth bandwidth;
    bandwidth.setModal(true);
    bandwidth.exec();
}


void u411pgm1::on_pushButton_11_clicked()
{
    u41it3r u41it3r;
    u41it3r.setModal(true);
    u41it3r.exec();

}

void u411pgm1::on_pushButton_14_clicked()
{
    apertures6 apertures6;
    apertures6.setModal(true);
    apertures6.exec();
}

void u411pgm1::on_pushButton_12_clicked()
{
    smu1_pgm1 smu1_pgm1;
    smu1_pgm1.setModal(true);
    smu1_pgm1.exec();
}

void u411pgm1::on_pushButton_6_clicked()
{

    continuous continuous;
    continuous.setModal(true);
    continuous.exec();
}
