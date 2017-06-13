/********************************************************************************
** Form generated from reading UI file 'setenergy.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETENERGY_H
#define UI_SETENERGY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_setenergy
{
public:
    QLabel *label_7;
    QLabel *label_8;
    QCALabel *label_9;
    QGroupBox *groupBox_7;
    QCAComboBox *ComboBox_4;
    QCAAxis *energyAxis_2;
    QCAAxis *energyAxis_3;
    QCAAxis *energyAxis_4;
    QCAAxis *energyAxis_5;
    QCAAxis *energyAxis_6;
    QCAAxis *energyAxis;

    void setupUi(QDialog *setenergy)
    {
        if (setenergy->objectName().isEmpty())
            setenergy->setObjectName(QStringLiteral("setenergy"));
        setenergy->resize(1244, 783);
        label_7 = new QLabel(setenergy);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(420, 60, 59, 14));
        label_8 = new QLabel(setenergy);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(430, 130, 59, 14));
        label_9 = new QCALabel(setenergy);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(420, 150, 59, 14));
        groupBox_7 = new QGroupBox(setenergy);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        groupBox_7->setGeometry(QRect(370, 20, 151, 401));
        ComboBox_4 = new QCAComboBox(groupBox_7);
        ComboBox_4->setObjectName(QStringLiteral("ComboBox_4"));
        ComboBox_4->setGeometry(QRect(40, 70, 71, 22));
        energyAxis_2 = new QCAAxis(setenergy);
        energyAxis_2->setObjectName(QStringLiteral("energyAxis_2"));
        energyAxis_2->setGeometry(QRect(20, 150, 310, 27));
        energyAxis_2->setMinimumSize(QSize(100, 10));
        energyAxis_3 = new QCAAxis(setenergy);
        energyAxis_3->setObjectName(QStringLiteral("energyAxis_3"));
        energyAxis_3->setGeometry(QRect(20, 270, 310, 27));
        energyAxis_3->setMinimumSize(QSize(100, 10));
        energyAxis_4 = new QCAAxis(setenergy);
        energyAxis_4->setObjectName(QStringLiteral("energyAxis_4"));
        energyAxis_4->setGeometry(QRect(560, 60, 310, 27));
        energyAxis_4->setMinimumSize(QSize(100, 10));
        energyAxis_5 = new QCAAxis(setenergy);
        energyAxis_5->setObjectName(QStringLiteral("energyAxis_5"));
        energyAxis_5->setGeometry(QRect(560, 270, 310, 27));
        energyAxis_5->setMinimumSize(QSize(100, 10));
        energyAxis_6 = new QCAAxis(setenergy);
        energyAxis_6->setObjectName(QStringLiteral("energyAxis_6"));
        energyAxis_6->setGeometry(QRect(560, 350, 310, 27));
        energyAxis_6->setMinimumSize(QSize(100, 10));
        energyAxis = new QCAAxis(setenergy);
        energyAxis->setObjectName(QStringLiteral("energyAxis"));
        energyAxis->setGeometry(QRect(20, 60, 310, 27));
        energyAxis->setMinimumSize(QSize(100, 10));

        retranslateUi(setenergy);

        QMetaObject::connectSlotsByName(setenergy);
    } // setupUi

    void retranslateUi(QDialog *setenergy)
    {
        setenergy->setWindowTitle(QApplication::translate("setenergy", "Dialog", 0));
        label_7->setText(QApplication::translate("setenergy", "Select", 0));
        label_8->setText(QApplication::translate("setenergy", "Active:", 0));
        label_9->setText(QApplication::translate("setenergy", "TextLabel", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:Branch", 0)));
        groupBox_7->setTitle(QString());
        ComboBox_4->clear();
        ComboBox_4->insertItems(0, QStringList()
         << QApplication::translate("setenergy", "TXM", 0)
         << QApplication::translate("setenergy", "PEAXIS", 0)
        );
        ComboBox_4->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:SetBranch", 0)));
        energyAxis_2->setProperty("description", QVariant(QApplication::translate("setenergy", "Energy PEAXIS", 0)));
        energyAxis_2->setProperty("pvReadback", QVariant(QApplication::translate("setenergy", "u411pgm1:SetEnergyC", 0)));
        energyAxis_2->setProperty("units", QVariant(QApplication::translate("setenergy", "eV", 0)));
        energyAxis_2->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:SetEnergyC", 0)));
        energyAxis_3->setProperty("description", QVariant(QApplication::translate("setenergy", "SlitWidth", 0)));
        energyAxis_3->setProperty("pvReadback", QVariant(QApplication::translate("setenergy", "u411pgm1:SetSlitWidth", 0)));
        energyAxis_3->setProperty("units", QVariant(QApplication::translate("setenergy", "um", 0)));
        energyAxis_3->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:SetSlitWidth", 0)));
        energyAxis_4->setProperty("description", QVariant(QApplication::translate("setenergy", "Mono", 0)));
        energyAxis_4->setProperty("pvReadback", QVariant(QApplication::translate("setenergy", "u411pgm1:monoGetEnergy", 0)));
        energyAxis_4->setProperty("units", QVariant(QApplication::translate("setenergy", "eV", 0)));
        energyAxis_4->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:monoGetEnergy", 0)));
        energyAxis_5->setProperty("description", QVariant(QApplication::translate("setenergy", "Slitwidth TXM", 0)));
        energyAxis_5->setProperty("pvReadback", QVariant(QApplication::translate("setenergy", "u411pgm1:ES_0_SetSW", 0)));
        energyAxis_5->setProperty("units", QVariant(QApplication::translate("setenergy", "um", 0)));
        energyAxis_5->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:ES_0_SetSW", 0)));
        energyAxis_6->setProperty("description", QVariant(QApplication::translate("setenergy", "Slitwidth PEAXIS", 0)));
        energyAxis_6->setProperty("pvReadback", QVariant(QApplication::translate("setenergy", "u411pgm1:ES_1_SetSW", 0)));
        energyAxis_6->setProperty("units", QVariant(QApplication::translate("setenergy", "um", 0)));
        energyAxis_6->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:ES_1_SetSW", 0)));
        energyAxis->setProperty("description", QVariant(QApplication::translate("setenergy", "Energy TXM", 0)));
        energyAxis->setProperty("pvReadback", QVariant(QApplication::translate("setenergy", "u411pgm1:SetEnergyA", 0)));
        energyAxis->setProperty("units", QVariant(QApplication::translate("setenergy", "eV", 0)));
        energyAxis->setProperty("pv", QVariant(QApplication::translate("setenergy", "u411pgm1:SetEnergyA", 0)));
    } // retranslateUi

};

namespace Ui {
    class setenergy: public Ui_setenergy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETENERGY_H
