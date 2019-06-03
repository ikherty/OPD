/********************************************************************************
** Form generated from reading UI file 'listemployees.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTEMPLOYEES_H
#define UI_LISTEMPLOYEES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_listEmployees
{
public:

    void setupUi(QDialog *listEmployees)
    {
        if (listEmployees->objectName().isEmpty())
            listEmployees->setObjectName(QStringLiteral("listEmployees"));
        listEmployees->resize(400, 300);

        retranslateUi(listEmployees);

        QMetaObject::connectSlotsByName(listEmployees);
    } // setupUi

    void retranslateUi(QDialog *listEmployees)
    {
        listEmployees->setWindowTitle(QApplication::translate("listEmployees", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class listEmployees: public Ui_listEmployees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTEMPLOYEES_H
