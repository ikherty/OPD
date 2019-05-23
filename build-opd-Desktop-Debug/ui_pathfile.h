/********************************************************************************
** Form generated from reading UI file 'pathfile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHFILE_H
#define UI_PATHFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pathFile
{
public:
    QPushButton *pushButton;
    QLineEdit *userPath;
    QLabel *label;

    void setupUi(QDialog *pathFile)
    {
        if (pathFile->objectName().isEmpty())
            pathFile->setObjectName(QStringLiteral("pathFile"));
        pathFile->resize(372, 124);
        pushButton = new QPushButton(pathFile);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 70, 81, 39));
        userPath = new QLineEdit(pathFile);
        userPath->setObjectName(QStringLiteral("userPath"));
        userPath->setGeometry(QRect(120, 20, 231, 37));
        label = new QLabel(pathFile);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 121, 37));

        retranslateUi(pathFile);

        QMetaObject::connectSlotsByName(pathFile);
    } // setupUi

    void retranslateUi(QDialog *pathFile)
    {
        pathFile->setWindowTitle(QApplication::translate("pathFile", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("pathFile", "\320\236\320\232", Q_NULLPTR));
        label->setText(QApplication::translate("pathFile", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\321\203\321\202\321\214:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pathFile: public Ui_pathFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHFILE_H
