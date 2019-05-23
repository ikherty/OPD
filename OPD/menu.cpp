#include "menu.h"
#include "ui_menu.h"
#include "pathfile.h"
#include <QPixmap>
menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    QPixmap pix(":/rec/resourses/3.png");
    int w=ui->image->width();
    int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
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
