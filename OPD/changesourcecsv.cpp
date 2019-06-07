#include "changesourcecsv.h"
#include "ui_changesourcecsv.h"
#include "QMessageBox"
#include <QString>
#include <QPushButton>
changeSourceCSV::changeSourceCSV(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeSourceCSV){
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok),SIGNAL(clicked()),SLOT(OKclicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel),SIGNAL(clicked()),SLOT(close()));
}

void changeSourceCSV::OKclicked(){
    emit pathDataBase(ui->userPath->text());
    close();
}

changeSourceCSV::~changeSourceCSV()
{
    delete ui;
}

void changeSourceCSV::pushButton_clicked()
{
    //QString userPath =ui->userPath->text();
    //QMessageBox::information(this, "Предупреждение",("Файл выбран."),"OK");
    //hide();
    //mainMenu=new MainWindow(this);
    //mainMenu->show();
}
