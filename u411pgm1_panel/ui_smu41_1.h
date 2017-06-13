/********************************************************************************
** Form generated from reading UI file 'smu41_1.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SMU41_1_H
#define UI_SMU41_1_H

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

class Ui_smu41_1
{
public:
    QGroupBox *groupBox_2;
    QCALed *LedV1;
    QCALed *LedV1_2;
    QCALed *LedV1_3;
    QLabel *label_5;
    QGroupBox *groupBox_3;
    QGraphicsView *graphicsView;
    QGraphicsView *graphicsView_2;
    QGraphicsView *graphicsView_3;
    QLabel *label_4;
    QPushButton *pushButton;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label;
    QCALed *LedV1_4;

    void setupUi(QWidget *smu41_1)
    {
        if (smu41_1->objectName().isEmpty())
            smu41_1->setObjectName(QStringLiteral("smu41_1"));
        smu41_1->resize(628, 570);
        groupBox_2 = new QGroupBox(smu41_1);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 60, 120, 371));
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
        groupBox_3 = new QGroupBox(smu41_1);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(140, 60, 120, 371));
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
        pushButton = new QPushButton(smu41_1);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 210, 91, 22));
        pushButton->setStyleSheet(QStringLiteral("background-color: rgb(0, 170, 127);"));
        label_3 = new QLabel(smu41_1);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 490, 59, 14));
        groupBox = new QGroupBox(smu41_1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(460, 60, 120, 371));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 340, 61, 16));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 50, 59, 14));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 150, 59, 14));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 260, 59, 14));
        label_2 = new QLabel(smu41_1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 220, 59, 14));
        textEdit = new QTextEdit(smu41_1);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 460, 161, 61));
        label = new QLabel(smu41_1);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 10, 61, 16));
        LedV1_4 = new QCALed(smu41_1);
        LedV1_4->setObjectName(QStringLiteral("LedV1_4"));
        LedV1_4->setGeometry(QRect(270, 520, 21, 21));
        sizePolicy.setHeightForWidth(LedV1_4->sizePolicy().hasHeightForWidth());
        LedV1_4->setSizePolicy(sizePolicy);

        retranslateUi(smu41_1);

        QMetaObject::connectSlotsByName(smu41_1);
    } // setupUi

    void retranslateUi(QWidget *smu41_1)
    {
        smu41_1->setWindowTitle(QApplication::translate("smu41_1", "Form", 0));
        groupBox_2->setTitle(QString());
        LedV1->setProperty("pv", QVariant(QApplication::translate("smu41_1", "SMU$(no)Y01U106L:PosA", 0)));
        LedV1_2->setProperty("pv", QVariant(QApplication::translate("smu41_1", "SMU1Y01U106L:PosB", 0)));
        LedV1_3->setProperty("pv", QVariant(QApplication::translate("smu41_1", "SMU1Y01U106L:PosC", 0)));
        label_5->setText(QApplication::translate("smu41_1", "status", 0));
        groupBox_3->setTitle(QString());
        label_4->setText(QApplication::translate("smu41_1", "get light", 0));
        pushButton->setText(QApplication::translate("smu41_1", "SMU/experts", 0));
        label_3->setText(QApplication::translate("smu41_1", "Ready", 0));
        groupBox->setTitle(QString());
        label_6->setText(QApplication::translate("smu41_1", "beamline", 0));
        label_7->setText(QApplication::translate("smu41_1", "IDa", 0));
        label_8->setText(QApplication::translate("smu41_1", "IDb", 0));
        label_9->setText(QApplication::translate("smu41_1", "IDc", 0));
        label_2->setText(QString());
        textEdit->setHtml(QApplication::translate("smu41_1", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Please close beamshutter before moving SMU</p></body></html>", 0));
        label->setText(QApplication::translate("smu41_1", "SMU41_1", 0));
        LedV1_4->setProperty("pv", QVariant(QApplication::translate("smu41_1", "SMU41_1:ExecSens", 0)));
    } // retranslateUi

};

namespace Ui {
    class smu41_1: public Ui_smu41_1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SMU41_1_H
