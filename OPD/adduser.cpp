#include "adduser.h"
#include "ui_adduser.h"
#include "winemployees.h"
#include "QMessageBox"
#include <QString>
#include <QPushButton>
addUser::addUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addUser){
    ui->setupUi(this);
    connect(ui->buttonBox->button(QDialogButtonBox::Ok),SIGNAL(clicked()),SLOT(OKclicked()));
    connect(ui->buttonBox->button(QDialogButtonBox::Cancel),SIGNAL(clicked()),SLOT(close()));
}

addUser::~addUser(){
    delete ui;
}

void addUser::translate(ui){}

void addUser::OKclicked(){
    QFile mFile("/home/qw/opd/form");
    if(!mFile.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::information(this, "Предупреждение",("Некорректный путь."),"OK");
        winEmployees::ui->statusBar->showMessage("Write to file.");
        return;
    }
    QTextStream stream(&mFile);
    stream<<ui->textEdit->toPlainText();
    mFile.close();
}
