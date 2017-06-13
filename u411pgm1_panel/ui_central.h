/********************************************************************************
** Form generated from reading UI file 'central.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRAL_H
#define UI_CENTRAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Central
{
public:
    QTextEdit *textEdit;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *spacerItem;
    QPushButton *clearButton;

    void setupUi(QWidget *Central)
    {
        if (Central->objectName().isEmpty())
            Central->setObjectName(QStringLiteral("Central"));
        Central->resize(739, 234);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Central->sizePolicy().hasHeightForWidth());
        Central->setSizePolicy(sizePolicy);
        textEdit = new QTextEdit(Central);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(16, 10, 711, 192));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(8);
        textEdit->setFont(font);
        textEdit->setLayoutDirection(Qt::LeftToRight);
        textEdit->setLineWidth(1);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit->setUndoRedoEnabled(false);
        layoutWidget = new QWidget(Central);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 200, 706, 23));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(618, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(spacerItem);

        clearButton = new QPushButton(layoutWidget);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(clearButton->sizePolicy().hasHeightForWidth());
        clearButton->setSizePolicy(sizePolicy2);
        clearButton->setMinimumSize(QSize(0, 20));
        clearButton->setFont(font);

        horizontalLayout->addWidget(clearButton);


        retranslateUi(Central);

        QMetaObject::connectSlotsByName(Central);
    } // setupUi

    void retranslateUi(QWidget *Central)
    {
        Central->setWindowTitle(QApplication::translate("Central", "Form", 0));
        clearButton->setText(QApplication::translate("Central", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class Central: public Ui_Central {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRAL_H
