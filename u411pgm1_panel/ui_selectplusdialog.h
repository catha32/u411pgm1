/********************************************************************************
** Form generated from reading UI file 'selectplusdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTPLUSDIALOG_H
#define UI_SELECTPLUSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_selectplusdialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QCALabel *label_6;
    QCALabel *label_7;
    QCALabel *label_8;
    QCAComboBox *comboBox;
    QCAComboBox *comboBox_2;
    QLabel *label_47;
    QCAPushButton *pushButton_8;
    QCAPushButton *pushButton_7;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QCAPushButton *pushButton;
    QCAComboBox *comboBox_5;
    QCAComboBox *comboBox_3;

    void setupUi(QDialog *selectplusdialog)
    {
        if (selectplusdialog->objectName().isEmpty())
            selectplusdialog->setObjectName(QStringLiteral("selectplusdialog"));
        selectplusdialog->resize(511, 245);
        label = new QLabel(selectplusdialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 151, 16));
        label_2 = new QLabel(selectplusdialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 121, 16));
        label_3 = new QLabel(selectplusdialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 80, 59, 14));
        label_4 = new QLabel(selectplusdialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 100, 71, 16));
        label_5 = new QLabel(selectplusdialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 120, 59, 14));
        label_6 = new QCALabel(selectplusdialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(90, 80, 59, 14));
        label_7 = new QCALabel(selectplusdialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 100, 121, 16));
        label_8 = new QCALabel(selectplusdialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(90, 120, 91, 16));
        comboBox = new QCAComboBox(selectplusdialog);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(320, 70, 111, 22));
        comboBox_2 = new QCAComboBox(selectplusdialog);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(320, 100, 111, 22));
        label_47 = new QLabel(selectplusdialog);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(320, 140, 46, 22));
        pushButton_8 = new QCAPushButton(selectplusdialog);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(430, 140, 41, 22));
        pushButton_7 = new QCAPushButton(selectplusdialog);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(380, 140, 41, 22));
        label_9 = new QLabel(selectplusdialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 180, 181, 16));
        label_10 = new QLabel(selectplusdialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 210, 59, 14));
        label_11 = new QLabel(selectplusdialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(200, 210, 59, 14));
        label_12 = new QLabel(selectplusdialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(380, 210, 81, 16));
        pushButton = new QCAPushButton(selectplusdialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 210, 41, 22));
        comboBox_5 = new QCAComboBox(selectplusdialog);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(70, 210, 111, 22));
        comboBox_3 = new QCAComboBox(selectplusdialog);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(260, 210, 111, 22));

        retranslateUi(selectplusdialog);

        QMetaObject::connectSlotsByName(selectplusdialog);
    } // setupUi

    void retranslateUi(QDialog *selectplusdialog)
    {
        selectplusdialog->setWindowTitle(QApplication::translate("selectplusdialog", "Dialog", 0));
        label->setText(QApplication::translate("selectplusdialog", "Select Undulator Table", 0));
        label_2->setText(QApplication::translate("selectplusdialog", "Current Selection:", 0));
        label_3->setText(QApplication::translate("selectplusdialog", "Name:", 0));
        label_4->setText(QApplication::translate("selectplusdialog", "Filename:", 0));
        label_5->setText(QApplication::translate("selectplusdialog", "Status:", 0));
        label_6->setText(QApplication::translate("selectplusdialog", "TextLabel", 0));
        label_6->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idMbbiIndex", 0)));
        label_7->setText(QApplication::translate("selectplusdialog", "TextLabel", 0));
        label_7->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idFilename", 0)));
        label_8->setText(QApplication::translate("selectplusdialog", "TextLabel", 0));
        label_8->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idStatusLoad", 0)));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("selectplusdialog", "linear", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idMbboIndex", 0)));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("selectplusdialog", "1st Harmonic", 0)
         << QApplication::translate("selectplusdialog", "3rd Harmonic", 0)
         << QApplication::translate("selectplusdialog", "5th Harmonic", 0)
         << QApplication::translate("selectplusdialog", "7th Harmonic", 0)
         << QApplication::translate("selectplusdialog", "Max Flux", 0)
         << QApplication::translate("selectplusdialog", "Auto", 0)
        );
        comboBox_2->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:Harmonic", 0)));
        label_47->setText(QApplication::translate("selectplusdialog", "Toggle:", 0));
        pushButton_8->setText(QApplication::translate("selectplusdialog", ">", 0));
        pushButton_8->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idToggleIndex", 0)));
        pushButton_7->setText(QApplication::translate("selectplusdialog", "<", 0));
        pushButton_7->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idToggleIndex", 0)));
        label_9->setText(QApplication::translate("selectplusdialog", "Toggle beetwen two tables:", 0));
        label_10->setText(QApplication::translate("selectplusdialog", "Table 1:", 0));
        label_11->setText(QApplication::translate("selectplusdialog", "Table 2:", 0));
        label_12->setText(QApplication::translate("selectplusdialog", "Shift Tables:", 0));
        pushButton->setText(QApplication::translate("selectplusdialog", "!", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idToggleIndex", 0)));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("selectplusdialog", "linear", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
        );
        comboBox_5->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idMbboIndex", 0)));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("selectplusdialog", "linear", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
         << QApplication::translate("selectplusdialog", "-unused-", 0)
        );
        comboBox_3->setProperty("pv", QVariant(QApplication::translate("selectplusdialog", "u411pgm1:idMbboIndex", 0)));
    } // retranslateUi

};

namespace Ui {
    class selectplusdialog: public Ui_selectplusdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTPLUSDIALOG_H
