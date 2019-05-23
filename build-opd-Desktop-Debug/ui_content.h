/********************************************************************************
** Form generated from reading UI file 'content.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENT_H
#define UI_CONTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_content
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;

    void setupUi(QDialog *content)
    {
        if (content->objectName().isEmpty())
            content->setObjectName(QStringLiteral("content"));
        content->resize(400, 300);
        pushButton = new QPushButton(content);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 80, 211, 39));
        pushButton_2 = new QPushButton(content);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(130, 130, 105, 39));
        pushButton_3 = new QPushButton(content);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 180, 105, 39));
        pushButton_4 = new QPushButton(content);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(130, 230, 105, 39));

        retranslateUi(content);

        QMetaObject::connectSlotsByName(content);
    } // setupUi

    void retranslateUi(QDialog *content)
    {
        content->setWindowTitle(QApplication::translate("content", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("content", "\320\241\320\277\320\270\321\201\320\276\320\272 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("content", "PushButton", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("content", "PushButton", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("content", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class content: public Ui_content {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENT_H
