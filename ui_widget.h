/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *Tetris;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->setEnabled(true);
        Widget->resize(1600, 900);
        Widget->setMinimumSize(QSize(1600, 900));
        Widget->setMaximumSize(QSize(1600, 900));
        Tetris = new QPushButton(Widget);
        Tetris->setObjectName(QString::fromUtf8("Tetris"));
        Tetris->setGeometry(QRect(80, 760, 201, 61));
        Tetris->setStyleSheet(QString::fromUtf8("font: 75 16pt \"Agency FB\";"));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Tetris->setText(QCoreApplication::translate("Widget", "\344\277\204\347\275\227\346\226\257\346\226\271\345\235\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
