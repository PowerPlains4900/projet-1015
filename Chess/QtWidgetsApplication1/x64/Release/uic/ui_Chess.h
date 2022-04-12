/********************************************************************************
** Form generated from reading UI file 'Chess.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESS_H
#define UI_CHESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChessClass
{
public:

    void setupUi(QWidget *ChessClass)
    {
        if (ChessClass->objectName().isEmpty())
            ChessClass->setObjectName(QString::fromUtf8("ChessClass"));
        ChessClass->resize(600, 400);

        retranslateUi(ChessClass);

        QMetaObject::connectSlotsByName(ChessClass);
    } // setupUi

    void retranslateUi(QWidget *ChessClass)
    {
        ChessClass->setWindowTitle(QCoreApplication::translate("ChessClass", "Chess", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChessClass: public Ui_ChessClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESS_H
