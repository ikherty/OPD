#include "listemployees.h"
#include "ui_listemployees.h"

listEmployees::listEmployees(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listEmployees)
{
    ui->setupUi(this);
}

listEmployees::~listEmployees()
{
    delete ui;
}
