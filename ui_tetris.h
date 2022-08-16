/********************************************************************************
** Form generated from reading UI file 'tetris.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETRIS_H
#define UI_TETRIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tetris
{
public:

    void setupUi(QWidget *tetris)
    {
        if (tetris->objectName().isEmpty())
            tetris->setObjectName(QString::fromUtf8("tetris"));
        tetris->resize(439, 614);

        retranslateUi(tetris);

        QMetaObject::connectSlotsByName(tetris);
    } // setupUi

    void retranslateUi(QWidget *tetris)
    {
        tetris->setWindowTitle(QCoreApplication::translate("tetris", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tetris: public Ui_tetris {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETRIS_H
