/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

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

class Ui_Dialog
{
public:
    QLabel *label_3;
    QCALabel *label_13;
    QCALabel *label_2;
    QCALabel *label;
    QCALabel *label_9;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_4;
    QCALabel *label_11;
    QCALabel *label_12;
    QLabel *label_14;
    QPushButton *pushButton;
    QCALabel *label_10;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(400, 300);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 80, 59, 14));
        label_13 = new QCALabel(Dialog);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(320, 130, 59, 14));
        label_2 = new QCALabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 50, 59, 14));
        label = new QCALabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 141, 16));
        label_9 = new QCALabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 130, 59, 14));
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 80, 59, 14));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 100, 71, 16));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 80, 59, 14));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 80, 59, 14));
        label_7->setStyleSheet(QStringLiteral(""));
        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 80, 59, 14));
        label_11 = new QCALabel(Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(160, 130, 59, 14));
        label_12 = new QCALabel(Dialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(240, 130, 59, 14));
        label_14 = new QLabel(Dialog);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 210, 111, 16));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 210, 81, 22));
        label_10 = new QCALabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(90, 130, 59, 14));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label_3->setText(QApplication::translate("Dialog", "Source", 0));
        label_13->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_13->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:DE_0", 0)));
        label_2->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_2->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:Branch_0_Name", 0)));
        label->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:MonoName", 0)));
        label_9->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:DE_S", 0)));
        label_5->setText(QApplication::translate("Dialog", "Grating-", 0));
        label_8->setText(QApplication::translate("Dialog", "vibrations", 0));
        label_6->setText(QApplication::translate("Dialog", "Slit", 0));
        label_7->setText(QApplication::translate("Dialog", "Total", 0));
        label_4->setText(QApplication::translate("Dialog", "Mirror-", 0));
        label_11->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:DE_G", 0)));
        label_12->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_12->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:ES_0_BW", 0)));
        label_14->setText(QApplication::translate("Dialog", "Bandwidth (meV)", 0));
        pushButton->setText(QApplication::translate("Dialog", "Close", 0));
        label_10->setText(QApplication::translate("Dialog", "TextLabel", 0));
        label_10->setProperty("pv", QVariant(QApplication::translate("Dialog", "u411pgm1:DE_M", 0)));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
