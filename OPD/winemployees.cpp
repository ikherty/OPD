#include "winemployees.h"
#include "ui_winemployees.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>

winEmployees::winEmployees(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::winEmployees)
{
    ui->setupUi(this);
    setCentralWidget(ui->textEdit);
    //firstStatusBar = new QStatusBar();
    //addStatusBar(firstStatusBar);
    ui->statusBar->showMessage("Ready to work.");
    firstToolBar = new QToolBar();
    addToolBar(firstToolBar);
//    for(int i=0;i<menu::objCount; i++)
//        ui->listWidget->addItem(menu::employees[i]);
}

winEmployees::~winEmployees()
{
    delete ui;
}

void winEmployees::on_action_triggered()
{
    QApplication::quit();
}

void winEmployees::on_action_2_triggered()
{
    //hide();
    changeFile=new changeSourceCSV(this);
    changeFile->show();
    connect(changeFile, SIGNAL(pathDataBase(QString)),this, SLOT(readFile(QString)));
}
void winEmployees::readFile(const QString &filePath){
    QFile mFile(filePath);
    if(!mFile.open(QFile::ReadOnly|QFile::Text)){
        QMessageBox::information(this, "Предупреждение",("Некорректный путь."),"OK");
        ui->statusBar->showMessage("Error.");
        return;
    }
    ui->statusBar->showMessage("Read to file "+filePath);
    QTextStream stream(&mFile);
    QString buffer=stream.readAll();
    ui->textEdit->setText(buffer);
    mFile.flush();
    mFile.close();
}

void winEmployees::on_action_3_triggered()
{
       QFile mFile("/home/qw/opd/form");
       if(!mFile.open(QFile::WriteOnly|QFile::Text)){
           QMessageBox::information(this, "Предупреждение",("Некорректный путь."),"OK");
           ui->statusBar->showMessage("Write to file.");
           return;
       }
       QTextStream stream(&mFile);
       stream<<ui->textEdit->toPlainText();
       QMessageBox::information(this, "Предупреждение",("Файл обновлён."),"OK");

       //ui->textEdit->setText(buffer);
       //mFile.flush();
       mFile.close();
}
