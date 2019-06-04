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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winEmployees
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QAction *action_8;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *toolBar;

    void setupUi(QMainWindow *winEmployees)
    {
        if (winEmployees->objectName().isEmpty())
            winEmployees->setObjectName(QStringLiteral("winEmployees"));
        winEmployees->resize(638, 440);
        action = new QAction(winEmployees);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/resourses/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon);
        action_2 = new QAction(winEmployees);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/resourses/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon1);
        action_3 = new QAction(winEmployees);
        action_3->setObjectName(QStringLiteral("action_3"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/resourses/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_3->setIcon(icon2);
        action_4 = new QAction(winEmployees);
        action_4->setObjectName(QStringLiteral("action_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/resourses/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon3);
        action_5 = new QAction(winEmployees);
        action_5->setObjectName(QStringLiteral("action_5"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/resourses/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_5->setIcon(icon4);
        action_6 = new QAction(winEmployees);
        action_6->setObjectName(QStringLiteral("action_6"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/rec/resourses/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon5);
        action_7 = new QAction(winEmployees);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/rec/resourses/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon6);
        action_8 = new QAction(winEmployees);
        action_8->setObjectName(QStringLiteral("action_8"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/rec/resourses/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_8->setIcon(icon7);
        centralwidget = new QWidget(winEmployees);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 0, 621, 371));
        winEmployees->setCentralWidget(centralwidget);
        menubar = new QMenuBar(winEmployees);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 638, 28));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menubar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        winEmployees->setMenuBar(menubar);
        toolBar = new QToolBar(winEmployees);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        winEmployees->addToolBar(Qt::TopToolBarArea, toolBar);
        winEmployees->insertToolBarBreak(toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(action_2);
        menu->addAction(action);
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_3->addAction(action_5);
        menu_3->addAction(action_6);
        menu_3->addAction(action_7);
        menu_3->addAction(action_8);
        toolBar->addAction(action_2);
        toolBar->addAction(action_3);
        toolBar->addAction(action_4);
        toolBar->addAction(action_5);
        toolBar->addAction(action_6);
        toolBar->addAction(action_7);
        toolBar->addAction(action_8);
        toolBar->addAction(action);

        retranslateUi(winEmployees);

        QMetaObject::connectSlotsByName(winEmployees);
    } // setupUi

    void retranslateUi(QMainWindow *winEmployees)
    {
        winEmployees->setWindowTitle(QApplication::translate("winEmployees", "MainWindow", Q_NULLPTR));
        action->setText(QApplication::translate("winEmployees", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        action_2->setText(QApplication::translate("winEmployees", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\261\320\260\320\267\321\203 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262", Q_NULLPTR));
        action_3->setText(QApplication::translate("winEmployees", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", Q_NULLPTR));
        action_4->setText(QApplication::translate("winEmployees", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", Q_NULLPTR));
        action_5->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\227\320\237", Q_NULLPTR));
        action_6->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\321\200\320\265\320\274\320\270\321\216", Q_NULLPTR));
        action_7->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\261\320\276\320\273\321\214\320\275\320\270\321\207\320\275\321\213\320\265 \320\262\321\213\320\277\320\273\320\260\321\202\321\213", Q_NULLPTR));
        action_8->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\276\321\202\320\277\321\203\321\201\320\272\320\275\321\213\320\265 \320\262\321\213\320\277\320\273\320\260\321\202\321\213", Q_NULLPTR));
        menu->setTitle(QApplication::translate("winEmployees", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("winEmployees", "\320\237\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("winEmployees", "\320\241\320\265\321\200\320\262\320\270\321\201", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("winEmployees", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class winEmployees: public Ui_winEmployees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINEMPLOYEES_H
