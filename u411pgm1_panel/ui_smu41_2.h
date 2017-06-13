/********************************************************************************
** Form generated from reading UI file 'smu41_2.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMU41_2_H
#define UI_SMU41_2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcaled.h"

QT_BEGIN_NAMESPACE

class Ui_smu41_2
{
public:
    QGroupBox *groupBox_3;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QCALed *LedV1;
    QCALed *LedV1_2;
    QCALed *LedV1_3;
    QLabel *label_5;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label;
    QCALed *LedV1_4;

    void setupUi(QWidget *smu41_2)
    {
        if (smu41_2->objectName().isEmpty())
            smu41_2->setObjectName(QStringLiteral("smu41_2"));
        smu41_2->resize(625, 571);
        groupBox_3 = new QGroupBox(smu41_2);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(140, 70, 120, 371));
        graphicsView = new QGraphicsView(groupBox_3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(30, 40, 61, 61));
        graphicsView->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        graphicsView_2 = new QGraphicsView(groupBox_3);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(30, 140, 61, 61));
        graphicsView_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        graphicsView_3 = new QGraphicsView(groupBox_3);
        graphicsView_3->setObjectName(QStringLiteral("graphicsView_3"));
        graphicsView_3->setGeometry(QRect(30, 250, 61, 61));
        graphicsView_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 0, 0);"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 340, 59, 14));
        groupBox_2 = new QGroupBox(smu41_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 70, 120, 371));
        LedV1 = new QCALed(groupBox_2);
        LedV1->setObjectName(QStringLiteral("LedV1"));
        LedV1->setGeometry(QRect(50, 60, 21, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(LedV1->sizePolicy().hasHeightForWidth());
        LedV1->setSizePolicy(sizePolicy);
        LedV1_2 = new QCALed(groupBox_2);
        LedV1_2->setObjectName(QStringLiteral("LedV1_2"));
        LedV1_2->setGeometry(QRect(50, 150, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_2->sizePolicy().hasHeightForWidth());
        LedV1_2->setSizePolicy(sizePolicy);
        LedV1_3 = new QCALed(groupBox_2);
        LedV1_3->setObjectName(QStringLiteral("LedV1_3"));
        LedV1_3->setGeometry(QRect(50, 270, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_3->sizePolicy().hasHeightForWidth());
        LedV1_3->setSizePolicy(sizePolicy);
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 340, 59, 14));
        textEdit = new QTextEdit(smu41_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 470, 161, 61));
        pushButton = new QPushButton(smu41_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 220, 91, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 127);"));
        label_2 = new QLabel(smu41_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 230, 59, 14));
        label_3 = new QLabel(smu41_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 500, 59, 14));
        groupBox = new QGroupBox(smu41_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(460, 70, 120, 371));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 340, 61, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(30, 50, 59, 14));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 150, 59, 14));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(30, 260, 59, 14));
        label = new QLabel(smu41_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(310, 20, 61, 16));
        LedV1_4 = new QCALed(smu41_2);
        LedV1_4->setObjectName(QStringLiteral("LedV1_4"));
        LedV1_4->setGeometry(QRect(270, 530, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_4->sizePolicy().hasHeightForWidth());
        LedV1_4->setSizePolicy(sizePolicy);

        retranslateUi(smu41_2);

        QMetaObject::connectSlotsByName(smu41_2);
    } // setupUi

    void retranslateUi(QWidget *smu41_2)
    {
        smu41_2->setWindowTitle(QApplication::translate("smu41_2", "Form", 0));
        groupBox_3->setTitle(QString());
        label_4->setText(QApplication::translate("smu41_2", "get light", 0));
        groupBox_2->setTitle(QString());
        LedV1->setProperty("pv", QVariant(QApplication::translate("smu41_2", "SMU2Y02U106L:PosA", 0)));
        LedV1_2->setProperty("pv", QVariant(QApplication::translate("smu41_2", "SMU2Y02U106L:PosB", 0)));
        LedV1_3->setProperty("pv", QVariant(QApplication::translate("smu41_2", "SMU2Y02U106L:PosC", 0)));
        label_5->setText(QApplication::translate("smu41_2", "status", 0));
        textEdit->setHtml(QApplication::translate("smu41_2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please close beamshutter before moving SMU</p></body></html>", 0));
        pushButton->setText(QApplication::translate("smu41_2", "SMU/experts", 0));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("smu41_2", "Ready", 0));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("smu41_2", "beamline", 0));
        label_7->setText(QApplication::translate("smu41_2", "PEAXIS", 0));
        label_8->setText(QApplication::translate("smu41_2", "MIDDLE", 0));
        label_9->setText(QApplication::translate("smu41_2", "XM", 0));
        label->setText(QApplication::translate("smu41_2", "SMU41_2", 0));
        LedV1_4->setProperty("pv", QVariant(QApplication::translate("smu41_2", "SMU41_2:ExecSens", 0)));
    } // retranslateUi

};

namespace Ui {
    class smu41_2: public Ui_smu41_2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMU41_2_H
