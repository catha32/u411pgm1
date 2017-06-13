/********************************************************************************
** Form generated from reading UI file 'slitwidthvertical.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLITWIDTHVERTICAL_H
#define UI_SLITWIDTHVERTICAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcacombobox.h"
#include "qcalabel.h"
#include "qcalcdnumber.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_slitwidthvertical
{
public:
    QPushButton *pushButton_5;
    QLabel *label_9;
    QCALabel *label_11;
    QCALCDNumber *lcdNumber_7;
    QLabel *label_6;
    QCALCDNumber *lcdNumber_4;
    QCAComboBox *comboBox;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QCAPushButton *pushButton_14;
    QCAPushButton *pushButton;
    QCAPushButton *pushButton_15;
    QCAPushButton *pushButton_2;
    QCALabel *label;
    QLineEdit *lineEdit;
    QCALabel *label_2;
    QCAAxis *slitwidthaxis;
    QCAAxis *bandwidthaxis;
    QCAAxis *monoaxis;
    QCAAxis *exitarmaxis;
    QCAAxis *slitaxis;
    QCAAxis *Axis_5;
    QLabel *label_3;

    void setupUi(QWidget *slitwidthvertical)
    {
        if (slitwidthvertical->objectName().isEmpty())
            slitwidthvertical->setObjectName(QStringLiteral("slitwidthvertical"));
        slitwidthvertical->resize(481, 701);
        pushButton_5 = new QPushButton(slitwidthvertical);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(130, 360, 41, 22));
        label_9 = new QLabel(slitwidthvertical);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 510, 101, 16));
        label_11 = new QCALabel(slitwidthvertical);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 550, 59, 14));
        label_11->setLayoutDirection(Qt::LeftToRight);
        label_11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lcdNumber_7 = new QCALCDNumber(slitwidthvertical);
        lcdNumber_7->setObjectName(QStringLiteral("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(180, 510, 64, 23));
        label_6 = new QLabel(slitwidthvertical);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 360, 121, 16));
        lcdNumber_4 = new QCALCDNumber(slitwidthvertical);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(180, 350, 64, 23));
        comboBox = new QCAComboBox(slitwidthvertical);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 120, 101, 22));
        layoutWidget_2 = new QWidget(slitwidthvertical);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(52, 571, 340, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_14 = new QCAPushButton(layoutWidget_2);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout->addWidget(pushButton_14);

        pushButton = new QCAPushButton(layoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_15 = new QCAPushButton(layoutWidget_2);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setLayoutDirection(Qt::LeftToRight);
        pushButton_15->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(pushButton_15);

        pushButton_2 = new QCAPushButton(layoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QCALabel(slitwidthvertical);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 20, 111, 16));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        lineEdit = new QLineEdit(slitwidthvertical);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 120, 113, 22));
        label_2 = new QCALabel(slitwidthvertical);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(150, 50, 41, 16));
        slitwidthaxis = new QCAAxis(slitwidthvertical);
        slitwidthaxis->setObjectName(QStringLiteral("slitwidthaxis"));
        slitwidthaxis->setGeometry(QRect(20, 210, 350, 27));
        slitwidthaxis->setMinimumSize(QSize(100, 10));
        bandwidthaxis = new QCAAxis(slitwidthvertical);
        bandwidthaxis->setObjectName(QStringLiteral("bandwidthaxis"));
        bandwidthaxis->setGeometry(QRect(20, 260, 350, 27));
        bandwidthaxis->setMinimumSize(QSize(100, 10));
        monoaxis = new QCAAxis(slitwidthvertical);
        monoaxis->setObjectName(QStringLiteral("monoaxis"));
        monoaxis->setGeometry(QRect(20, 310, 350, 27));
        monoaxis->setMinimumSize(QSize(100, 10));
        exitarmaxis = new QCAAxis(slitwidthvertical);
        exitarmaxis->setObjectName(QStringLiteral("exitarmaxis"));
        exitarmaxis->setGeometry(QRect(20, 400, 350, 27));
        exitarmaxis->setMinimumSize(QSize(100, 10));
        slitaxis = new QCAAxis(slitwidthvertical);
        slitaxis->setObjectName(QStringLiteral("slitaxis"));
        slitaxis->setGeometry(QRect(20, 450, 350, 27));
        slitaxis->setMinimumSize(QSize(100, 10));
        Axis_5 = new QCAAxis(slitwidthvertical);
        Axis_5->setObjectName(QStringLiteral("Axis_5"));
        Axis_5->setGeometry(QRect(10, 650, 449, 32));
        label_3 = new QLabel(slitwidthvertical);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(190, 610, 111, 16));

        retranslateUi(slitwidthvertical);

        QMetaObject::connectSlotsByName(slitwidthvertical);
    } // setupUi

    void retranslateUi(QWidget *slitwidthvertical)
    {
        slitwidthvertical->setWindowTitle(QApplication::translate("slitwidthvertical", "Form", 0));
        pushButton_5->setText(QApplication::translate("slitwidthvertical", "?", 0));
        label_9->setText(QApplication::translate("slitwidthvertical", "SlitDistance(m)", 0));
        label_11->setText(QApplication::translate("slitwidthvertical", "Hard (H)", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_REF_STAT", 0)));
        lcdNumber_7->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SlitDist", 0)));
        label_6->setText(QApplication::translate("slitwidthvertical", "Total Bandw.(meV)", 0));
        lcdNumber_4->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:DE_0", 0)));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("slitwidthvertical", "Set_Slit(um)", 0)
         << QApplication::translate("slitwidthvertical", "Set_SlitBW(meV)", 0)
         << QApplication::translate("slitwidthvertical", "SetSlitResPow", 0)
        );
        comboBox->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_Distrib", 0)));
        pushButton_14->setText(QApplication::translate("slitwidthvertical", "DoRef", 0));
        pushButton_14->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_AKTION", 0)));
        pushButton->setText(QApplication::translate("slitwidthvertical", "Plateau", 0));
        pushButton->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_AKTION", 0)));
        pushButton_15->setText(QApplication::translate("slitwidthvertical", "STOP", 0));
        pushButton_15->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_AKTION", 0)));
        pushButton_2->setText(QApplication::translate("slitwidthvertical", "Close", 0));
        pushButton_2->setProperty("pv", QVariant(QString()));
        label->setText(QApplication::translate("slitwidthvertical", "TextLabel", 0));
        label->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:MonoName", 0)));
        label_2->setText(QString());
        label_2->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:Branch_0_Name", 0)));
        slitwidthaxis->setProperty("description", QVariant(QApplication::translate("slitwidthvertical", "Slitwidth", 0)));
        slitwidthaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SW", 0)));
        slitwidthaxis->setProperty("units", QVariant(QApplication::translate("slitwidthvertical", "um", 0)));
        slitwidthaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_Input", 0)));
        bandwidthaxis->setProperty("description", QVariant(QApplication::translate("slitwidthvertical", "Bandwidth slit", 0)));
        bandwidthaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_BW", 0)));
        bandwidthaxis->setProperty("units", QVariant(QApplication::translate("slitwidthvertical", "meV", 0)));
        bandwidthaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SetBW", 0)));
        monoaxis->setProperty("description", QVariant(QApplication::translate("slitwidthvertical", "Monochromaticity", 0)));
        monoaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_ResPow", 0)));
        monoaxis->setProperty("units", QVariant(QString()));
        monoaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SetRP", 0)));
        exitarmaxis->setProperty("description", QVariant(QApplication::translate("slitwidthvertical", "Exitarm", 0)));
        exitarmaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_exitarm", 0)));
        exitarmaxis->setProperty("units", QVariant(QApplication::translate("slitwidthvertical", "m", 0)));
        exitarmaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SetExit", 0)));
        slitaxis->setProperty("description", QVariant(QApplication::translate("slitwidthvertical", "Slit to Ph", 0)));
        slitaxis->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_Slit2Ph", 0)));
        slitaxis->setProperty("units", QVariant(QApplication::translate("slitwidthvertical", "m", 0)));
        slitaxis->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SetSlit2Ph", 0)));
        Axis_5->setProperty("description", QVariant(QApplication::translate("slitwidthvertical", "Speed", 0)));
        Axis_5->setProperty("pvReadback", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_JOGSPEED", 0)));
        Axis_5->setProperty("units", QVariant(QApplication::translate("slitwidthvertical", "mm/s", 0)));
        Axis_5->setProperty("pv", QVariant(QApplication::translate("slitwidthvertical", "u411pgm1:ES_0_SETJOGSPEED", 0)));
        label_3->setText(QApplication::translate("slitwidthvertical", "Low Level Motor", 0));
    } // retranslateUi

};

namespace Ui {
    class slitwidthvertical: public Ui_slitwidthvertical {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLITWIDTHVERTICAL_H
