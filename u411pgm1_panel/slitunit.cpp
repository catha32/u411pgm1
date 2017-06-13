#include "slitunit.h"
#include "ui_slitunit.h"

// local includes
#include "qcacounter.h"
#include "qcachannel.h"


#include "slitdialog.h"

slitunit::slitunit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::slitunit)
{
    ui->setupUi(this);


    QCACounter *counter;
    counter = ui->Axis_1->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-200);
    counter->setMaximum(200);

    counter = ui->Axis_2->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_3->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_4->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_5->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_6->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_7->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_8->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);

    counter = ui->Axis_9->axisCounter;
    counter->setControlInfoFromChannel(false);
    counter->setNumButtons(2);
    counter->setSingleStep(5);
    counter->setStepButton1(10);
    counter->setStepButton2(15);
    //counter->setStepButton3(100);
    counter->setMinimum(-1000);
    counter->setMaximum(1000);


    //scene = new QGraphicsScene(this);
    //ui->graphicsView->setScene(scene);

    //square = new MySquare();
    //scene->addItem(square);


}

slitunit::~slitunit()
{
    delete ui;
}

void slitunit::on_pushButton_clicked()
{
    slitDialog slitdialog;
    slitdialog.setModal(true);
    slitdialog.exec();

}
