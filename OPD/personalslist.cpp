#include "personalslist.h"
#include "ui_personalslist.h"

personalsList::personalsList(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::personalsList)
{
    ui->setupUi(this);
}

personalsList::~personalsList()
{
    delete ui;
}
