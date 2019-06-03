/********************************************************************************
** Form generated from reading UI file 'winemployees.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINEMPLOYEES_H
#define UI_WINEMPLOYEES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winEmployees
{
public:
    QAction *action;
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *winEmployees)
    {
        if (winEmployees->objectName().isEmpty())
            winEmployees->setObjectName(QStringLiteral("winEmployees"));
        winEmployees->resize(639, 437);
        action = new QAction(winEmployees);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/resourses/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        centralwidget = new QWidget(winEmployees);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 0, 617, 381));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);


        verticalLayout->addLayout(horizontalLayout);

        winEmployees->setCentralWidget(centralwidget);
        menubar = new QMenuBar(winEmployees);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 639, 28));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        winEmployees->setMenuBar(menubar);
        statusbar = new QStatusBar(winEmployees);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        winEmployees->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(action);

        retranslateUi(winEmployees);

        QMetaObject::connectSlotsByName(winEmployees);
    } // setupUi

    void retranslateUi(QMainWindow *winEmployees)
    {
        winEmployees->setWindowTitle(QApplication::translate("winEmployees", "MainWindow", Q_NULLPTR));
        action->setText(QApplication::translate("winEmployees", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("winEmployees", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", Q_NULLPTR));
        pushButton->setText(QApplication::translate("winEmployees", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\216 \320\276 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\265", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("winEmployees", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", Q_NULLPTR));
        menu->setTitle(QApplication::translate("winEmployees", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class winEmployees: public Ui_winEmployees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINEMPLOYEES_H
