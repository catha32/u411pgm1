/********************************************************************************
** Form generated from reading UI file 'qcaaxisbase.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCAAXISBASE_H
#define UI_QCAAXISBASE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcacounter.h"
#include "qcalcdnumber.h"

QT_BEGIN_NAMESPACE

class Ui_QCAAxisBase
{
public:
    QVBoxLayout *vboxLayout;
    QFrame *axisFrame;
    QHBoxLayout *hboxLayout;
    QLabel *axisNameLabel;
    QSpacerItem *spacerItem;
    QCALCDNumber *axisReadback;
    QLabel *axisUnitsLabel;
    QSpacerItem *spacerItem1;
    QCACounter *axisCounter;

    void setupUi(QWidget *QCAAxisBase)
    {
        if (QCAAxisBase->objectName().isEmpty())
            QCAAxisBase->setObjectName(QStringLiteral("QCAAxisBase"));
        QCAAxisBase->resize(348, 32);
        QCAAxisBase->setLayoutDirection(Qt::LeftToRight);
        vboxLayout = new QVBoxLayout(QCAAxisBase);
        vboxLayout->setSpacing(0);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        axisFrame = new QFrame(QCAAxisBase);
        axisFrame->setObjectName(QStringLiteral("axisFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(axisFrame->sizePolicy().hasHeightForWidth());
        axisFrame->setSizePolicy(sizePolicy);
        axisFrame->setMaximumSize(QSize(16777215, 32));
        axisFrame->setFrameShape(QFrame::StyledPanel);
        axisFrame->setFrameShadow(QFrame::Raised);
        hboxLayout = new QHBoxLayout(axisFrame);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        axisNameLabel = new QLabel(axisFrame);
        axisNameLabel->setObjectName(QStringLiteral("axisNameLabel"));

        hboxLayout->addWidget(axisNameLabel);

        spacerItem = new QSpacerItem(16, 28, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        axisReadback = new QCALCDNumber(axisFrame);
        axisReadback->setObjectName(QStringLiteral("axisReadback"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(axisReadback->sizePolicy().hasHeightForWidth());
        axisReadback->setSizePolicy(sizePolicy1);
        axisReadback->setMinimumSize(QSize(80, 28));
        axisReadback->setFrameShape(QFrame::NoFrame);
        axisReadback->setSmallDecimalPoint(false);
        axisReadback->setDigitCount(10);
        axisReadback->setSegmentStyle(QLCDNumber::Flat);
        axisReadback->setProperty("value", QVariant(10.896));
        axisReadback->setBlankOnInvalid(true);

        hboxLayout->addWidget(axisReadback);

        axisUnitsLabel = new QLabel(axisFrame);
        axisUnitsLabel->setObjectName(QStringLiteral("axisUnitsLabel"));

        hboxLayout->addWidget(axisUnitsLabel);

        spacerItem1 = new QSpacerItem(16, 28, QSizePolicy::Preferred, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);

        axisCounter = new QCACounter(axisFrame);
        axisCounter->setObjectName(QStringLiteral("axisCounter"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(axisCounter->sizePolicy().hasHeightForWidth());
        axisCounter->setSizePolicy(sizePolicy2);
        axisCounter->setMinimumSize(QSize(120, 25));
        axisCounter->setLayoutDirection(Qt::LeftToRight);
        axisCounter->setNumButtons(1);
        axisCounter->setHasToolTip(true);

        hboxLayout->addWidget(axisCounter);


        vboxLayout->addWidget(axisFrame);


        retranslateUi(QCAAxisBase);

        QMetaObject::connectSlotsByName(QCAAxisBase);
    } // setupUi

    void retranslateUi(QWidget *QCAAxisBase)
    {
        QCAAxisBase->setWindowTitle(QApplication::translate("QCAAxisBase", "Form", 0));
        axisNameLabel->setText(QApplication::translate("QCAAxisBase", "Energy", 0));
        axisUnitsLabel->setText(QApplication::translate("QCAAxisBase", "eV", 0));
    } // retranslateUi

};

namespace Ui {
    class QCAAxisBase: public Ui_QCAAxisBase {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCAAXISBASE_H
