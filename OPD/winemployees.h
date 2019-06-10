#ifndef WINEMPLOYEES_H
#define WINEMPLOYEES_H

#include <QMainWindow>
#include "changesourcecsv.h"
#include <QToolBar>
#include "employee.h"
#include "adduser.h"
namespace Ui {
class winEmployees;
}

class winEmployees : public QMainWindow{
    Q_OBJECT

public:
    explicit winEmployees(QWidget *parent = 0);
    ~winEmployees();

private slots:
    void readFile(const QString &filePath);
    void init();
    void on_quit_triggered();
    void on_changeDataBase_triggered();
    void on_addUser_triggered();

    void on_removeUser_triggered();

    void on_calculateSalary_triggered();

    void on_calculatePremium_triggered();

    void on_calculateHospitalPayments_triggered();

    void on_calculateVacationPay_triggered();

private:
    Ui::winEmployees *ui;
    changeSourceCSV *changeFile;
    addUser *addMan;
    vector <employee> emp;
    void createUI(const QStringList &headers);
};

#endif // WINEMPLOYEES_H
