/********************************************************************************
** Form generated from reading UI file 'bandwidth.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANDWIDTH_H
#define UI_BANDWIDTH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "qcalabel.h"
#include "qcalcdnumber.h"

QT_BEGIN_NAMESPACE

class Ui_bandwidth
{
public:
    QLabel *label_6;
    QCALabel *label_2;
    QLabel *label_4;
    QLabel *label_8;
    QPushButton *pushButton;
    QCALabel *label;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_5;
    QCALCDNumber *lcdNumber;
    QCALCDNumber *lcdNumber_2;
    QCALCDNumber *lcdNumber_3;
    QCALCDNumber *lcdNumber_4;
    QCALCDNumber *lcdNumber_5;

    void setupUi(QDialog *bandwidth)
    {
        if (bandwidth->objectName().isEmpty())
            bandwidth->setObjectName(QStringLiteral("bandwidth"));
        bandwidth->resize(400, 300);
        label_6 = new QLabel(bandwidth);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 80, 59, 14));
        label_2 = new QCALabel(bandwidth);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 50, 59, 14));
        label_4 = new QLabel(bandwidth);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 80, 59, 14));
        label_8 = new QLabel(bandwidth);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 100, 71, 16));
        pushButton = new QPushButton(bandwidth);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 210, 81, 22));
        label = new QCALabel(bandwidth);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 141, 16));
        label_3 = new QLabel(bandwidth);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 59, 14));
        label_14 = new QLabel(bandwidth);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 210, 111, 16));
        label_7 = new QLabel(bandwidth);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 80, 59, 14));
        label_7->setStyleSheet(QStringLiteral(""));
        label_5 = new QLabel(bandwidth);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 80, 59, 14));
        lcdNumber = new QCALCDNumber(bandwidth);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 130, 64, 23));
        lcdNumber_2 = new QCALCDNumber(bandwidth);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(90, 130, 64, 23));
        lcdNumber_3 = new QCALCDNumber(bandwidth);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(160, 130, 64, 23));
        lcdNumber_4 = new QCALCDNumber(bandwidth);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(240, 130, 64, 23));
        lcdNumber_5 = new QCALCDNumber(bandwidth);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(320, 130, 64, 23));

        retranslateUi(bandwidth);

        QMetaObject::connectSlotsByName(bandwidth);
    } // setupUi

    void retranslateUi(QDialog *bandwidth)
    {
        bandwidth->setWindowTitle(QApplication::translate("bandwidth", "Dialog", 0));
        label_6->setText(QApplication::translate("bandwidth", "Slit", 0));
        label_2->setText(QApplication::translate("bandwidth", "TextLabel", 0));
        label_2->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:Branch_0_Name", 0)));
        label_4->setText(QApplication::translate("bandwidth", "Mirror-", 0));
        label_8->setText(QApplication::translate("bandwidth", "vibrations", 0));
        pushButton->setText(QApplication::translate("bandwidth", "Close", 0));
        label->setText(QApplication::translate("bandwidth", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:MonoName", 0)));
        label_3->setText(QApplication::translate("bandwidth", "Source", 0));
        label_14->setText(QApplication::translate("bandwidth", "Bandwidth (meV)", 0));
        label_7->setText(QApplication::translate("bandwidth", "Total", 0));
        label_5->setText(QApplication::translate("bandwidth", "Grating-", 0));
        lcdNumber->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:DE_S", 0)));
        lcdNumber_2->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:DE_M", 0)));
        lcdNumber_3->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:DE_G", 0)));
        lcdNumber_4->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:ES_0_BW", 0)));
        lcdNumber_5->setProperty("pv", QVariant(QApplication::translate("bandwidth", "u411pgm1:DE_0", 0)));
    } // retranslateUi

};

namespace Ui {
    class bandwidth: public Ui_bandwidth {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANDWIDTH_H
