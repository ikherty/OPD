/********************************************************************************
** Form generated from reading UI file 'pathtofile.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PATHTOFILE_H
#define UI_PATHTOFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_pathToFile
{
public:
    QGroupBox *groupBox;
    QLineEdit *path;
    QPushButton *pushButton;

    void setupUi(QDialog *pathToFile)
    {
        if (pathToFile->objectName().isEmpty())
            pathToFile->setObjectName(QStringLiteral("pathToFile"));
        pathToFile->resize(405, 144);
        groupBox = new QGroupBox(pathToFile);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 10, 341, 121));
        path = new QLineEdit(groupBox);
        path->setObjectName(QStringLiteral("path"));
        path->setGeometry(QRect(50, 30, 241, 37));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 70, 71, 39));

        retranslateUi(pathToFile);

        QMetaObject::connectSlotsByName(pathToFile);
    } // setupUi

    void retranslateUi(QDialog *pathToFile)
    {
        pathToFile->setWindowTitle(QApplication::translate("pathToFile", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("pathToFile", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\321\203\321\202\321\214 \320\272 \321\204\320\260\320\271\320\273\321\203", Q_NULLPTR));
        pushButton->setText(QApplication::translate("pathToFile", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class pathToFile: public Ui_pathToFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PATHTOFILE_H
