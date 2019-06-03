#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_quit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    //вывести инфу о сотрудниках, предложить уволить сотрудника и добавить
}

void MainWindow::on_pushButton_2_clicked()
{
    //рассчитать зп
}

void MainWindow::on_pushButton_3_clicked()
{
    //отпускные
}

void MainWindow::on_pushButton_4_clicked()
{
    //больничные
}

void MainWindow::on_pushButton_5_clicked()
{
    //премия
}

void MainWindow::on_action_triggered()
{
    //выбрать другой файл
}
