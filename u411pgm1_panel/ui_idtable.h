/********************************************************************************
** Form generated from reading UI file 'idtable.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDTABLE_H
#define UI_IDTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qwt_plot.h"

QT_BEGIN_NAMESPACE

class Ui_IdTable
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QCALabel *label_8;
    QCALabel *label_9;
    QCALabel *label_10;
    QCALabel *label_11;
    QCAComboBox *comboBox;
    QwtPlot *qwtPlot;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QCALabel *label_15;
    QCALabel *label_16;
    QCALabel *label_17;
    QLabel *label_18;
    QCALabel *label_19;
    QLabel *label_20;
    QCALabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QCALabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QCALabel *label_27;
    QCALabel *label_28;
    QCALabel *label_29;
    QCALabel *label_30;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_31;
    QPushButton *pushButton_2;

    void setupUi(QWidget *IdTable)
    {
        if (IdTable->objectName().isEmpty())
            IdTable->setObjectName(QStringLiteral("IdTable"));
        IdTable->resize(415, 730);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IdTable->sizePolicy().hasHeightForWidth());
        IdTable->setSizePolicy(sizePolicy);
        IdTable->setMinimumSize(QSize(0, 730));
        label = new QLabel(IdTable);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 191, 16));
        label_2 = new QLabel(IdTable);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 71, 16));
        lineEdit = new QLineEdit(IdTable);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 70, 211, 22));
        label_3 = new QLabel(IdTable);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 100, 121, 16));
        label_4 = new QLabel(IdTable);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 130, 71, 16));
        label_5 = new QLabel(IdTable);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 150, 101, 16));
        label_6 = new QLabel(IdTable);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 170, 71, 16));
        label_7 = new QLabel(IdTable);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 190, 101, 16));
        label_8 = new QCALabel(IdTable);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(120, 130, 111, 16));
        label_9 = new QCALabel(IdTable);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(120, 150, 71, 16));
        label_10 = new QCALabel(IdTable);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 170, 131, 16));
        label_11 = new QCALabel(IdTable);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(120, 190, 121, 16));
        comboBox = new QCAComboBox(IdTable);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(290, 190, 111, 22));
        qwtPlot = new QwtPlot(IdTable);
        qwtPlot->setObjectName(QStringLiteral("qwtPlot"));
        qwtPlot->setGeometry(QRect(0, 220, 400, 291));
        label_12 = new QLabel(IdTable);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 520, 111, 16));
        label_13 = new QLabel(IdTable);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(10, 540, 101, 16));
        label_14 = new QLabel(IdTable);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 560, 111, 16));
        label_15 = new QCALabel(IdTable);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(140, 520, 91, 16));
        label_16 = new QCALabel(IdTable);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(180, 540, 61, 16));
        label_17 = new QCALabel(IdTable);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(140, 540, 59, 14));
        label_18 = new QLabel(IdTable);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 590, 51, 16));
        label_19 = new QCALabel(IdTable);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 590, 59, 14));
        label_20 = new QLabel(IdTable);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 670, 59, 14));
        label_21 = new QCALabel(IdTable);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(80, 670, 71, 16));
        label_22 = new QLabel(IdTable);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(90, 640, 59, 14));
        label_23 = new QLabel(IdTable);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(180, 640, 59, 14));
        label_24 = new QCALabel(IdTable);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(170, 670, 81, 16));
        label_25 = new QLabel(IdTable);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(10, 690, 71, 16));
        label_26 = new QLabel(IdTable);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(10, 710, 71, 16));
        label_27 = new QCALabel(IdTable);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(80, 690, 71, 16));
        label_28 = new QCALabel(IdTable);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(170, 690, 81, 16));
        label_29 = new QCALabel(IdTable);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(80, 710, 71, 16));
        label_30 = new QCALabel(IdTable);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(170, 710, 81, 16));
        textEdit = new QTextEdit(IdTable);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 510, 371, 161));
        pushButton = new QPushButton(IdTable);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(280, 690, 81, 22));
        widget = new QWidget(IdTable);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(12, 10, 138, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_31 = new QLabel(widget);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout->addWidget(label_31);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(IdTable);

        QMetaObject::connectSlotsByName(IdTable);
    } // setupUi

    void retranslateUi(QWidget *IdTable)
    {
        IdTable->setWindowTitle(QApplication::translate("IdTable", "Form", 0));
        label->setText(QApplication::translate("IdTable", "Undulator Table at u411pgm1", 0));
        label_2->setText(QApplication::translate("IdTable", "Table File:", 0));
        label_3->setText(QApplication::translate("IdTable", "Lookup Table Info:", 0));
        label_4->setText(QApplication::translate("IdTable", "Light Type:", 0));
        label_5->setText(QApplication::translate("IdTable", "User Comment:", 0));
        label_6->setText(QApplication::translate("IdTable", "Filename:", 0));
        label_7->setText(QApplication::translate("IdTable", "Domain Names:", 0));
        label_8->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_8->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:siIdLightType", 0)));
        label_9->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:siIdComment", 0)));
        label_10->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_10->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:idFilename", 0)));
        label_11->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:siIdDomainName", 0)));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("IdTable", "1st Harmonic", 0)
         << QApplication::translate("IdTable", "3rd Harmonic", 0)
         << QApplication::translate("IdTable", "5th Harmonic", 0)
         << QApplication::translate("IdTable", "7th Harmonic", 0)
         << QApplication::translate("IdTable", "Max Flux", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:Harmonic", 0)));
        qwtPlot->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:wfGetEnergy", 0)));
        qwtPlot->setProperty("pvY", QVariant(QApplication::translate("IdTable", "u411pgm1:wfGetHarmonic", 0)));
        label_12->setText(QApplication::translate("IdTable", "User Range (eV):", 0));
        label_13->setText(QApplication::translate("IdTable", "Full Range (eV):", 0));
        label_14->setText(QApplication::translate("IdTable", "Table is bijective", 0));
        label_15->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_15->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:siIdUserRange", 0)));
        label_16->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_16->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:aiIdMaxenergy", 0)));
        label_17->setText(QApplication::translate("IdTable", "TextLabel-", 0));
        label_17->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:aiIdMinenergy", 0)));
        label_18->setText(QApplication::translate("IdTable", "Status:", 0));
        label_19->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_19->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:idStatus", 0)));
        label_20->setText(QApplication::translate("IdTable", "Energy", 0));
        label_21->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_21->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:aiIdGetEnergy", 0)));
        label_22->setText(QApplication::translate("IdTable", "Target", 0));
        label_23->setText(QApplication::translate("IdTable", "Current", 0));
        label_24->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_24->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:aiIdGetCurenergy", 0)));
        label_25->setText(QApplication::translate("IdTable", "Gap ", 0));
        label_26->setText(QApplication::translate("IdTable", "Shift", 0));
        label_27->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_27->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:aiIdGetGap", 0)));
        label_28->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_28->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:GetIdGap", 0)));
        label_29->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_29->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:aiIdGetShift", 0)));
        label_30->setText(QApplication::translate("IdTable", "TextLabel", 0));
        label_30->setProperty("pv", QVariant(QApplication::translate("IdTable", "u411pgm1:GetIdShift", 0)));
        pushButton->setText(QApplication::translate("IdTable", "PushButton", 0));
        label_31->setText(QApplication::translate("IdTable", "ID Menu", 0));
        pushButton_2->setText(QApplication::translate("IdTable", "IdSelect", 0));
    } // retranslateUi

};

namespace Ui {
    class IdTable: public Ui_IdTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDTABLE_H
