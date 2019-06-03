#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "employee.h"
#include "changesourcecsv.h"
#include "mainwindow.h"
#include <vector>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_quit_triggered();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_action_triggered();

private:
    Ui::MainWindow *ui;
    changeSourceCSV *changeFile;
    int objCount;
    string PATH;
    std::vector<employee> employees;
};

#endif // MAINWINDOW_H
