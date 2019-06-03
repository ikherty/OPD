#include "changesourcecsv.h"
#include "ui_changesourcecsv.h"
#include "QMessageBox"
#include <QString>
changeSourceCSV::changeSourceCSV(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeSourceCSV){
    ui->setupUi(this);
}

changeSourceCSV::~changeSourceCSV()
{
    delete ui;
}

void changeSourceCSV::on_pushButton_clicked()
{
    QString userPath =ui->userPath->text();
    QMessageBox::information(this, "Предупреждение",("Файл выбран."),"OK");
    hide();
    //mainMenu=new MainWindow(this);
    //mainMenu->show();
}
