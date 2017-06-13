/********************************************************************************
** Form generated from reading UI file 'idexpert.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDEXPERT_H
#define UI_IDEXPERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_IdExpert
{
public:
    QLabel *label;
    QCAComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QCAComboBox *comboBox_2;
    QLabel *label_4;
    QLabel *label_5;
    QCAComboBox *comboBox_3;
    QCAComboBox *comboBox_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QCAComboBox *comboBox_5;
    QPushButton *pushButton;
    QCAPushButton *pushButton_2;
    QCAPushButton *pushButton_3;
    QCAPushButton *pushButton_4;
    QCAAxis *blazeAxis;
    QCAAxis *cAxis;
    QCAAxis *fixAxis;
    QCAAxis *fixtAxis;
    QCAAxis *idsAxis;
    QCAAxis *idoAxis;
    QCAAxis *amcAxis;
    QCAAxis *amc2Axis;
    QCAAxis *mirrAxis;
    QCAAxis *gratAxis;
    QCAAxis *distAxis;

    void setupUi(QWidget *IdExpert)
    {
        if (IdExpert->objectName().isEmpty())
            IdExpert->setObjectName(QStringLiteral("IdExpert"));
        IdExpert->resize(839, 425);
        label = new QLabel(IdExpert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 50, 71, 16));
        comboBox = new QCAComboBox(IdExpert);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(30, 70, 101, 22));
        label_2 = new QLabel(IdExpert);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 50, 71, 16));
        label_3 = new QLabel(IdExpert);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 30, 59, 14));
        comboBox_2 = new QCAComboBox(IdExpert);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(170, 70, 72, 22));
        label_4 = new QLabel(IdExpert);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 30, 59, 14));
        label_5 = new QLabel(IdExpert);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(310, 50, 71, 16));
        comboBox_3 = new QCAComboBox(IdExpert);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(300, 70, 72, 22));
        comboBox_4 = new QCAComboBox(IdExpert);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));
        comboBox_4->setGeometry(QRect(430, 70, 72, 22));
        label_6 = new QLabel(IdExpert);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(430, 50, 71, 16));
        label_7 = new QLabel(IdExpert);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(580, 30, 59, 14));
        label_8 = new QLabel(IdExpert);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(580, 50, 71, 16));
        comboBox_5 = new QCAComboBox(IdExpert);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setGeometry(QRect(570, 70, 72, 22));
        pushButton = new QPushButton(IdExpert);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 390, 111, 22));
        pushButton_2 = new QCAPushButton(IdExpert);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(430, 290, 181, 22));
        pushButton_3 = new QCAPushButton(IdExpert);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(630, 290, 81, 22));
        pushButton_4 = new QCAPushButton(IdExpert);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(410, 390, 141, 22));
        blazeAxis = new QCAAxis(IdExpert);
        blazeAxis->setObjectName(QStringLiteral("blazeAxis"));
        blazeAxis->setGeometry(QRect(20, 120, 280, 27));
        blazeAxis->setMinimumSize(QSize(100, 10));
        cAxis = new QCAAxis(IdExpert);
        cAxis->setObjectName(QStringLiteral("cAxis"));
        cAxis->setGeometry(QRect(20, 160, 280, 27));
        cAxis->setMinimumSize(QSize(100, 10));
        fixAxis = new QCAAxis(IdExpert);
        fixAxis->setObjectName(QStringLiteral("fixAxis"));
        fixAxis->setGeometry(QRect(20, 200, 280, 27));
        fixAxis->setMinimumSize(QSize(100, 10));
        fixtAxis = new QCAAxis(IdExpert);
        fixtAxis->setObjectName(QStringLiteral("fixtAxis"));
        fixtAxis->setGeometry(QRect(20, 240, 280, 27));
        fixtAxis->setMinimumSize(QSize(100, 10));
        idsAxis = new QCAAxis(IdExpert);
        idsAxis->setObjectName(QStringLiteral("idsAxis"));
        idsAxis->setGeometry(QRect(20, 290, 280, 27));
        idsAxis->setMinimumSize(QSize(100, 10));
        idoAxis = new QCAAxis(IdExpert);
        idoAxis->setObjectName(QStringLiteral("idoAxis"));
        idoAxis->setGeometry(QRect(20, 330, 280, 27));
        idoAxis->setMinimumSize(QSize(100, 10));
        amcAxis = new QCAAxis(IdExpert);
        amcAxis->setObjectName(QStringLiteral("amcAxis"));
        amcAxis->setGeometry(QRect(430, 120, 280, 27));
        amcAxis->setMinimumSize(QSize(100, 10));
        amc2Axis = new QCAAxis(IdExpert);
        amc2Axis->setObjectName(QStringLiteral("amc2Axis"));
        amc2Axis->setGeometry(QRect(430, 160, 280, 27));
        amc2Axis->setMinimumSize(QSize(100, 10));
        mirrAxis = new QCAAxis(IdExpert);
        mirrAxis->setObjectName(QStringLiteral("mirrAxis"));
        mirrAxis->setGeometry(QRect(430, 200, 280, 27));
        mirrAxis->setMinimumSize(QSize(100, 10));
        gratAxis = new QCAAxis(IdExpert);
        gratAxis->setObjectName(QStringLiteral("gratAxis"));
        gratAxis->setGeometry(QRect(430, 240, 280, 27));
        gratAxis->setMinimumSize(QSize(100, 10));
        distAxis = new QCAAxis(IdExpert);
        distAxis->setObjectName(QStringLiteral("distAxis"));
        distAxis->setGeometry(QRect(430, 330, 280, 27));
        distAxis->setMinimumSize(QSize(100, 10));

        retranslateUi(IdExpert);

        QMetaObject::connectSlotsByName(IdExpert);
    } // setupUi

    void retranslateUi(QWidget *IdExpert)
    {
        IdExpert->setWindowTitle(QApplication::translate("IdExpert", "Form", 0));
        label->setText(QApplication::translate("IdExpert", "ID-control", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("IdExpert", "Check SMU", 0)
         << QApplication::translate("IdExpert", "Ignore SMU", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:IdDependSMU", 0)));
        label_2->setText(QApplication::translate("IdExpert", "Correction", 0));
        label_3->setText(QApplication::translate("IdExpert", "Angel", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("IdExpert", "On", 0)
         << QApplication::translate("IdExpert", "Off", 0)
        );
        comboBox_2->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:set_ikHeydemann", 0)));
        label_4->setText(QApplication::translate("IdExpert", "Collision", 0));
        label_5->setText(QApplication::translate("IdExpert", "Control", 0));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("IdExpert", "On", 0)
         << QApplication::translate("IdExpert", "Off", 0)
        );
        comboBox_3->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:MbboCheckBMT", 0)));
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("IdExpert", "Normal", 0)
         << QApplication::translate("IdExpert", "Grating", 0)
         << QApplication::translate("IdExpert", "Mirror", 0)
         << QApplication::translate("IdExpert", "Energy", 0)
         << QApplication::translate("IdExpert", "Exit Slit", 0)
         << QApplication::translate("IdExpert", "Pinhole", 0)
         << QApplication::translate("IdExpert", "Direct ID", 0)
         << QApplication::translate("IdExpert", "Choppper", 0)
         << QApplication::translate("IdExpert", "Cff", 0)
         << QApplication::translate("IdExpert", "Aperture", 0)
         << QApplication::translate("IdExpert", "SMU", 0)
         << QApplication::translate("IdExpert", "CA-Motor", 0)
         << QApplication::translate("IdExpert", "Motor", 0)
        );
        comboBox_4->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetAmcMode", 0)));
        label_6->setText(QApplication::translate("IdExpert", "AmcMode", 0));
        label_7->setText(QApplication::translate("IdExpert", "Direct", 0));
        label_8->setText(QApplication::translate("IdExpert", "ID mode", 0));
        comboBox_5->clear();
        comboBox_5->insertItems(0, QStringList()
         << QApplication::translate("IdExpert", "null", 0)
         << QApplication::translate("IdExpert", "SPO = energy", 0)
         << QApplication::translate("IdExpert", "SPO = lamda", 0)
         << QApplication::translate("IdExpert", "SPO = gab", 0)
        );
        comboBox_5->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:AmcSetMode", 0)));
        pushButton->setText(QApplication::translate("IdExpert", "Calculate", 0));
        pushButton->setProperty("pv", QVariant(QString()));
        pushButton_2->setText(QApplication::translate("IdExpert", "Set Offset to all branches", 0));
        pushButton_2->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:Mono_Aktion", 0)));
        pushButton_3->setText(QApplication::translate("IdExpert", "BZ_KNOB", 0));
        pushButton_3->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:Mono_Aktion.PROC", 0)));
        pushButton_4->setText(QApplication::translate("IdExpert", "Save as Startup", 0));
        pushButton_4->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:Mono_Aktion.PROC", 0)));
        blazeAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "blaze angle", 0)));
        blazeAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:blazeAngle", 0)));
        blazeAxis->setProperty("units", QVariant(QString()));
        blazeAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetblazeAngle", 0)));
        cAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "cDriveEnergy", 0)));
        cAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:cDriveEnergy", 0)));
        cAxis->setProperty("units", QVariant(QString()));
        cAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetcDriveEnergy", 0)));
        fixAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "fixbeta", 0)));
        fixAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:FixBetaAngle", 0)));
        fixAxis->setProperty("units", QVariant(QString()));
        fixAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetFixBetaAngle", 0)));
        fixtAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "fixtheta", 0)));
        fixtAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:FixThetaAngle", 0)));
        fixtAxis->setProperty("units", QVariant(QString()));
        fixtAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetFixThetaAngle", 0)));
        idsAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "IdSlope", 0)));
        idsAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:aiIdSlope", 0)));
        idsAxis->setProperty("units", QVariant(QString()));
        idsAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetaiIdSlope", 0)));
        idoAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "IdOffset", 0)));
        idoAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:aiIdOffset", 0)));
        idoAxis->setProperty("units", QVariant(QString()));
        idoAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetaiIdOffset", 0)));
        amcAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "AmcFactor", 0)));
        amcAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:AmcFactor", 0)));
        amcAxis->setProperty("units", QVariant(QString()));
        amcAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetAmcFactor", 0)));
        amc2Axis->setProperty("description", QVariant(QApplication::translate("IdExpert", "AmcBranch", 0)));
        amc2Axis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:AmcBranch", 0)));
        amc2Axis->setProperty("units", QVariant(QString()));
        amc2Axis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetAmcBranch", 0)));
        mirrAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "MirrorOffset", 0)));
        mirrAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:GetMOffset", 0)));
        mirrAxis->setProperty("units", QVariant(QString()));
        mirrAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetMOffset", 0)));
        gratAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "GratingOffset", 0)));
        gratAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:GetGOffset", 0)));
        gratAxis->setProperty("units", QVariant(QString()));
        gratAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:SetGOffset", 0)));
        distAxis->setProperty("description", QVariant(QApplication::translate("IdExpert", "SlitDist", 0)));
        distAxis->setProperty("pvReadback", QVariant(QApplication::translate("IdExpert", "u411pgm1:ES_0_SlitDist", 0)));
        distAxis->setProperty("units", QVariant(QApplication::translate("IdExpert", "m", 0)));
        distAxis->setProperty("pv", QVariant(QApplication::translate("IdExpert", "u411pgm1:ES_0_SetSlitDist", 0)));
    } // retranslateUi

};

namespace Ui {
    class IdExpert: public Ui_IdExpert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDEXPERT_H
