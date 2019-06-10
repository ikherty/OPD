#include "adduser.h"
#include "ui_adduser.h"
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

void addUser::OKclicked(){
    //emit pathDataBase(ui->userPath->text());
    close();
}
