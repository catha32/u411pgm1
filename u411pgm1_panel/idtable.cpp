#include "idtable.h"
#include "ui_idtable.h"

#include "qcachannel.h"
#include "selectdialog.h"

#include <qwt_plot.h>
#include <qwt_compat.h>
#include <qwt_plot_curve.h>
#include <qwt_picker.h>
#include <qwt_plot_picker.h>
#include <qwt_plot_zoomer.h>

#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QStringList>
#include <QTextStream>
#include <QVector>
#include <QString>


IdTable::IdTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::IdTable)
{
    ui->setupUi(this);

    drawIDPlot(1);






    //chanX = new QCAChannel("u411pgm1:wfGetEnergy");
    chanY = new QCAChannel("u411pgm1:wfGetHarmonic");


}

IdTable::~IdTable()
{
    delete ui;
    //delete chanX;
    delete chanY;
}


void IdTable::drawIDPlot(int harmonic)
{
    QFile *file2 = new QFile();
    file2->setFileName("/home/txmuser/dev/h1357c0p65_sh.idt");
    QStringList input1, input2;
    QVector<double> vectx, vecty;


    if(file2->open(QIODevice::ReadOnly))
    {
        QTextStream str (file2);
        while(!str.atEnd())
        {
            input1 << str.readLine();
        }

        switch(harmonic)
        {
        case 1:
            //Daten 1st Harmonic
            for(int i=26; i<1024; i++)
            {
                input2 << input1[i].split("\t");
            }

            for(int l=0; l<input2.size(); l++)
            {
                input2[l] = input2[l].simplified();
                vectx.append(input2[l].section(" ",0,0).toDouble());
                vecty.append(input2[l].section(" ",1,1).toDouble());
                l=l+10;
            }
            //Skalierung Plot
            ui->qwtPlot->setAxisScale(QwtPlot::xBottom, 150, 700);
            ui->qwtPlot->setAxisScale(QwtPlot::yLeft, 15, 55);

            break;
            //Daten 3st Harmonic
         case 3:
            for(int i=698; i<3206; i++)
            {
                input2 << input1[i].split("\t").first().split(QRegularExpression("\\s+"), QString::SkipEmptyParts);
                //input2 << input1[i].remove(1,2);
            }


            /*for (int i=0; i<input2.size(); i++)
            {
                input2[i] = input2[i].remove(2, 2);
            }*/




            for(int l=0; l<input2.size(); l++)
            {

                input2[l] = input2[l].simplified();


                ui->textEdit->append(input2[l]);
            }

            ui->qwtPlot->setAxisScale(QwtPlot::xBottom, 400, 1800);
            ui->qwtPlot->setAxisScale(QwtPlot::yLeft, 10, 40);


            break;
         case 5:
            break;
         case 7:
            break;
         default:
            break;
        }
        file2->close();
    }


    QwtPlotCurve *curve = new QwtPlotCurve();
    curve->setSamples(vectx, vecty);
    curve->attach(ui->qwtPlot);
    ui->qwtPlot->setAxisTitle(QwtPlot::xBottom, " ");
    ui->qwtPlot->setAxisTitle(QwtPlot::yLeft, "Gap in mm");
    ui->qwtPlot->replot();

}



void IdTable::on_pushButton_clicked()
{
    QString test = QString::number(chanY->value());
    ui->textEdit->append(test);
    QString testFilename;
}

void IdTable::on_comboBox_currentIndexChanged(int index)
{
    if (index == 4)
    {

    }else {
        drawIDPlot(2*index+1);
    }
}

void IdTable::on_pushButton_2_clicked()
{
    selectDialog selectdialog;
    selectdialog.setModal(true);
    selectdialog.exec();
}
