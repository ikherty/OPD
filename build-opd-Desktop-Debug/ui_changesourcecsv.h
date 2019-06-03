/********************************************************************************
** Form generated from reading UI file 'changesourcecsv.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGESOURCECSV_H
#define UI_CHANGESOURCECSV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeSourceCSV
{
public:
    QPushButton *pushButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QDialog *changeSourceCSV)
    {
        if (changeSourceCSV->objectName().isEmpty())
            changeSourceCSV->setObjectName(QStringLiteral("changeSourceCSV"));
        changeSourceCSV->resize(290, 119);
        pushButton = new QPushButton(changeSourceCSV);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(100, 70, 84, 32));
        QFont font;
        font.setPointSize(14);
        pushButton->setFont(font);
        widget = new QWidget(changeSourceCSV);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 251, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setPointSize(14);
        font1.setItalic(true);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout->addWidget(lineEdit);


        retranslateUi(changeSourceCSV);

        QMetaObject::connectSlotsByName(changeSourceCSV);
    } // setupUi

    void retranslateUi(QDialog *changeSourceCSV)
    {
        changeSourceCSV->setWindowTitle(QApplication::translate("changeSourceCSV", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("changeSourceCSV", "\320\236\320\232", Q_NULLPTR));
        label->setText(QApplication::translate("changeSourceCSV", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\203\321\202\321\214:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changeSourceCSV: public Ui_changeSourceCSV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESOURCECSV_H
