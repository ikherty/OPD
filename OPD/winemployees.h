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
    void readFile(const QString &filePath);
    //void init();
    void on_quit_triggered();
    void on_changeDataBase_triggered();
    void on_addUser_triggered();

private:
    Ui::winEmployees *ui;
    QToolBar *firstToolBar;
    changeSourceCSV *changeFile;
};

#endif // WINEMPLOYEES_H
