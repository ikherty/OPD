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
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changeSourceCSV
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *userPath;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *changeSourceCSV)
    {
        if (changeSourceCSV->objectName().isEmpty())
            changeSourceCSV->setObjectName(QStringLiteral("changeSourceCSV"));
        changeSourceCSV->resize(290, 119);
        layoutWidget = new QWidget(changeSourceCSV);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 251, 32));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(14);
        font.setItalic(true);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        userPath = new QLineEdit(layoutWidget);
        userPath->setObjectName(QStringLiteral("userPath"));

        horizontalLayout->addWidget(userPath);

        buttonBox = new QDialogButtonBox(changeSourceCSV);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(60, 70, 174, 32));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(changeSourceCSV);

        QMetaObject::connectSlotsByName(changeSourceCSV);
    } // setupUi

    void retranslateUi(QDialog *changeSourceCSV)
    {
        changeSourceCSV->setWindowTitle(QApplication::translate("changeSourceCSV", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("changeSourceCSV", "\320\243\320\272\320\260\320\267\320\260\321\202\321\214 \320\277\321\203\321\202\321\214:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changeSourceCSV: public Ui_changeSourceCSV {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGESOURCECSV_H
