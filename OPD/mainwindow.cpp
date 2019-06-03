#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "parseCSVtoObj.h"
#include "changesourcecsv.h"
#include "winemployees.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    PATH="/home/qw/opd/format";
    objCount=parseCSVtoObj::objCount(PATH);
    parseCSVtoObj::readFile(PATH,employees);
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::on_action_triggered(){
    //выбрать другой файл
    hide();
    changeFile=new changeSourceCSV(this);
    changeFile->show();
}

void MainWindow::on_quit_triggered(){
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked(){
    //вывести инфу о сотрудниках, предложить уволить сотрудника и добавить
//    for(int i=0; i<objCount; i++){
//         cout<<i+1<<") ";
//         employees[i].showWorkerInfo();
//    }
    hide();
    list=new winEmployees(this);
    list->show();
}

void MainWindow::on_pushButton_2_clicked(){
    //рассчитать зп
}



