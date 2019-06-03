#include "winemployees.h"
#include "ui_winemployees.h"

winEmployees::winEmployees(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::winEmployees)
{
    ui->setupUi(this);
//    for(int i=0;i<objCount; i++)
//        ui->listWidget->addItem(vector[i]);
}

winEmployees::~winEmployees()
{
    delete ui;
}

void winEmployees::on_action_triggered()
{
    QApplication::quit();
}
