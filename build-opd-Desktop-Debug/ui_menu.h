/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *image;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(466, 173);
        widget = new QWidget(menu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 20, 403, 130));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Noto Nastaliq Urdu"));
        font.setPointSize(12);
        label->setFont(font);

        verticalLayout->addWidget(label);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Norasi"));
        font1.setPointSize(10);
        font1.setItalic(true);
        label_2->setFont(font1);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        image = new QLabel(widget);
        image->setObjectName(QStringLiteral("image"));

        horizontalLayout->addWidget(image);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("menu", "\320\230\320\275\321\202\320\265\321\200\320\275\320\265\321\202 \320\277\321\200\320\276\320\262\320\260\320\271\320\264\320\265\321\200 SwiftNet", Q_NULLPTR));
        pushButton->setText(QApplication::translate("menu", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        label_2->setText(QApplication::translate("menu", "\320\224\320\273\321\217 \320\275\320\260\321\207\320\260\320\273\320\260 \321\200\320\260\320\261\320\276\321\202\321\213 \320\262\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\204\320\260\320\271\320\273", Q_NULLPTR));
        image->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
