/********************************************************************************
** Form generated from reading UI file 'slitunittranslation.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLITUNITTRANSLATION_H
#define UI_SLITUNITTRANSLATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcaaxis.h"
#include "qcalabel.h"
#include "qcaled.h"
#include "qcapushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_slitunittranslation
{
public:
    QCALed *LedV1_5;
    QCALed *LedV1_8;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QCAPushButton *pushButton_18;
    QCAPushButton *pushButton_19;
    QCAPushButton *pushButton_16;
    QCALed *LedV1_7;
    QCAPushButton *pushButton_27;
    QCALabel *label_14;
    QCALabel *label_11;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_7;
    QCAPushButton *pushButton_29;
    QCAPushButton *pushButton_30;
    QCAPushButton *pushButton_26;
    QCAPushButton *pushButton_17;
    QCAPushButton *pushButton_20;
    QCALed *LedV1_6;
    QCAPushButton *pushButton_28;
    QCAPushButton *pushButton_24;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QCAPushButton *pushButton_22;
    QCAPushButton *pushButton_23;
    QCALabel *label;
    QCAPushButton *pushButton_25;
    QLabel *label_15;
    QCALabel *label_12;
    QCAPushButton *pushButton_21;
    QCALabel *label_9;
    QCAAxis *step2saxis;
    QCAAxis *speed2axis;
    QCAAxis *po2saxis;
    QCAAxis *goto2axis;

    void setupUi(QWidget *slitunittranslation)
    {
        if (slitunittranslation->objectName().isEmpty())
            slitunittranslation->setObjectName(QStringLiteral("slitunittranslation"));
        slitunittranslation->resize(495, 637);
        slitunittranslation->setMinimumSize(QSize(450, 0));
        LedV1_5 = new QCALed(slitunittranslation);
        LedV1_5->setObjectName(QStringLiteral("LedV1_5"));
        LedV1_5->setGeometry(QRect(80, 107, 21, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LedV1_5->sizePolicy().hasHeightForWidth());
        LedV1_5->setSizePolicy(sizePolicy);
        LedV1_8 = new QCALed(slitunittranslation);
        LedV1_8->setObjectName(QStringLiteral("LedV1_8"));
        LedV1_8->setGeometry(QRect(80, 227, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_8->sizePolicy().hasHeightForWidth());
        LedV1_8->setSizePolicy(sizePolicy);
        layoutWidget_4 = new QWidget(slitunittranslation);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(130, 147, 168, 24));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QCAPushButton(layoutWidget_4);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));

        horizontalLayout_5->addWidget(pushButton_18);

        pushButton_19 = new QCAPushButton(layoutWidget_4);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));

        horizontalLayout_5->addWidget(pushButton_19);

        pushButton_16 = new QCAPushButton(slitunittranslation);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(130, 267, 171, 22));
        LedV1_7 = new QCALed(slitunittranslation);
        LedV1_7->setObjectName(QStringLiteral("LedV1_7"));
        LedV1_7->setGeometry(QRect(80, 147, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_7->sizePolicy().hasHeightForWidth());
        LedV1_7->setSizePolicy(sizePolicy);
        pushButton_27 = new QCAPushButton(slitunittranslation);
        pushButton_27->setObjectName(QStringLiteral("pushButton_27"));
        pushButton_27->setGeometry(QRect(300, 567, 81, 22));
        pushButton_27->setLayoutDirection(Qt::LeftToRight);
        pushButton_27->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_14 = new QCALabel(slitunittranslation);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(160, 17, 111, 16));
        label_11 = new QCALabel(slitunittranslation);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(140, 37, 161, 16));
        layoutWidget_6 = new QWidget(slitunittranslation);
        layoutWidget_6->setObjectName(QStringLiteral("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(130, 187, 168, 24));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_29 = new QCAPushButton(layoutWidget_6);
        pushButton_29->setObjectName(QStringLiteral("pushButton_29"));

        horizontalLayout_7->addWidget(pushButton_29);

        pushButton_30 = new QCAPushButton(layoutWidget_6);
        pushButton_30->setObjectName(QStringLiteral("pushButton_30"));

        horizontalLayout_7->addWidget(pushButton_30);

        pushButton_26 = new QCAPushButton(slitunittranslation);
        pushButton_26->setObjectName(QStringLiteral("pushButton_26"));
        pushButton_26->setGeometry(QRect(430, 357, 51, 22));
        pushButton_17 = new QCAPushButton(slitunittranslation);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(218, 110, 80, 22));
        pushButton_20 = new QCAPushButton(slitunittranslation);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(370, 357, 51, 22));
        LedV1_6 = new QCALed(slitunittranslation);
        LedV1_6->setObjectName(QStringLiteral("LedV1_6"));
        LedV1_6->setGeometry(QRect(80, 187, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_6->sizePolicy().hasHeightForWidth());
        LedV1_6->setSizePolicy(sizePolicy);
        pushButton_28 = new QCAPushButton(slitunittranslation);
        pushButton_28->setObjectName(QStringLiteral("pushButton_28"));
        pushButton_28->setGeometry(QRect(40, 567, 81, 22));
        pushButton_28->setLayoutDirection(Qt::LeftToRight);
        pushButton_24 = new QCAPushButton(slitunittranslation);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(430, 397, 51, 22));
        layoutWidget_5 = new QWidget(slitunittranslation);
        layoutWidget_5->setObjectName(QStringLiteral("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(130, 227, 168, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QCAPushButton(layoutWidget_5);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));

        horizontalLayout_6->addWidget(pushButton_22);

        pushButton_23 = new QCAPushButton(layoutWidget_5);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));

        horizontalLayout_6->addWidget(pushButton_23);

        label = new QCALabel(slitunittranslation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 157, 59, 14));
        pushButton_25 = new QCAPushButton(slitunittranslation);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(130, 110, 80, 22));
        label_15 = new QLabel(slitunittranslation);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(180, 547, 59, 14));
        label_15->setLayoutDirection(Qt::LeftToRight);
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QCALabel(slitunittranslation);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(50, 547, 59, 14));
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        pushButton_21 = new QCAPushButton(slitunittranslation);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(370, 397, 51, 22));
        label_9 = new QCALabel(slitunittranslation);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 110, 41, 16));
        step2saxis = new QCAAxis(slitunittranslation);
        step2saxis->setObjectName(QStringLiteral("step2saxis"));
        step2saxis->setGeometry(QRect(10, 390, 350, 27));
        step2saxis->setMinimumSize(QSize(100, 10));
        speed2axis = new QCAAxis(slitunittranslation);
        speed2axis->setObjectName(QStringLiteral("speed2axis"));
        speed2axis->setGeometry(QRect(10, 360, 350, 27));
        speed2axis->setMinimumSize(QSize(100, 10));
        po2saxis = new QCAAxis(slitunittranslation);
        po2saxis->setObjectName(QStringLiteral("po2saxis"));
        po2saxis->setGeometry(QRect(10, 460, 350, 27));
        po2saxis->setMinimumSize(QSize(100, 10));
        goto2axis = new QCAAxis(slitunittranslation);
        goto2axis->setObjectName(QStringLiteral("goto2axis"));
        goto2axis->setGeometry(QRect(10, 310, 350, 27));
        goto2axis->setMinimumSize(QSize(100, 10));

        retranslateUi(slitunittranslation);

        QMetaObject::connectSlotsByName(slitunittranslation);
    } // setupUi

    void retranslateUi(QWidget *slitunittranslation)
    {
        slitunittranslation->setWindowTitle(QApplication::translate("slitunittranslation", "Form", 0));
        LedV1_5->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_getn.B.", 0)));
        LedV1_8->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_getn.E.", 0)));
        pushButton_18->setText(QApplication::translate("slitunittranslation", "Goto", 0));
        pushButton_18->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_GON", 0)));
        pushButton_19->setText(QApplication::translate("slitunittranslation", "Save as", 0));
        pushButton_19->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_SAVEN", 0)));
        pushButton_16->setText(QApplication::translate("slitunittranslation", "Save all as startup", 0));
        pushButton_16->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_AKTION", 0)));
        LedV1_7->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_getn.C.", 0)));
        pushButton_27->setText(QApplication::translate("slitunittranslation", "STOP", 0));
        pushButton_27->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_AKTION", 0)));
        label_14->setText(QApplication::translate("slitunittranslation", "TextLabel", 0));
        label_14->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:MonoName", 0)));
        label_11->setText(QApplication::translate("slitunittranslation", "TextLabel", 0));
        label_11->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_Name", 0)));
        pushButton_29->setText(QApplication::translate("slitunittranslation", "Goto", 0));
        pushButton_29->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_GON", 0)));
        pushButton_30->setText(QApplication::translate("slitunittranslation", "Save as", 0));
        pushButton_30->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_SAVEN", 0)));
        pushButton_26->setText(QApplication::translate("slitunittranslation", "Out", 0));
        pushButton_26->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_DOSTEP", 0)));
        pushButton_17->setText(QApplication::translate("slitunittranslation", "Save as", 0));
        pushButton_17->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_SAVEN", 0)));
        pushButton_20->setText(QApplication::translate("slitunittranslation", "In", 0));
        pushButton_20->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_DOSTEP", 0)));
        LedV1_6->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_getn.D.", 0)));
        pushButton_28->setText(QApplication::translate("slitunittranslation", "DoRef", 0));
        pushButton_28->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_AKTION", 0)));
        pushButton_24->setText(QApplication::translate("slitunittranslation", "Out", 0));
        pushButton_24->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_AKTION", 0)));
        pushButton_22->setText(QApplication::translate("slitunittranslation", "Goto", 0));
        pushButton_22->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_GON", 0)));
        pushButton_23->setText(QApplication::translate("slitunittranslation", "Save as", 0));
        pushButton_23->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_SAVEN", 0)));
        label->setText(QApplication::translate("slitunittranslation", "close", 0));
        label->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_GETN.TWST", 0)));
        pushButton_25->setText(QApplication::translate("slitunittranslation", "Goto", 0));
        pushButton_25->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_GON", 0)));
        label_15->setText(QApplication::translate("slitunittranslation", "Pinhole", 0));
        label_12->setText(QApplication::translate("slitunittranslation", "Hard (H)", 0));
        label_12->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_REF_STAT", 0)));
        pushButton_21->setText(QApplication::translate("slitunittranslation", "In", 0));
        pushButton_21->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_AKTION", 0)));
        label_9->setText(QApplication::translate("slitunittranslation", "open", 0));
        label_9->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_2_GETN.ONST", 0)));
        step2saxis->setProperty("description", QVariant(QApplication::translate("slitunittranslation", "Rel.Steps", 0)));
        step2saxis->setProperty("pvReadback", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_SETSTEP", 0)));
        step2saxis->setProperty("units", QVariant(QApplication::translate("slitunittranslation", "um", 0)));
        step2saxis->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_STEP", 0)));
        speed2axis->setProperty("description", QVariant(QApplication::translate("slitunittranslation", "jogSpeed", 0)));
        speed2axis->setProperty("pvReadback", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_SETJOGSPEED", 0)));
        speed2axis->setProperty("units", QVariant(QApplication::translate("slitunittranslation", "um", "mm/s")));
        speed2axis->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_JOGSPEED", 0)));
        po2saxis->setProperty("description", QVariant(QApplication::translate("slitunittranslation", "setpos", 0)));
        po2saxis->setProperty("pvReadback", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_Load", 0)));
        po2saxis->setProperty("units", QVariant(QApplication::translate("slitunittranslation", "mm/s", 0)));
        po2saxis->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_Load", 0)));
        goto2axis->setProperty("description", QVariant(QApplication::translate("slitunittranslation", "Goto", 0)));
        goto2axis->setProperty("pvReadback", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_SET", 0)));
        goto2axis->setProperty("units", QVariant(QApplication::translate("slitunittranslation", "um", 0)));
        goto2axis->setProperty("pv", QVariant(QApplication::translate("slitunittranslation", "u411pgm1:PH_0_GET", 0)));
    } // retranslateUi

};

namespace Ui {
    class slitunittranslation: public Ui_slitunittranslation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLITUNITTRANSLATION_H
