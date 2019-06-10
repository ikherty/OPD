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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_winEmployees
{
public:
    QAction *quit;
    QAction *changeDataBase;
    QAction *addUser;
    QAction *removeUser;
    QAction *calculateSalary;
    QAction *calculatePremium;
    QAction *calculateHospitalPayments;
    QAction *calculateVacationPay;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *winEmployees)
    {
        if (winEmployees->objectName().isEmpty())
            winEmployees->setObjectName(QStringLiteral("winEmployees"));
        winEmployees->resize(736, 440);
        QIcon icon;
        icon.addFile(QStringLiteral(":/rec/resourses/11.png"), QSize(), QIcon::Normal, QIcon::Off);
        winEmployees->setWindowIcon(icon);
        quit = new QAction(winEmployees);
        quit->setObjectName(QStringLiteral("quit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/rec/resourses/2.png"), QSize(), QIcon::Normal, QIcon::Off);
        quit->setIcon(icon1);
        changeDataBase = new QAction(winEmployees);
        changeDataBase->setObjectName(QStringLiteral("changeDataBase"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/rec/resourses/1.png"), QSize(), QIcon::Normal, QIcon::Off);
        changeDataBase->setIcon(icon2);
        addUser = new QAction(winEmployees);
        addUser->setObjectName(QStringLiteral("addUser"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/rec/resourses/3.png"), QSize(), QIcon::Normal, QIcon::Off);
        addUser->setIcon(icon3);
        removeUser = new QAction(winEmployees);
        removeUser->setObjectName(QStringLiteral("removeUser"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/rec/resourses/4.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeUser->setIcon(icon4);
        calculateSalary = new QAction(winEmployees);
        calculateSalary->setObjectName(QStringLiteral("calculateSalary"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/rec/resourses/5.png"), QSize(), QIcon::Normal, QIcon::Off);
        calculateSalary->setIcon(icon5);
        calculatePremium = new QAction(winEmployees);
        calculatePremium->setObjectName(QStringLiteral("calculatePremium"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/rec/resourses/6.png"), QSize(), QIcon::Normal, QIcon::Off);
        calculatePremium->setIcon(icon6);
        calculateHospitalPayments = new QAction(winEmployees);
        calculateHospitalPayments->setObjectName(QStringLiteral("calculateHospitalPayments"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/rec/resourses/8.png"), QSize(), QIcon::Normal, QIcon::Off);
        calculateHospitalPayments->setIcon(icon7);
        calculateVacationPay = new QAction(winEmployees);
        calculateVacationPay->setObjectName(QStringLiteral("calculateVacationPay"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/rec/resourses/7.png"), QSize(), QIcon::Normal, QIcon::Off);
        calculateVacationPay->setIcon(icon8);
        centralwidget = new QWidget(winEmployees);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 150, 271, 191));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(180, 10, 256, 192));
        winEmployees->setCentralWidget(centralwidget);
        menubar = new QMenuBar(winEmployees);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 736, 35));
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
        statusBar = new QStatusBar(winEmployees);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        winEmployees->setStatusBar(statusBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menubar->addAction(menu_3->menuAction());
        menu->addAction(changeDataBase);
        menu->addAction(quit);
        menu_2->addAction(addUser);
        menu_2->addAction(removeUser);
        menu_3->addAction(calculateSalary);
        menu_3->addAction(calculatePremium);
        menu_3->addAction(calculateHospitalPayments);
        menu_3->addAction(calculateVacationPay);
        toolBar->addAction(changeDataBase);
        toolBar->addAction(addUser);
        toolBar->addAction(removeUser);
        toolBar->addAction(calculateSalary);
        toolBar->addAction(calculatePremium);
        toolBar->addAction(calculateHospitalPayments);
        toolBar->addAction(calculateVacationPay);
        toolBar->addAction(quit);

        retranslateUi(winEmployees);

        QMetaObject::connectSlotsByName(winEmployees);
    } // setupUi

    void retranslateUi(QMainWindow *winEmployees)
    {
        winEmployees->setWindowTitle(QApplication::translate("winEmployees", "\320\243\321\207\320\265\321\202 \320\272\320\260\320\264\321\200\320\276\320\262 SwiftNet", Q_NULLPTR));
        quit->setText(QApplication::translate("winEmployees", "\320\222\321\213\320\271\321\202\320\270 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", Q_NULLPTR));
        changeDataBase->setText(QApplication::translate("winEmployees", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \320\261\320\260\320\267\321\203 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\276\320\262", Q_NULLPTR));
        addUser->setText(QApplication::translate("winEmployees", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\275\320\276\320\262\320\276\320\263\320\276 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", Q_NULLPTR));
        removeUser->setText(QApplication::translate("winEmployees", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\260", Q_NULLPTR));
        calculateSalary->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\227\320\237", Q_NULLPTR));
        calculatePremium->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\277\321\200\320\265\320\274\320\270\321\216", Q_NULLPTR));
        calculateHospitalPayments->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\261\320\276\320\273\321\214\320\275\320\270\321\207\320\275\321\213\320\265 \320\262\321\213\320\277\320\273\320\260\321\202\321\213", Q_NULLPTR));
        calculateVacationPay->setText(QApplication::translate("winEmployees", "\320\240\320\260\321\201\321\201\321\207\320\270\321\202\320\260\321\202\321\214 \320\276\321\202\320\277\321\203\321\201\320\272\320\275\321\213\320\265 \320\262\321\213\320\277\320\273\320\260\321\202\321\213", Q_NULLPTR));
        menu->setTitle(QApplication::translate("winEmployees", "\320\244\320\260\320\271\320\273", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("winEmployees", "\320\237\321\200\320\260\320\262\320\272\320\260", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("winEmployees", "\320\241\320\265\321\200\320\262\320\270\321\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class winEmployees: public Ui_winEmployees {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINEMPLOYEES_H
