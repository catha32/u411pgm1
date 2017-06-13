/********************************************************************************
** Form generated from reading UI file 'u41it3r.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_U41IT3R_H
#define UI_U41IT3R_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qcalcdnumber.h"
#include "qcaled.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_u41it3r
{
public:
    QCALabel *label;
    QLabel *label_2;
    QCAComboBox *comboBox;
    QCAPushButton *pushButton;
    QLabel *label_3;
    QLabel *label_5;
    QCALCDNumber *lcdNumber;
    QCALCDNumber *lcdNumber_2;
    QCAComboBox *comboBox_2;
    QCAPushButton *pushButton_2;
    QLabel *label_4;
    QLabel *label_6;
    QCALCDNumber *lcdNumber_3;
    QLabel *label_7;
    QCALCDNumber *lcdNumber_4;
    QLabel *label_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QCALCDNumber *lcdNumber_6;
    QLabel *label_10;
    QLabel *label_11;
    QCALCDNumber *lcdNumber_7;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QCALed *LedV1;
    QCALed *LedV1_2;
    QLabel *label_15;
    QLabel *label_16;
    QCALabel *label_17;
    QCALabel *label_18;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCALCDNumber *lcdNumber_5;
    QLabel *label_9;

    void setupUi(QDialog *u41it3r)
    {
        if (u41it3r->objectName().isEmpty())
            u41it3r->setObjectName(QStringLiteral("u41it3r"));
        u41it3r->resize(427, 462);
        label = new QCALabel(u41it3r);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(200, 20, 151, 16));
        label_2 = new QLabel(u41it3r);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 50, 71, 16));
        comboBox = new QCAComboBox(u41it3r);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(190, 50, 72, 22));
        pushButton = new QCAPushButton(u41it3r);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(340, 50, 81, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_3 = new QLabel(u41it3r);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 100, 111, 16));
        label_5 = new QLabel(u41it3r);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 100, 81, 16));
        label_5->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        lcdNumber = new QCALCDNumber(u41it3r);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(50, 190, 64, 23));
        lcdNumber->setStyleSheet(QStringLiteral(""));
        lcdNumber_2 = new QCALCDNumber(u41it3r);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(50, 120, 64, 23));
        comboBox_2 = new QCAComboBox(u41it3r);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(190, 120, 72, 22));
        pushButton_2 = new QCAPushButton(u41it3r);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 120, 81, 22));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 127);"));
        label_4 = new QLabel(u41it3r);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 170, 111, 16));
        label_6 = new QLabel(u41it3r);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 230, 111, 16));
        lcdNumber_3 = new QCALCDNumber(u41it3r);
        lcdNumber_3->setObjectName(QStringLiteral("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(50, 250, 64, 23));
        lcdNumber_3->setStyleSheet(QStringLiteral(""));
        label_7 = new QLabel(u41it3r);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 290, 111, 16));
        lcdNumber_4 = new QCALCDNumber(u41it3r);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(50, 310, 64, 23));
        lcdNumber_4->setStyleSheet(QStringLiteral(""));
        label_8 = new QLabel(u41it3r);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 370, 111, 16));
        layoutWidget = new QWidget(u41it3r);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 430, 91, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lcdNumber_6 = new QCALCDNumber(layoutWidget);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));
        lcdNumber_6->setStyleSheet(QStringLiteral(""));

        horizontalLayout_2->addWidget(lcdNumber_6);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);

        label_11 = new QLabel(u41it3r);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(190, 190, 101, 16));
        lcdNumber_7 = new QCALCDNumber(u41it3r);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(340, 180, 64, 23));
        label_12 = new QLabel(u41it3r);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(240, 300, 41, 16));
        label_13 = new QLabel(u41it3r);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(290, 300, 59, 14));
        label_14 = new QLabel(u41it3r);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(370, 300, 59, 14));
        LedV1 = new QCALed(u41it3r);
        LedV1->setObjectName(QStringLiteral("LedV1"));
        LedV1->setGeometry(QRect(250, 330, 21, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LedV1->sizePolicy().hasHeightForWidth());
        LedV1->setSizePolicy(sizePolicy);
        LedV1_2 = new QCALed(u41it3r);
        LedV1_2->setObjectName(QStringLiteral("LedV1_2"));
        LedV1_2->setGeometry(QRect(290, 330, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_2->sizePolicy().hasHeightForWidth());
        LedV1_2->setSizePolicy(sizePolicy);
        label_15 = new QLabel(u41it3r);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(240, 370, 59, 14));
        label_15->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_16 = new QLabel(u41it3r);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(240, 390, 59, 14));
        label_16->setStyleSheet(QStringLiteral("color: rgb(255, 0, 0);"));
        label_17 = new QCALabel(u41it3r);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(310, 370, 59, 14));
        label_17->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_18 = new QCALabel(u41it3r);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(310, 390, 59, 14));
        label_18->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        layoutWidget1 = new QWidget(u41it3r);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(50, 390, 89, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lcdNumber_5 = new QCALCDNumber(layoutWidget1);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        lcdNumber_5->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(lcdNumber_5);

        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);


        retranslateUi(u41it3r);

        QMetaObject::connectSlotsByName(u41it3r);
    } // setupUi

    void retranslateUi(QDialog *u41it3r)
    {
        u41it3r->setWindowTitle(QApplication::translate("u41it3r", "Dialog", 0));
        label->setText(QApplication::translate("u41it3r", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseCmdSMode", 0)));
        label_2->setText(QApplication::translate("u41it3r", "ID control", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("u41it3r", "local", 0)
         << QApplication::translate("u41it3r", "remote", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseCmdLswitch", 0)));
        pushButton->setText(QApplication::translate("u41it3r", "STOP", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseCmnUsrStop", 0)));
        label_3->setText(QApplication::translate("u41it3r", "Destination-Gap:", 0));
        label_5->setText(QApplication::translate("u41it3r", "Command:", 0));
        lcdNumber->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BasePmGap.A", 0)));
        lcdNumber_2->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseParGapsel.B", 0)));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("u41it3r", "RESET", 0)
         << QApplication::translate("u41it3r", "F_RESET", 0)
         << QApplication::translate("u41it3r", "Z_RESET", 0)
         << QApplication::translate("u41it3r", "STOP", 0)
         << QApplication::translate("u41it3r", "START", 0)
         << QApplication::translate("u41it3r", "GOTOREF", 0)
         << QApplication::translate("u41it3r", "SETBRAKE", 0)
        );
        comboBox_2->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseCmdMcmd", 0)));
        pushButton_2->setText(QApplication::translate("u41it3r", "exec", 0));
        pushButton_2->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseCmdCalc.PROC", 0)));
        label_4->setText(QApplication::translate("u41it3r", "actual gap [mm]", 0));
        label_6->setText(QApplication::translate("u41it3r", "gap velocity:", 0));
        lcdNumber_3->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:DiagVelSet.A", 0)));
        label_7->setText(QApplication::translate("u41it3r", "delta gap:", 0));
        lcdNumber_4->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseParGapTrs", 0)));
        label_8->setText(QApplication::translate("u41it3r", "1st Harmonic:", 0));
        lcdNumber_6->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BasePmWLength", 0)));
        label_10->setText(QApplication::translate("u41it3r", "nm", 0));
        label_11->setText(QApplication::translate("u41it3r", "return position:", 0));
        lcdNumber_7->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseHomeRPos.A", 0)));
        label_12->setText(QApplication::translate("u41it3r", "Error", 0));
        label_13->setText(QApplication::translate("u41it3r", "Power", 0));
        label_14->setText(QApplication::translate("u41it3r", "Lock", 0));
        LedV1->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseStatHalt", 0)));
        LedV1_2->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseCmnHWOK", 0)));
        label_15->setText(QApplication::translate("u41it3r", "Status:", 0));
        label_16->setText(QApplication::translate("u41it3r", "Error:", 0));
        label_17->setText(QApplication::translate("u41it3r", "TextLabel", 0));
        label_17->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseStatISLbl", 0)));
        label_18->setText(QApplication::translate("u41it3r", "TextLabel", 0));
        label_18->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BaseStatIELbl", 0)));
        lcdNumber_5->setProperty("pv", QVariant(QApplication::translate("u41it3r", "U41IT3R:BasePmEnergy", 0)));
        label_9->setText(QApplication::translate("u41it3r", "eV", 0));
    } // retranslateUi

};

namespace Ui {
    class u41it3r: public Ui_u41it3r {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_U41IT3R_H
