#include "pathtofile.h"
#include "ui_pathtofile.h"

pathToFile::pathToFile(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pathToFile)
{
    ui->setupUi(this);
}

pathToFile::~pathToFile()
{
    delete ui;
}

void pathToFile::on_pushButton_clicked()
{
    QString path=ui->path->text();
}
