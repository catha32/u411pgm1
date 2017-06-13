/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcalabel.h"

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QCALabel *label;
    QLabel *label_2;
    QCAComboBox *comboBox;
    QLabel *label_3;
    QCAComboBox *comboBox_2;
    QCAComboBox *comboBox_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_9;
    QLabel *label_10;
    QPushButton *pushButton_3;
    QCAAxis *cffAxis;
    QCAAxis *diffAxis_2;
    QCAAxis *holdAxis_3;

    void setupUi(QDialog *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->resize(535, 212);
        label = new QCALabel(settings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 10, 111, 16));
        label_2 = new QLabel(settings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 59, 14));
        comboBox = new QCAComboBox(settings);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(20, 60, 101, 22));
        label_3 = new QLabel(settings);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 40, 71, 16));
        comboBox_2 = new QCAComboBox(settings);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(140, 60, 72, 22));
        comboBox_3 = new QCAComboBox(settings);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(440, 60, 72, 22));
        label_4 = new QLabel(settings);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 40, 71, 16));
        pushButton = new QPushButton(settings);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(440, 90, 81, 22));
        pushButton_2 = new QPushButton(settings);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 120, 81, 22));
        label_9 = new QLabel(settings);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(360, 160, 59, 14));
        label_10 = new QLabel(settings);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(360, 180, 59, 14));
        pushButton_3 = new QPushButton(settings);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(440, 160, 81, 22));
        cffAxis = new QCAAxis(settings);
        cffAxis->setObjectName(QStringLiteral("cffAxis"));
        cffAxis->setGeometry(QRect(20, 90, 285, 27));
        cffAxis->setMinimumSize(QSize(100, 10));
        diffAxis_2 = new QCAAxis(settings);
        diffAxis_2->setObjectName(QStringLiteral("diffAxis_2"));
        diffAxis_2->setGeometry(QRect(20, 120, 285, 27));
        diffAxis_2->setMinimumSize(QSize(100, 10));
        holdAxis_3 = new QCAAxis(settings);
        holdAxis_3->setObjectName(QStringLiteral("holdAxis_3"));
        holdAxis_3->setGeometry(QRect(20, 160, 285, 27));
        holdAxis_3->setMinimumSize(QSize(100, 10));

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QDialog *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Dialog", 0));
        label->setText(QApplication::translate("settings", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:MonoName", 0)));
        label_2->setText(QApplication::translate("settings", "grating", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("settings", "800.0 1/mm", 0)
         << QApplication::translate("settings", "1200.0 1/mm", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:SetGratingNo", 0)));
        label_3->setText(QApplication::translate("settings", "MonoMode", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("settings", "Normal", 0)
         << QApplication::translate("settings", "Fix Cff", 0)
         << QApplication::translate("settings", "Vary Cff", 0)
         << QApplication::translate("settings", "On Blaze", 0)
         << QApplication::translate("settings", "Fix Beta", 0)
         << QApplication::translate("settings", "Mirror Only", 0)
         << QApplication::translate("settings", "Fix Theta", 0)
         << QApplication::translate("settings", "Grating Only", 0)
         << QApplication::translate("settings", "Table", 0)
         << QApplication::translate("settings", "Zero0", 0)
         << QApplication::translate("settings", "U41SGM", 0)
         << QApplication::translate("settings", "U1252SGM1", 0)
        );
        comboBox_2->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:SetFormulaMode", 0)));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("settings", "max", 0)
         << QApplication::translate("settings", "auto", 0)
         << QApplication::translate("settings", "1", 0)
         << QApplication::translate("settings", "3", 0)
         << QApplication::translate("settings", "5", 0)
         << QApplication::translate("settings", "7", 0)
        );
        comboBox_3->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:SelIdHarmonic", 0)));
        label_4->setText(QApplication::translate("settings", "Harmonic", 0));
        pushButton->setText(QApplication::translate("settings", "PolConfig", 0));
        pushButton_2->setText(QApplication::translate("settings", "SlopeOffset", 0));
        label_9->setText(QApplication::translate("settings", "Select", 0));
        label_10->setText(QApplication::translate("settings", "ID-table", 0));
        pushButton_3->setText(QApplication::translate("settings", "!", 0));
        cffAxis->setProperty("description", QVariant(QApplication::translate("settings", "CFF Value", 0)));
        cffAxis->setProperty("pvReadback", QVariant(QApplication::translate("settings", "u411pgm1:cff", 0)));
        cffAxis->setProperty("units", QVariant(QString()));
        cffAxis->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:SetCff", 0)));
        diffAxis_2->setProperty("description", QVariant(QApplication::translate("settings", "Diffr. Order", 0)));
        diffAxis_2->setProperty("pvReadback", QVariant(QApplication::translate("settings", "u411pgm1:Order", 0)));
        diffAxis_2->setProperty("units", QVariant(QString()));
        diffAxis_2->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:SetOrder", 0)));
        holdAxis_3->setProperty("description", QVariant(QApplication::translate("settings", "Hold Position Intervall", 0)));
        holdAxis_3->setProperty("pvReadback", QVariant(QApplication::translate("settings", "u411pgm1:PositionTimer", 0)));
        holdAxis_3->setProperty("units", QVariant(QApplication::translate("settings", "s", 0)));
        holdAxis_3->setProperty("pv", QVariant(QApplication::translate("settings", "u411pgm1:SetPositionTimer", 0)));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
