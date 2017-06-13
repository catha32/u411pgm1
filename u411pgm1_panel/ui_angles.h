/********************************************************************************
** Form generated from reading UI file 'angles.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANGLES_H
#define UI_ANGLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcalabel.h"
#include "qcalcdnumber.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_angles
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QCALabel *label_6;
    QCALabel *label_7;
    QLabel *label_8;
    QCALabel *label_9;
    QCALabel *label_10;
    QLabel *label_11;
    QLabel *label_14;
    QCALabel *label_15;
    QCALabel *label_16;
    QCALCDNumber *lcdNumber;
    QCALCDNumber *lcdNumber_2;
    QLabel *label_12;
    QLineEdit *lineEdit;
    QCAPushButton *pushButton;
    QCAPushButton *pushButton_2;
    QLineEdit *lineEdit_2;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QCALabel *label_27;
    QCALabel *label_28;
    QCALabel *label_26;
    QCALabel *label_29;
    QCAAxis *Axis1;
    QCAAxis *Axis2;
    QCAAxis *Axis3;
    QCAAxis *Axis4;

    void setupUi(QWidget *angles)
    {
        if (angles->objectName().isEmpty())
            angles->setObjectName(QStringLiteral("angles"));
        angles->resize(624, 645);
        label = new QLabel(angles);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 30, 59, 14));
        label_2 = new QLabel(angles);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 50, 59, 14));
        label_3 = new QLabel(angles);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(430, 30, 71, 21));
        label_4 = new QLabel(angles);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(430, 50, 59, 14));
        label_5 = new QLabel(angles);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 90, 59, 14));
        label_6 = new QCALabel(angles);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(140, 90, 91, 16));
        label_7 = new QCALabel(angles);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 90, 81, 16));
        label_8 = new QLabel(angles);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 140, 59, 14));
        label_9 = new QCALabel(angles);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(140, 140, 91, 16));
        label_10 = new QCALabel(angles);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(420, 140, 101, 16));
        label_11 = new QLabel(angles);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 160, 59, 14));
        label_14 = new QLabel(angles);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(20, 200, 59, 14));
        label_15 = new QCALabel(angles);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(140, 200, 91, 16));
        label_16 = new QCALabel(angles);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(420, 200, 81, 16));
        lcdNumber = new QCALCDNumber(angles);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(140, 160, 64, 23));
        lcdNumber_2 = new QCALCDNumber(angles);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(420, 160, 64, 23));
        label_12 = new QLabel(angles);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 240, 59, 14));
        lineEdit = new QLineEdit(angles);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(130, 230, 101, 22));
        pushButton = new QCAPushButton(angles);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 260, 101, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_2 = new QCAPushButton(angles);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 260, 101, 22));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        lineEdit_2 = new QLineEdit(angles);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(410, 230, 101, 22));
        label_23 = new QLabel(angles);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(20, 550, 71, 16));
        label_24 = new QLabel(angles);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(180, 550, 71, 16));
        label_25 = new QLabel(angles);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(340, 550, 71, 16));
        label_27 = new QCALabel(angles);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(510, 550, 59, 14));
        label_27->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_28 = new QCALabel(angles);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(20, 570, 101, 16));
        label_26 = new QCALabel(angles);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(180, 570, 91, 16));
        label_29 = new QCALabel(angles);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(340, 570, 91, 16));
        Axis1 = new QCAAxis(angles);
        Axis1->setObjectName(QStringLiteral("Axis1"));
        Axis1->setGeometry(QRect(20, 340, 449, 32));
        Axis2 = new QCAAxis(angles);
        Axis2->setObjectName(QStringLiteral("Axis2"));
        Axis2->setGeometry(QRect(20, 390, 449, 32));
        Axis3 = new QCAAxis(angles);
        Axis3->setObjectName(QStringLiteral("Axis3"));
        Axis3->setGeometry(QRect(20, 440, 449, 32));
        Axis4 = new QCAAxis(angles);
        Axis4->setObjectName(QStringLiteral("Axis4"));
        Axis4->setGeometry(QRect(20, 490, 449, 32));

        retranslateUi(angles);

        QMetaObject::connectSlotsByName(angles);
    } // setupUi

    void retranslateUi(QWidget *angles)
    {
        angles->setWindowTitle(QApplication::translate("angles", "Form", 0));
        label->setText(QApplication::translate("angles", "<html><head/><body><p><span style=\" font-size:11pt;\">Mirror</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("angles", "<html><head/><body><p><span style=\" font-size:8pt;\">(arcsec)</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("angles", "<html><head/><body><p><span style=\" font-size:11pt;\">Grating</span></p><p><br/></p></body></html>", 0));
        label_4->setText(QApplication::translate("angles", "<html><head/><body><p><span style=\" font-size:8pt;\">(arcsec)</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("angles", "top", 0));
        label_6->setText(QApplication::translate("angles", "TextLabel", 0));
        label_6->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Mup", 0)));
        label_7->setText(QApplication::translate("angles", "TextLabel", 0));
        label_7->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Gup", 0)));
        label_8->setText(QApplication::translate("angles", "Position", 0));
        label_9->setText(QApplication::translate("angles", "TextLabel", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Phi", 0)));
        label_10->setText(QApplication::translate("angles", "TextLabel", 0));
        label_10->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Psi", 0)));
        label_11->setText(QApplication::translate("angles", "rms", 0));
        label_14->setText(QApplication::translate("angles", "bottom", 0));
        label_15->setText(QApplication::translate("angles", "TextLabel", 0));
        label_15->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Mlow", 0)));
        label_16->setText(QApplication::translate("angles", "TextLabel", 0));
        label_16->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Glow", 0)));
        lcdNumber->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Mrms", 0)));
        lcdNumber_2->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Grms", 0)));
        label_12->setText(QApplication::translate("angles", "goto", 0));
        pushButton->setText(QApplication::translate("angles", "STOP", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:MonoAktion.PROC", 0)));
        pushButton_2->setText(QApplication::translate("angles", "STOP", 0));
        pushButton_2->setProperty("PV", QVariant(QApplication::translate("angles", "u411pgm1:MonoAktion.PROC", 0)));
        label_23->setText(QApplication::translate("angles", "TouchDiff", 0));
        label_24->setText(QApplication::translate("angles", "StopDiff", 0));
        label_25->setText(QApplication::translate("angles", "Diff", 0));
        label_27->setText(QApplication::translate("angles", "TextLabel", 0));
        label_27->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:Status", 0)));
        label_28->setText(QApplication::translate("angles", "TextLabel", 0));
        label_28->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:touchDiff", 0)));
        label_26->setText(QApplication::translate("angles", "TextLabel", 0));
        label_26->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:touchDiffStop", 0)));
        label_29->setText(QApplication::translate("angles", "TextLabel", 0));
        label_29->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:monoGetBmT", 0)));
        Axis1->setProperty("description", QVariant(QApplication::translate("angles", "alpha", 0)));
        Axis1->setProperty("pvReadback", QVariant(QApplication::translate("angles", "u411pgm1:Alpha", 0)));
        Axis1->setProperty("units", QVariant(QApplication::translate("angles", "deg", 0)));
        Axis1->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:SetAlpha", 0)));
        Axis2->setProperty("description", QVariant(QApplication::translate("angles", "alpha", 0)));
        Axis2->setProperty("pvReadback", QVariant(QApplication::translate("angles", "u411pgm1:Beta", 0)));
        Axis2->setProperty("units", QVariant(QApplication::translate("angles", "deg", 0)));
        Axis2->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:SetBeta", 0)));
        Axis3->setProperty("description", QVariant(QApplication::translate("angles", "theta", 0)));
        Axis3->setProperty("pvReadback", QVariant(QApplication::translate("angles", "u411pgm1:Theta", 0)));
        Axis3->setProperty("units", QVariant(QApplication::translate("angles", "deg", 0)));
        Axis3->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:SetTheta", 0)));
        Axis4->setProperty("description", QVariant(QApplication::translate("angles", "Naverage", 0)));
        Axis4->setProperty("pvReadback", QVariant(QApplication::translate("angles", "u411pgm1:Naverage", 0)));
        Axis4->setProperty("units", QVariant(QApplication::translate("angles", "deg", 0)));
        Axis4->setProperty("pv", QVariant(QApplication::translate("angles", "u411pgm1:SetNaverage", 0)));
    } // retranslateUi

};

namespace Ui {
    class angles: public Ui_angles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANGLES_H
