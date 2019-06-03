#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include <QPixmap>
menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
//    QPixmap pix(":/rec/resourses/4.png");
//    int w=ui->image->width();
//    int h=ui->image->height();
//    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

menu::~menu()
{
    delete ui;
}

void menu::on_pushButton_clicked()
{
    hide();
    mainMenu=new MainWindow(this);
    mainMenu->show();
}
