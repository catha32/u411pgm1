/********************************************************************************
** Form generated from reading UI file 'idchikane.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDCHIKANE_H
#define UI_IDCHIKANE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcacombobox.h"
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_idchikane
{
public:
    QLabel *label;
    QLabel *label_2;
    QCALabel *label_3;
    QCAComboBox *comboBox;
    QLabel *label_4;
    QLabel *label_5;
    QCALabel *label_6;
    QLabel *label_7;
    QCALabel *label_8;
    QLabel *label_9;
    QCALabel *label_10;

    void setupUi(QDialog *idchikane)
    {
        if (idchikane->objectName().isEmpty())
            idchikane->setObjectName(QStringLiteral("idchikane"));
        idchikane->resize(308, 215);
        label = new QLabel(idchikane);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 171, 16));
        label_2 = new QLabel(idchikane);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 30, 121, 16));
        label_3 = new QCALabel(idchikane);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 30, 59, 14));
        comboBox = new QCAComboBox(idchikane);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(200, 60, 101, 22));
        label_4 = new QLabel(idchikane);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 101, 16));
        label_5 = new QLabel(idchikane);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 130, 111, 16));
        label_6 = new QCALabel(idchikane);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 130, 59, 14));
        label_6->setStyleSheet(QStringLiteral("color: rgb(0, 170, 0);"));
        label_7 = new QLabel(idchikane);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 160, 111, 16));
        label_8 = new QCALabel(idchikane);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(150, 160, 59, 14));
        label_9 = new QLabel(idchikane);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 190, 91, 16));
        label_10 = new QCALabel(idchikane);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 190, 59, 14));

        retranslateUi(idchikane);

        QMetaObject::connectSlotsByName(idchikane);
    } // setupUi

    void retranslateUi(QDialog *idchikane)
    {
        idchikane->setWindowTitle(QApplication::translate("idchikane", "Dialog", 0));
        label->setText(QApplication::translate("idchikane", "CAN Module at u411pgm1", 0));
        label_2->setText(QApplication::translate("idchikane", "CAN On/Off Switch:", 0));
        label_3->setText(QApplication::translate("idchikane", "TextLabel", 0));
        label_3->setProperty("pv", QVariant(QApplication::translate("idchikane", "u411pgm1:biIDdisable", 0)));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("idchikane", "Check SMU", 0)
         << QApplication::translate("idchikane", "Ignore SMU", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("idchikane", "u411pgm1:IdDependSMU", 0)));
        label_4->setText(QApplication::translate("idchikane", "Read from IDCP", 0));
        label_5->setText(QApplication::translate("idchikane", "Chikane Position", 0));
        label_6->setText(QApplication::translate("idchikane", "TextLabel", 0));
        label_6->setProperty("pv", QVariant(QApplication::translate("idchikane", "u411pgm1:liIDcicp", 0)));
        label_7->setText(QApplication::translate("idchikane", "Chikane Counter", 0));
        label_8->setText(QApplication::translate("idchikane", "TextLabel", 0));
        label_8->setProperty("pv", QVariant(QApplication::translate("idchikane", "u411pgm1:liIDccnt", 0)));
        label_9->setText(QApplication::translate("idchikane", "Chikane Error", 0));
        label_10->setText(QApplication::translate("idchikane", "TextLabel", 0));
        label_10->setProperty("pv", QVariant(QApplication::translate("idchikane", "u411pgm1:liIDcerr", 0)));
    } // retranslateUi

};

namespace Ui {
    class idchikane: public Ui_idchikane {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDCHIKANE_H
