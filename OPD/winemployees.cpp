#include "winemployees.h"
#include "ui_winemployees.h"


winEmployees::winEmployees(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::winEmployees)
{
    ui->setupUi(this);
    firstToolBar = new QToolBar();
    addToolBar(firstToolBar);
//    for(int i=0;i<menu::objCount; i++)
//        ui->listWidget->addItem(menu::employees[i]);
}

winEmployees::~winEmployees()
{
    delete ui;
}

void winEmployees::on_action_triggered()
{
    QApplication::quit();
}

void winEmployees::on_action_2_triggered()
{
    hide();
    changeFile=new changeSourceCSV(this);
    changeFile->show();
}
