/********************************************************************************
** Form generated from reading UI file 'calculation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATION_H
#define UI_CALCULATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculation
{
public:
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QTextEdit *textEdit;

    void setupUi(QDialog *calculation)
    {
        if (calculation->objectName().isEmpty())
            calculation->setObjectName(QStringLiteral("calculation"));
        calculation->resize(400, 166);
        label = new QLabel(calculation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 20, 231, 23));
        buttonBox = new QDialogButtonBox(calculation);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 110, 187, 39));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        widget = new QWidget(calculation);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 60, 335, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        horizontalLayout->addWidget(textEdit);


        retranslateUi(calculation);

        QMetaObject::connectSlotsByName(calculation);
    } // setupUi

    void retranslateUi(QDialog *calculation)
    {
        calculation->setWindowTitle(QApplication::translate("calculation", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("calculation", "          \320\227\320\260\321\200\320\260\320\261\320\276\321\202\320\275\320\260\321\217 \320\277\320\273\320\260\321\202\320\260", Q_NULLPTR));
        label_2->setText(QApplication::translate("calculation", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calculation: public Ui_calculation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATION_H
