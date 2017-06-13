/********************************************************************************
** Form generated from reading UI file 'idparameter.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDPARAMETER_H
#define UI_IDPARAMETER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qcaled.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_idparameter
{
public:
    QCALabel *label;
    QCAPushButton *pushButton;
    QLabel *label_2;
    QCALabel *label_3;
    QLabel *label_4;
    QLabel *label_11;
    QLabel *label_14;
    QCALabel *label_15;
    QCAComboBox *comboBox_3;
    QLabel *label_20;
    QCALabel *label_21;
    QLabel *label_22;
    QCALabel *label_23;
    QCAComboBox *comboBox_5;
    QLabel *label_24;
    QCALabel *label_25;
    QCAPushButton *pushButton_2;
    QLabel *label_30;
    QLabel *label_40;
    QCAPushButton *pushButton_3;
    QCAPushButton *pushButton_4;
    QCAPushButton *pushButton_5;
    QCAPushButton *pushButton_6;
    QCAPushButton *pushButton_7;
    QLabel *label_43;
    QCALabel *label_44;
    QLabel *label_45;
    QCALabel *label_46;
    QLabel *label_47;
    QCALabel *label_48;
    QLabel *label_49;
    QCALabel *label_50;
    QLabel *label_51;
    QCALabel *label_52;
    QLabel *label_53;
    QCALabel *label_54;
    QCALed *LedV1;
    QCAComboBox *ComboBox;
    QCAComboBox *ComboBox_2;
    QCAComboBox *ComboBox_3;
    QCAAxis *posAxis;
    QCAAxis *forceAxis;
    QCAAxis *energyAxis;
    QCAAxis *slopeAxis;
    QCAAxis *offAxis;
    QCAAxis *gapiAxis;
    QCAAxis *shiAxis;
    QCAAxis *fixgapAxis;
    QCAAxis *fixshiftAxis;
    QCAAxis *userAxis;
    QLabel *label_5;
    QCALabel *label_6;
    QCAAxis *fixgapshiftAxis;

    void setupUi(QWidget *idparameter)
    {
        if (idparameter->objectName().isEmpty())
            idparameter->setObjectName(QStringLiteral("idparameter"));
        idparameter->resize(494, 845);
        idparameter->setMinimumSize(QSize(0, 845));
        idparameter->setStyleSheet(QStringLiteral(""));
        label = new QCALabel(idparameter);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 30, 171, 16));
        pushButton = new QCAPushButton(idparameter);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 30, 81, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_2 = new QLabel(idparameter);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 151, 16));
        label_2->setStyleSheet(QStringLiteral(""));
        label_3 = new QCALabel(idparameter);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 60, 59, 14));
        label_4 = new QLabel(idparameter);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 90, 111, 16));
        label_11 = new QLabel(idparameter);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 270, 151, 16));
        label_14 = new QLabel(idparameter);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(30, 330, 71, 16));
        label_15 = new QCALabel(idparameter);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 330, 59, 14));
        label_15->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        comboBox_3 = new QCAComboBox(idparameter);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(320, 320, 111, 22));
        label_20 = new QLabel(idparameter);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(30, 420, 111, 16));
        label_21 = new QCALabel(idparameter);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(180, 420, 59, 14));
        label_22 = new QLabel(idparameter);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(30, 450, 131, 16));
        label_23 = new QCALabel(idparameter);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(180, 450, 59, 14));
        comboBox_5 = new QCAComboBox(idparameter);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(320, 440, 72, 22));
        label_24 = new QLabel(idparameter);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(30, 230, 61, 16));
        label_25 = new QCALabel(idparameter);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(180, 230, 81, 16));
        pushButton_2 = new QCAPushButton(idparameter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 190, 81, 22));
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        label_30 = new QLabel(idparameter);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(20, 550, 191, 16));
        label_40 = new QLabel(idparameter);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(20, 690, 121, 16));
        pushButton_3 = new QCAPushButton(idparameter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(320, 750, 81, 22));
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 85, 255);"));
        pushButton_4 = new QCAPushButton(idparameter);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 750, 111, 22));
        pushButton_5 = new QCAPushButton(idparameter);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(190, 680, 81, 22));
        pushButton_5->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        pushButton_6 = new QCAPushButton(idparameter);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(280, 680, 81, 22));
        pushButton_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        pushButton_7 = new QCAPushButton(idparameter);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 680, 81, 22));
        pushButton_7->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        label_43 = new QLabel(idparameter);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(10, 790, 59, 14));
        label_44 = new QCALabel(idparameter);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(10, 820, 91, 16));
        label_45 = new QLabel(idparameter);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(120, 790, 59, 14));
        label_46 = new QCALabel(idparameter);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(110, 820, 81, 16));
        label_47 = new QLabel(idparameter);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(200, 790, 59, 14));
        label_48 = new QCALabel(idparameter);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(190, 820, 71, 16));
        label_49 = new QLabel(idparameter);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(290, 790, 71, 16));
        label_50 = new QCALabel(idparameter);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(280, 820, 61, 16));
        label_51 = new QLabel(idparameter);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(410, 790, 59, 14));
        label_52 = new QCALabel(idparameter);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(410, 820, 59, 14));
        label_52->setStyleSheet(QStringLiteral("color: rgb(0, 170, 127);"));
        label_53 = new QLabel(idparameter);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(330, 820, 21, 16));
        label_54 = new QCALabel(idparameter);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(330, 820, 59, 14));
        LedV1 = new QCALed(idparameter);
        LedV1->setObjectName(QStringLiteral("LedV1"));
        LedV1->setGeometry(QRect(310, 190, 21, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LedV1->sizePolicy().hasHeightForWidth());
        LedV1->setSizePolicy(sizePolicy);
        ComboBox = new QCAComboBox(idparameter);
        ComboBox->setObjectName(QStringLiteral("ComboBox"));
        ComboBox->setGeometry(QRect(320, 90, 71, 22));
        ComboBox_2 = new QCAComboBox(idparameter);
        ComboBox_2->setObjectName(QStringLiteral("ComboBox_2"));
        ComboBox_2->setGeometry(QRect(320, 60, 71, 22));
        ComboBox_3 = new QCAComboBox(idparameter);
        ComboBox_3->setObjectName(QStringLiteral("ComboBox_3"));
        ComboBox_3->setGeometry(QRect(320, 410, 71, 22));
        posAxis = new QCAAxis(idparameter);
        posAxis->setObjectName(QStringLiteral("posAxis"));
        posAxis->setGeometry(QRect(30, 150, 360, 27));
        posAxis->setMinimumSize(QSize(100, 10));
        forceAxis = new QCAAxis(idparameter);
        forceAxis->setObjectName(QStringLiteral("forceAxis"));
        forceAxis->setGeometry(QRect(30, 120, 360, 27));
        forceAxis->setMinimumSize(QSize(100, 10));
        energyAxis = new QCAAxis(idparameter);
        energyAxis->setObjectName(QStringLiteral("energyAxis"));
        energyAxis->setGeometry(QRect(30, 290, 360, 27));
        energyAxis->setMinimumSize(QSize(100, 10));
        slopeAxis = new QCAAxis(idparameter);
        slopeAxis->setObjectName(QStringLiteral("slopeAxis"));
        slopeAxis->setGeometry(QRect(30, 350, 360, 27));
        slopeAxis->setMinimumSize(QSize(100, 10));
        offAxis = new QCAAxis(idparameter);
        offAxis->setObjectName(QStringLiteral("offAxis"));
        offAxis->setGeometry(QRect(30, 380, 360, 27));
        offAxis->setMinimumSize(QSize(100, 10));
        gapiAxis = new QCAAxis(idparameter);
        gapiAxis->setObjectName(QStringLiteral("gapiAxis"));
        gapiAxis->setGeometry(QRect(30, 470, 360, 27));
        gapiAxis->setMinimumSize(QSize(100, 10));
        shiAxis = new QCAAxis(idparameter);
        shiAxis->setObjectName(QStringLiteral("shiAxis"));
        shiAxis->setGeometry(QRect(30, 510, 360, 27));
        shiAxis->setMinimumSize(QSize(100, 10));
        fixgapAxis = new QCAAxis(idparameter);
        fixgapAxis->setObjectName(QStringLiteral("fixgapAxis"));
        fixgapAxis->setGeometry(QRect(20, 570, 360, 27));
        fixgapAxis->setMinimumSize(QSize(100, 10));
        fixshiftAxis = new QCAAxis(idparameter);
        fixshiftAxis->setObjectName(QStringLiteral("fixshiftAxis"));
        fixshiftAxis->setGeometry(QRect(20, 610, 360, 27));
        fixshiftAxis->setMinimumSize(QSize(100, 10));
        userAxis = new QCAAxis(idparameter);
        userAxis->setObjectName(QStringLiteral("userAxis"));
        userAxis->setGeometry(QRect(20, 710, 360, 27));
        userAxis->setMinimumSize(QSize(100, 10));
        label_5 = new QLabel(idparameter);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 200, 131, 16));
        label_6 = new QCALabel(idparameter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(180, 200, 59, 14));
        fixgapshiftAxis = new QCAAxis(idparameter);
        fixgapshiftAxis->setObjectName(QStringLiteral("fixgapshiftAxis"));
        fixgapshiftAxis->setGeometry(QRect(20, 650, 360, 27));
        fixgapshiftAxis->setMinimumSize(QSize(100, 10));

        retranslateUi(idparameter);

        QMetaObject::connectSlotsByName(idparameter);
    } // setupUi

    void retranslateUi(QWidget *idparameter)
    {
        idparameter->setWindowTitle(QApplication::translate("idparameter", "Form", 0));
        label->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:MonoName", 0)));
        pushButton->setText(QApplication::translate("idparameter", "STOP", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:idstop.PROC", 0)));
        label_2->setText(QApplication::translate("idparameter", "Undulator Control Mode ", 0));
        label_3->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_3->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:liIdGetMode", 0)));
        label_4->setText(QApplication::translate("idparameter", "Debugging Level", 0));
        label_11->setText(QApplication::translate("idparameter", "Undulator Table Mode", 0));
        label_14->setText(QApplication::translate("idparameter", "Harmonic", 0));
        label_15->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_15->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:liIdGetHarmonic", 0)));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("idparameter", "1st Harmonic", 0)
         << QApplication::translate("idparameter", "3rd Harmonic", 0)
         << QApplication::translate("idparameter", "5th Harmonic", 0)
         << QApplication::translate("idparameter", "7th Harmonic", 0)
         << QApplication::translate("idparameter", "Max Flux", 0)
         << QApplication::translate("idparameter", "Auto", 0)
        );
        comboBox_3->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:Harmonic", 0)));
        label_20->setText(QApplication::translate("idparameter", "Auto Inter. Order", 0));
        label_21->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_21->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdAutoOrder", 0)));
        label_22->setText(QApplication::translate("idparameter", "Spline Interpolation", 0));
        label_23->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_23->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdGetSpline", 0)));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("idparameter", "Off", 0)
         << QApplication::translate("idparameter", "On", 0)
        );
        comboBox_5->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdSetSpline", 0)));
        label_24->setText(QApplication::translate("idparameter", "Message", 0));
        label_25->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_25->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:strIdStatus", 0)));
        pushButton_2->setText(QApplication::translate("idparameter", "Confirm", 0));
        pushButton_2->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdConfirmed", 0)));
        label_30->setText(QApplication::translate("idparameter", "Fixed Values for Preset Mode", 0));
        label_40->setText(QApplication::translate("idparameter", "Configuration File", 0));
        pushButton_3->setText(QApplication::translate("idparameter", "Move ID", 0));
        pushButton_3->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:idstart.PROC", 0)));
        pushButton_4->setText(QApplication::translate("idparameter", "Update Display", 0));
        pushButton_4->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:wfGetEnergy.PROC", 0)));
        pushButton_5->setText(QApplication::translate("idparameter", "Load", 0));
        pushButton_5->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:loIdConfig", 0)));
        pushButton_6->setText(QApplication::translate("idparameter", "Save", 0));
        pushButton_6->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:loIdConfig", 0)));
        pushButton_7->setText(QApplication::translate("idparameter", "Remove", 0));
        pushButton_7->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:loIdConfig", 0)));
        label_43->setText(QApplication::translate("idparameter", "Energy", 0));
        label_44->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_44->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdGetCurenergy", 0)));
        label_45->setText(QApplication::translate("idparameter", "Gap", 0));
        label_46->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_46->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:GetIdGap", 0)));
        label_47->setText(QApplication::translate("idparameter", "Shift", 0));
        label_48->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_48->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:GetIdShift", 0)));
        label_49->setText(QApplication::translate("idparameter", "Range(eV)", 0));
        label_50->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_50->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdMinenergy", 0)));
        label_51->setText(QApplication::translate("idparameter", "Status", 0));
        label_52->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_52->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:idStatus", 0)));
        label_53->setText(QApplication::translate("idparameter", "-", 0));
        label_54->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_54->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdMaxenergy", 0)));
        LedV1->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdConfirmed", 0)));
        ComboBox->clear();
        ComboBox->insertItems(0, QStringList()
         << QApplication::translate("idparameter", "Off", 0)
         << QApplication::translate("idparameter", "On", 0)
        );
        ComboBox->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdDebugLevel", 0)));
        ComboBox_2->clear();
        ComboBox_2->insertItems(0, QStringList()
         << QApplication::translate("idparameter", "ID Off", 0)
         << QApplication::translate("idparameter", "Preset Gap/Shift", 0)
         << QApplication::translate("idparameter", "Preset Gap", 0)
         << QApplication::translate("idparameter", "Preset Shift", 0)
         << QApplication::translate("idparameter", "Gap only", 0)
         << QApplication::translate("idparameter", "Shift only", 0)
        );
        ComboBox_2->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdMode", 0)));
        ComboBox_3->clear();
        ComboBox_3->insertItems(0, QStringList()
         << QApplication::translate("idparameter", "On", 0)
         << QApplication::translate("idparameter", "Off", 0)
        );
        ComboBox_3->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdSetAutoOrder", 0)));
        posAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "in Position Band", 0)));
        posAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:IdInPosBand", 0)));
        posAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "mm", 0)));
        posAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdInPosBand", 0)));
        forceAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Dwell Timeout", 0)));
        forceAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:IdDwellTimeout", 0)));
        forceAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "mm", 0)));
        forceAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdDwellTimeout", 0)));
        energyAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Energy", 0)));
        energyAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdGetEnergy", 0)));
        energyAxis->setProperty("units", QVariant(QString()));
        energyAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdSetEnergy", 0)));
        slopeAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Slope", 0)));
        slopeAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdSlope", 0)));
        slopeAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "mm/eV", 0)));
        slopeAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:SetaiIdSlope", 0)));
        offAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Offset", 0)));
        offAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdOffset", 0)));
        offAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "eV", 0)));
        offAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:SetaiIdOffset", 0)));
        gapiAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Gap intern. Order", 0)));
        gapiAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:liIdGetGapOrder", 0)));
        gapiAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "eV", 0)));
        gapiAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:liIdSetGapOrder", 0)));
        shiAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Shift intern. Order", 0)));
        shiAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:liIdGetShiftOrder", 0)));
        shiAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "eV", 0)));
        shiAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:liIdSetShiftOrder", 0)));
        fixgapAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Fixed Gap", 0)));
        fixgapAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdGetFixedGap", 0)));
        fixgapAxis->setProperty("units", QVariant(QString()));
        fixgapAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdSetFixedGap", 0)));
        fixshiftAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Fixed Shift", 0)));
        fixshiftAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdGetFixedShift", 0)));
        fixshiftAxis->setProperty("units", QVariant(QString()));
        fixshiftAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdSetFixedShift", 0)));
        userAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "User Table Comment", 0)));
        userAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:siIdComment", 0)));
        userAxis->setProperty("units", QVariant(QString()));
        userAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:SetsiIdComment", 0)));
        label_5->setText(QApplication::translate("idparameter", "Force Confirm Errors", 0));
        label_6->setText(QApplication::translate("idparameter", "TextLabel", 0));
        label_6->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:IdConfirmError", 0)));
        fixgapshiftAxis->setProperty("description", QVariant(QApplication::translate("idparameter", "Fixed Gap/shift of Energy", 0)));
        fixgapshiftAxis->setProperty("pvReadback", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdGetFixedGap", 0)));
        fixgapshiftAxis->setProperty("units", QVariant(QApplication::translate("idparameter", "eV(-)", 0)));
        fixgapshiftAxis->setProperty("pv", QVariant(QApplication::translate("idparameter", "u411pgm1:aiIdGetFixedShift", 0)));
    } // retranslateUi

};

namespace Ui {
    class idparameter: public Ui_idparameter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDPARAMETER_H
