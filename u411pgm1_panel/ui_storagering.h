/********************************************************************************
** Form generated from reading UI file 'storagering.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STORAGERING_H
#define UI_STORAGERING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "qcalabel.h"
#include "qcalcdnumber.h"

QT_BEGIN_NAMESPACE

class Ui_storagering
{
public:
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_8;
    QCALCDNumber *lcdNumber_2;
    QCALabel *label_10;
    QLabel *label_9;
    QCALCDNumber *lcdNumber_5;
    QCALabel *label_11;
    QGroupBox *groupBox;
    QGridLayout *_2;
    QCALabel *Label_4;
    QCALabel *Label_2;
    QCALabel *Label_3;

    void setupUi(QWidget *storagering)
    {
        if (storagering->objectName().isEmpty())
            storagering->setObjectName(QStringLiteral("storagering"));
        storagering->resize(368, 200);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(storagering->sizePolicy().hasHeightForWidth());
        storagering->setSizePolicy(sizePolicy);
        storagering->setMinimumSize(QSize(0, 0));
        groupBox_2 = new QGroupBox(storagering);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 100, 330, 89));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(3, 3, 3, 3);
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_8, 0, 0, 1, 1);

        lcdNumber_2 = new QCALCDNumber(groupBox_2);
        lcdNumber_2->setObjectName(QStringLiteral("lcdNumber_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lcdNumber_2->sizePolicy().hasHeightForWidth());
        lcdNumber_2->setSizePolicy(sizePolicy2);
        lcdNumber_2->setMinimumSize(QSize(140, 30));

        gridLayout->addWidget(lcdNumber_2, 0, 1, 1, 1);

        label_10 = new QCALabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_10, 0, 2, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy1.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy1);
        label_9->setMinimumSize(QSize(86, 0));

        gridLayout->addWidget(label_9, 1, 0, 1, 1);

        lcdNumber_5 = new QCALCDNumber(groupBox_2);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));
        sizePolicy2.setHeightForWidth(lcdNumber_5->sizePolicy().hasHeightForWidth());
        lcdNumber_5->setSizePolicy(sizePolicy2);
        lcdNumber_5->setMinimumSize(QSize(140, 24));
        lcdNumber_5->setDigitCount(7);

        gridLayout->addWidget(lcdNumber_5, 1, 1, 1, 1);

        label_11 = new QCALabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(30, 16777215));

        gridLayout->addWidget(label_11, 1, 2, 1, 1);

        groupBox = new QGroupBox(storagering);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 16, 330, 78));
        _2 = new QGridLayout(groupBox);
        _2->setObjectName(QStringLiteral("_2"));
        _2->setContentsMargins(3, 3, 3, 3);
        Label_4 = new QCALabel(groupBox);
        Label_4->setObjectName(QStringLiteral("Label_4"));
        sizePolicy1.setHeightForWidth(Label_4->sizePolicy().hasHeightForWidth());
        Label_4->setSizePolicy(sizePolicy1);
        Label_4->setMinimumSize(QSize(150, 0));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        Label_4->setFont(font);
        Label_4->setAutoFillBackground(true);
        Label_4->setFrameShape(QFrame::StyledPanel);
        Label_4->setFrameShadow(QFrame::Raised);
        Label_4->setLineWidth(1);
        Label_4->setMidLineWidth(0);
        Label_4->setAlignment(Qt::AlignCenter);
        Label_4->setIndent(-1);
        Label_4->setProperty("alarmSensitive", QVariant(true));

        _2->addWidget(Label_4, 0, 0, 1, 2);

        Label_2 = new QCALabel(groupBox);
        Label_2->setObjectName(QStringLiteral("Label_2"));
        sizePolicy1.setHeightForWidth(Label_2->sizePolicy().hasHeightForWidth());
        Label_2->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QStringLiteral("Sans Serif"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        Label_2->setFont(font1);
        Label_2->setAutoFillBackground(true);
        Label_2->setFrameShape(QFrame::StyledPanel);
        Label_2->setFrameShadow(QFrame::Raised);
        Label_2->setLineWidth(1);
        Label_2->setMidLineWidth(0);
        Label_2->setAlignment(Qt::AlignCenter);
        Label_2->setProperty("alarmSensitive", QVariant(true));

        _2->addWidget(Label_2, 1, 0, 1, 1);

        Label_3 = new QCALabel(groupBox);
        Label_3->setObjectName(QStringLiteral("Label_3"));
        sizePolicy1.setHeightForWidth(Label_3->sizePolicy().hasHeightForWidth());
        Label_3->setSizePolicy(sizePolicy1);
        Label_3->setFont(font1);
        Label_3->setAutoFillBackground(true);
        Label_3->setFrameShape(QFrame::StyledPanel);
        Label_3->setFrameShadow(QFrame::Raised);
        Label_3->setLineWidth(1);
        Label_3->setMidLineWidth(0);
        Label_3->setAlignment(Qt::AlignCenter);
        Label_3->setProperty("alarmSensitive", QVariant(true));

        _2->addWidget(Label_3, 1, 1, 1, 1);


        retranslateUi(storagering);

        QMetaObject::connectSlotsByName(storagering);
    } // setupUi

    void retranslateUi(QWidget *storagering)
    {
        storagering->setWindowTitle(QApplication::translate("storagering", "Form", 0));
        groupBox_2->setTitle(QApplication::translate("storagering", "Ring Parameter", 0));
        label_8->setText(QApplication::translate("storagering", "Beam current", 0));
        lcdNumber_2->setProperty("pv", QVariant(QApplication::translate("storagering", "MDIZ3T5G:current", 0)));
        label_10->setText(QApplication::translate("storagering", "mA", 0));
        label_9->setText(QApplication::translate("storagering", "Lifetime", 0));
        lcdNumber_5->setProperty("pv", QVariant(QApplication::translate("storagering", "MDIZ3T5G:lt50", 0)));
        label_11->setText(QApplication::translate("storagering", "h", 0));
        groupBox->setTitle(QApplication::translate("storagering", "Ring Operation", 0));
        Label_4->setProperty("pv", QVariant(QApplication::translate("storagering", "TOPUPCC:message", 0)));
        Label_2->setProperty("pv", QVariant(QApplication::translate("storagering", "FPATCC:mode", 0)));
        Label_3->setProperty("pv", QVariant(QApplication::translate("storagering", "OPTICC:mode", 0)));
    } // retranslateUi

};

namespace Ui {
    class storagering: public Ui_storagering {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STORAGERING_H
