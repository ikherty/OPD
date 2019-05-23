#include "menu.h"
#include "ui_menu.h"
#include "pathfile.h"
menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    hide();
    PATH= new pathFile(this);
    PATH->show();
}
