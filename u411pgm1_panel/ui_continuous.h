/********************************************************************************
** Form generated from reading UI file 'continuous.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTINUOUS_H
#define UI_CONTINUOUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_continuous
{
public:
    QCAAxis *Axis1;
    QCAAxis *Axis2;
    QCAAxis *Axis3;
    QCAPushButton *pushButton;
    QCAPushButton *pushButton_2;
    QCAPushButton *pushButton_3;
    QCAAxis *Axis4;
    QCAAxis *Axis5;
    QCAAxis *Axis6;
    QCALabel *label;
    QCAAxis *Axis7;
    QCAAxis *Axis8;
    QCAAxis *Axis9;
    QCAAxis *Axis10;
    QCAAxis *Axis11;
    QCAComboBox *ComboBox_4;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *continuous)
    {
        if (continuous->objectName().isEmpty())
            continuous->setObjectName(QStringLiteral("continuous"));
        continuous->resize(1247, 493);
        Axis1 = new QCAAxis(continuous);
        Axis1->setObjectName(QStringLiteral("Axis1"));
        Axis1->setGeometry(QRect(30, 60, 280, 27));
        Axis1->setMinimumSize(QSize(100, 10));
        Axis2 = new QCAAxis(continuous);
        Axis2->setObjectName(QStringLiteral("Axis2"));
        Axis2->setGeometry(QRect(330, 60, 280, 27));
        Axis2->setMinimumSize(QSize(100, 10));
        Axis3 = new QCAAxis(continuous);
        Axis3->setObjectName(QStringLiteral("Axis3"));
        Axis3->setGeometry(QRect(640, 60, 280, 27));
        Axis3->setMinimumSize(QSize(100, 10));
        pushButton = new QCAPushButton(continuous);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1150, 40, 81, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_2 = new QCAPushButton(continuous);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1150, 80, 81, 22));
        pushButton_3 = new QCAPushButton(continuous);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1150, 120, 81, 22));
        Axis4 = new QCAAxis(continuous);
        Axis4->setObjectName(QStringLiteral("Axis4"));
        Axis4->setGeometry(QRect(30, 170, 280, 27));
        Axis4->setMinimumSize(QSize(100, 10));
        Axis5 = new QCAAxis(continuous);
        Axis5->setObjectName(QStringLiteral("Axis5"));
        Axis5->setGeometry(QRect(340, 170, 280, 27));
        Axis5->setMinimumSize(QSize(100, 10));
        Axis6 = new QCAAxis(continuous);
        Axis6->setObjectName(QStringLiteral("Axis6"));
        Axis6->setGeometry(QRect(640, 170, 280, 27));
        Axis6->setMinimumSize(QSize(100, 10));
        label = new QCALabel(continuous);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(970, 180, 59, 14));
        label->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        Axis7 = new QCAAxis(continuous);
        Axis7->setObjectName(QStringLiteral("Axis7"));
        Axis7->setGeometry(QRect(30, 280, 280, 27));
        Axis7->setMinimumSize(QSize(100, 10));
        Axis8 = new QCAAxis(continuous);
        Axis8->setObjectName(QStringLiteral("Axis8"));
        Axis8->setGeometry(QRect(340, 280, 280, 27));
        Axis8->setMinimumSize(QSize(100, 10));
        Axis9 = new QCAAxis(continuous);
        Axis9->setObjectName(QStringLiteral("Axis9"));
        Axis9->setGeometry(QRect(640, 280, 280, 27));
        Axis9->setMinimumSize(QSize(100, 10));
        Axis10 = new QCAAxis(continuous);
        Axis10->setObjectName(QStringLiteral("Axis10"));
        Axis10->setGeometry(QRect(950, 280, 280, 27));
        Axis10->setMinimumSize(QSize(100, 10));
        Axis11 = new QCAAxis(continuous);
        Axis11->setObjectName(QStringLiteral("Axis11"));
        Axis11->setGeometry(QRect(950, 380, 280, 27));
        Axis11->setMinimumSize(QSize(100, 10));
        ComboBox_4 = new QCAComboBox(continuous);
        ComboBox_4->setObjectName(QStringLiteral("ComboBox_4"));
        ComboBox_4->setGeometry(QRect(30, 390, 81, 22));
        label_2 = new QLabel(continuous);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 370, 59, 14));
        label_3 = new QLabel(continuous);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 420, 59, 14));

        retranslateUi(continuous);

        QMetaObject::connectSlotsByName(continuous);
    } // setupUi

    void retranslateUi(QDialog *continuous)
    {
        continuous->setWindowTitle(QApplication::translate("continuous", "Dialog", 0));
        Axis1->setProperty("description", QVariant(QApplication::translate("continuous", "Start", 0)));
        Axis1->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepStart", 0)));
        Axis1->setProperty("units", QVariant(QApplication::translate("continuous", "eV", 0)));
        Axis1->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepStart", 0)));
        Axis2->setProperty("description", QVariant(QApplication::translate("continuous", "End", 0)));
        Axis2->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepEnd", 0)));
        Axis2->setProperty("units", QVariant(QApplication::translate("continuous", "eV", 0)));
        Axis2->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepEnd", 0)));
        Axis3->setProperty("description", QVariant(QApplication::translate("continuous", "Vel", 0)));
        Axis3->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepVel", 0)));
        Axis3->setProperty("units", QVariant(QApplication::translate("continuous", "eV/s", 0)));
        Axis3->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepVel", 0)));
        pushButton->setText(QApplication::translate("continuous", "STOP", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:MonoAktion.PROC", 0)));
        pushButton_2->setText(QApplication::translate("continuous", "SweepInit", 0));
        pushButton_2->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:MonoAktion.PROC", 0)));
        pushButton_3->setText(QApplication::translate("continuous", "SweepRun", 0));
        pushButton_3->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:MonoAktion.PROC", 0)));
        Axis4->setProperty("description", QVariant(QApplication::translate("continuous", "Startramp", 0)));
        Axis4->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetStartRamp", 0)));
        Axis4->setProperty("units", QVariant(QString()));
        Axis4->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:GetStartRamp", 0)));
        Axis5->setProperty("description", QVariant(QApplication::translate("continuous", "State", 0)));
        Axis5->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepState", 0)));
        Axis5->setProperty("units", QVariant(QString()));
        Axis5->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepState", 0)));
        Axis6->setProperty("description", QVariant(QString()));
        Axis6->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:monoGetEnergy", 0)));
        Axis6->setProperty("units", QVariant(QApplication::translate("continuous", "eV", 0)));
        Axis6->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:monoGetEnergy", 0)));
        label->setText(QApplication::translate("continuous", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:Status", 0)));
        Axis7->setProperty("description", QVariant(QApplication::translate("continuous", "Vmin Faktor", 0)));
        Axis7->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepVminFak", 0)));
        Axis7->setProperty("units", QVariant(QString()));
        Axis7->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepVminFak", 0)));
        Axis8->setProperty("description", QVariant(QApplication::translate("continuous", "Vmax Faktor", 0)));
        Axis8->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepVmaxFak", 0)));
        Axis8->setProperty("units", QVariant(QString()));
        Axis8->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepVmaxFak", 0)));
        Axis9->setProperty("description", QVariant(QApplication::translate("continuous", "Offset", 0)));
        Axis9->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:GetSweepOffset", 0)));
        Axis9->setProperty("units", QVariant(QApplication::translate("continuous", "eV", 0)));
        Axis9->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepOffset", 0)));
        Axis10->setProperty("description", QVariant(QApplication::translate("continuous", "Tics", 0)));
        Axis10->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:SweepTics", 0)));
        Axis10->setProperty("units", QVariant(QApplication::translate("continuous", "eV", 0)));
        Axis10->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepTics", 0)));
        Axis11->setProperty("description", QVariant(QApplication::translate("continuous", "TGG", 0)));
        Axis11->setProperty("pvReadback", QVariant(QApplication::translate("continuous", "u411pgm1:TGG", 0)));
        Axis11->setProperty("units", QVariant(QString()));
        Axis11->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:TGG", 0)));
        ComboBox_4->clear();
        ComboBox_4->insertItems(0, QStringList()
         << QApplication::translate("continuous", "quadr.", 0)
         << QApplication::translate("continuous", "linear", 0)
        );
        ComboBox_4->setProperty("pv", QVariant(QApplication::translate("continuous", "u411pgm1:SetSweepGapMeth", 0)));
        label_2->setText(QApplication::translate("continuous", "GapMeth", 0));
        label_3->setText(QApplication::translate("continuous", "quadr.", 0));
    } // retranslateUi

};

namespace Ui {
    class continuous: public Ui_continuous {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTINUOUS_H
