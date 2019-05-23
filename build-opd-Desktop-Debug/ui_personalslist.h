/********************************************************************************
** Form generated from reading UI file 'personalslist.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONALSLIST_H
#define UI_PERSONALSLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_personalsList
{
public:

    void setupUi(QDialog *personalsList)
    {
        if (personalsList->objectName().isEmpty())
            personalsList->setObjectName(QStringLiteral("personalsList"));
        personalsList->resize(400, 300);

        retranslateUi(personalsList);

        QMetaObject::connectSlotsByName(personalsList);
    } // setupUi

    void retranslateUi(QDialog *personalsList)
    {
        personalsList->setWindowTitle(QApplication::translate("personalsList", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class personalsList: public Ui_personalsList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONALSLIST_H
