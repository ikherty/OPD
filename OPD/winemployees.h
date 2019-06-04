#ifndef WINEMPLOYEES_H
#define WINEMPLOYEES_H

#include <QMainWindow>
#include "changesourcecsv.h"
#include <QToolBar>
namespace Ui {
class winEmployees;
}

class winEmployees : public QMainWindow
{
    Q_OBJECT

public:
    explicit winEmployees(QWidget *parent = 0);
    ~winEmployees();

private slots:
    void on_action_triggered();

    void on_action_2_triggered();

private:
    Ui::winEmployees *ui;
    QToolBar *firstToolBar;
    changeSourceCSV *changeFile;
};

#endif // WINEMPLOYEES_H
