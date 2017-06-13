/********************************************************************************
** Form generated from reading UI file 'heydemann.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HEYDEMANN_H
#define UI_HEYDEMANN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_heydemann
{
public:
    QCALabel *label;
    QLabel *label_2;
    QCAComboBox *comboBox;
    QLabel *label_3;
    QCALabel *label_4;
    QCAComboBox *comboBox_2;
    QCAPushButton *pushButton;
    QCAPushButton *pushButton_2;
    QCAPushButton *pushButton_3;
    QCALabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QCALabel *label_17;
    QLabel *label_18;
    QCALabel *label_19;
    QLabel *label_20;
    QProgressBar *progressBar;
    QLabel *label_21;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_22;
    QCAComboBox *comboBox_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QCALabel *label_23;
    QCAAxis *startAxis;
    QCAAxis *stopAxis;
    QCAAxis *offAxis;
    QCAAxis *rateAxis;

    void setupUi(QWidget *heydemann)
    {
        if (heydemann->objectName().isEmpty())
            heydemann->setObjectName(QStringLiteral("heydemann"));
        heydemann->resize(813, 548);
        label = new QCALabel(heydemann);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(250, 20, 111, 16));
        label_2 = new QLabel(heydemann);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 40, 151, 16));
        comboBox = new QCAComboBox(heydemann);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(440, 40, 72, 22));
        label_3 = new QLabel(heydemann);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 111, 16));
        label_4 = new QCALabel(heydemann);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 80, 101, 16));
        comboBox_2 = new QCAComboBox(heydemann);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(410, 80, 101, 22));
        pushButton = new QCAPushButton(heydemann);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 150, 81, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        pushButton_2 = new QCAPushButton(heydemann);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(710, 190, 81, 22));
        pushButton_3 = new QCAPushButton(heydemann);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(710, 230, 81, 22));
        label_13 = new QCALabel(heydemann);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(50, 340, 59, 14));
        label_14 = new QLabel(heydemann);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(40, 370, 59, 14));
        label_15 = new QLabel(heydemann);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 390, 59, 14));
        label_16 = new QLabel(heydemann);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(190, 370, 59, 14));
        label_17 = new QCALabel(heydemann);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(200, 340, 59, 14));
        label_17->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_18 = new QLabel(heydemann);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(180, 390, 59, 14));
        label_19 = new QCALabel(heydemann);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(190, 390, 59, 14));
        label_19->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_20 = new QLabel(heydemann);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(590, 250, 59, 14));
        progressBar = new QProgressBar(heydemann);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(680, 270, 118, 23));
        progressBar->setValue(24);
        label_21 = new QLabel(heydemann);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(30, 440, 111, 16));
        pushButton_4 = new QPushButton(heydemann);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 460, 81, 22));
        pushButton_5 = new QPushButton(heydemann);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 460, 81, 22));
        label_22 = new QLabel(heydemann);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(670, 430, 81, 16));
        comboBox_3 = new QCAComboBox(heydemann);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(670, 450, 72, 22));
        pushButton_6 = new QPushButton(heydemann);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 510, 101, 22));
        pushButton_7 = new QPushButton(heydemann);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(250, 510, 81, 22));
        label_23 = new QCALabel(heydemann);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(680, 390, 91, 16));
        startAxis = new QCAAxis(heydemann);
        startAxis->setObjectName(QStringLiteral("startAxis"));
        startAxis->setGeometry(QRect(10, 170, 230, 27));
        startAxis->setMinimumSize(QSize(100, 10));
        stopAxis = new QCAAxis(heydemann);
        stopAxis->setObjectName(QStringLiteral("stopAxis"));
        stopAxis->setGeometry(QRect(300, 170, 230, 27));
        stopAxis->setMinimumSize(QSize(100, 10));
        offAxis = new QCAAxis(heydemann);
        offAxis->setObjectName(QStringLiteral("offAxis"));
        offAxis->setGeometry(QRect(10, 240, 230, 27));
        offAxis->setMinimumSize(QSize(100, 10));
        rateAxis = new QCAAxis(heydemann);
        rateAxis->setObjectName(QStringLiteral("rateAxis"));
        rateAxis->setGeometry(QRect(300, 240, 230, 27));
        rateAxis->setMinimumSize(QSize(100, 10));

        retranslateUi(heydemann);

        QMetaObject::connectSlotsByName(heydemann);
    } // setupUi

    void retranslateUi(QWidget *heydemann)
    {
        heydemann->setWindowTitle(QApplication::translate("heydemann", "Form", 0));
        label->setText(QApplication::translate("heydemann", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:MonoName", 0)));
        label_2->setText(QApplication::translate("heydemann", "Heydemann Correction", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("heydemann", "On", 0)
         << QApplication::translate("heydemann", "Off", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:set_ikHeydemann", 0)));
        label_3->setText(QApplication::translate("heydemann", "Data Acquisition", 0));
        label_4->setText(QApplication::translate("heydemann", "TextLabel", 0));
        label_4->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:HeySelection", 0)));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("heydemann", "Andreas", 0)
         << QApplication::translate("heydemann", "Energy(eV)", 0)
         << QApplication::translate("heydemann", "Mirror(arcsec)", 0)
         << QApplication::translate("heydemann", "Grating(arcsec)", 0)
        );
        comboBox_2->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:SetHeySelection", 0)));
        pushButton->setText(QApplication::translate("heydemann", "STOP", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:IK_AKTION", 0)));
        pushButton_2->setText(QApplication::translate("heydemann", "Init", 0));
        pushButton_2->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:IK_AKTION", 0)));
        pushButton_3->setText(QApplication::translate("heydemann", "Run", 0));
        pushButton_3->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:IK_AKTION", 0)));
        label_13->setText(QApplication::translate("heydemann", "TextLabel", 0));
        label_13->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:liSTATUS", 0)));
        label_14->setText(QApplication::translate("heydemann", "Status", 0));
        label_15->setText(QApplication::translate("heydemann", "MEASURE", 0));
        label_16->setText(QApplication::translate("heydemann", "Flags", 0));
        label_17->setText(QApplication::translate("heydemann", "TextLabel", 0));
        label_17->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:liFLAGS", 0)));
        label_18->setText(QString());
        label_19->setText(QApplication::translate("heydemann", "TextLabel", 0));
        label_19->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:mbbiFLAGS", 0)));
        label_20->setText(QApplication::translate("heydemann", "acquired", 0));
        progressBar->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:liVal", 0)));
        label_21->setText(QApplication::translate("heydemann", "Data Evaluation", 0));
        pushButton_4->setText(QApplication::translate("heydemann", "View Data", 0));
        pushButton_5->setText(QApplication::translate("heydemann", "Calculation", 0));
        label_22->setText(QApplication::translate("heydemann", "IK-Channel", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("heydemann", "0 (M)", 0)
         << QApplication::translate("heydemann", "1 (M)", 0)
         << QApplication::translate("heydemann", "2 (M)", 0)
         << QApplication::translate("heydemann", "3 (M)", 0)
         << QApplication::translate("heydemann", "4 (G)", 0)
         << QApplication::translate("heydemann", "5 (G)", 0)
         << QApplication::translate("heydemann", "6 (G)", 0)
         << QApplication::translate("heydemann", "7 (G)", 0)
        );
        comboBox_3->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:mbboHeydSignal", 0)));
        pushButton_6->setText(QApplication::translate("heydemann", "Configuration", 0));
        pushButton_7->setText(QApplication::translate("heydemann", "fb-Details", 0));
        label_23->setText(QApplication::translate("heydemann", "TextLabel", 0));
        label_23->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:liVAL", 0)));
        startAxis->setProperty("description", QVariant(QApplication::translate("heydemann", "Start", 0)));
        startAxis->setProperty("pvReadback", QVariant(QApplication::translate("heydemann", "u411pgm1:HeyStart", 0)));
        startAxis->setProperty("units", QVariant(QApplication::translate("heydemann", "eV", 0)));
        startAxis->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:SetHeyStart", 0)));
        stopAxis->setProperty("description", QVariant(QApplication::translate("heydemann", "Stop", 0)));
        stopAxis->setProperty("pvReadback", QVariant(QApplication::translate("heydemann", "u411pgm1:HeyStop", 0)));
        stopAxis->setProperty("units", QVariant(QApplication::translate("heydemann", "eV", 0)));
        stopAxis->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:SetHeyStop", 0)));
        offAxis->setProperty("description", QVariant(QApplication::translate("heydemann", "Offset", 0)));
        offAxis->setProperty("pvReadback", QVariant(QApplication::translate("heydemann", "u411pgm1:HeyOffset", 0)));
        offAxis->setProperty("units", QVariant(QString()));
        offAxis->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:SetHeyOffset", 0)));
        rateAxis->setProperty("description", QVariant(QApplication::translate("heydemann", "Rate", 0)));
        rateAxis->setProperty("pvReadback", QVariant(QApplication::translate("heydemann", "u411pgm1:HeyRate", 0)));
        rateAxis->setProperty("units", QVariant(QApplication::translate("heydemann", "Hz", 0)));
        rateAxis->setProperty("pv", QVariant(QApplication::translate("heydemann", "u411pgm1:SetHeyRate", 0)));
    } // retranslateUi

};

namespace Ui {
    class heydemann: public Ui_heydemann {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HEYDEMANN_H
