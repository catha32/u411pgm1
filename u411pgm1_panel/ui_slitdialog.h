/********************************************************************************
** Form generated from reading UI file 'slitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLITDIALOG_H
#define UI_SLITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_slitDialog
{
public:
    QCALabel *label_2;
    QLabel *label_8;
    QCALabel *label_9;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_5;
    QCALabel *label_11;
    QLabel *label_14;
    QCALabel *label_13;
    QCALabel *label;
    QCALabel *label_12;
    QCALabel *label_10;
    QPushButton *pushButton;
    QLabel *label_7;
    QLabel *label_6;

    void setupUi(QDialog *slitDialog)
    {
        if (slitDialog->objectName().isEmpty())
            slitDialog->setObjectName(QStringLiteral("slitDialog"));
        slitDialog->resize(438, 236);
        label_2 = new QCALabel(slitDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 40, 59, 14));
        label_8 = new QLabel(slitDialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 90, 71, 16));
        label_9 = new QCALabel(slitDialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 120, 59, 14));
        label_4 = new QLabel(slitDialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 70, 59, 14));
        label_3 = new QLabel(slitDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 70, 59, 14));
        label_5 = new QLabel(slitDialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 70, 59, 14));
        label_11 = new QCALabel(slitDialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 120, 59, 14));
        label_14 = new QLabel(slitDialog);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 200, 111, 16));
        label_13 = new QCALabel(slitDialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(340, 120, 59, 14));
        label = new QCALabel(slitDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 141, 16));
        label_12 = new QCALabel(slitDialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(250, 120, 59, 14));
        label_10 = new QCALabel(slitDialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 120, 59, 14));
        pushButton = new QPushButton(slitDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(330, 200, 81, 22));
        label_7 = new QLabel(slitDialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 70, 59, 14));
        label_7->setStyleSheet(QStringLiteral(""));
        label_6 = new QLabel(slitDialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 70, 59, 14));

        retranslateUi(slitDialog);

        QMetaObject::connectSlotsByName(slitDialog);
    } // setupUi

    void retranslateUi(QDialog *slitDialog)
    {
        slitDialog->setWindowTitle(QApplication::translate("slitDialog", "Dialog", 0));
        label_2->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label_2->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:Branch_0_Name", 0)));
        label_8->setText(QApplication::translate("slitDialog", "vibrations", 0));
        label_9->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:DE_S", 0)));
        label_4->setText(QApplication::translate("slitDialog", "Mirror-", 0));
        label_3->setText(QApplication::translate("slitDialog", "Source", 0));
        label_5->setText(QApplication::translate("slitDialog", "Grating-", 0));
        label_11->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:DE_G", 0)));
        label_14->setText(QApplication::translate("slitDialog", "Bandwidth (meV)", 0));
        label_13->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label_13->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:DE_0", 0)));
        label->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:MonoName", 0)));
        label_12->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label_12->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:ES_0_BW", 0)));
        label_10->setText(QApplication::translate("slitDialog", "TextLabel", 0));
        label_10->setProperty("pv", QVariant(QApplication::translate("slitDialog", "u411pgm1:DE_M", 0)));
        pushButton->setText(QApplication::translate("slitDialog", "Close", 0));
        label_7->setText(QApplication::translate("slitDialog", "Total", 0));
        label_6->setText(QApplication::translate("slitDialog", "Slit", 0));
    } // retranslateUi

};

namespace Ui {
    class slitDialog: public Ui_slitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLITDIALOG_H
