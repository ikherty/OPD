#include "content.h"
#include "ui_content.h"

content::content(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::content)
{
    ui->setupUi(this);
}

content::~content()
{
    delete ui;
}
