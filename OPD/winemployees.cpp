#include "winemployees.h"
#include "ui_winemployees.h"
#include "employee.h"
#include "parseCSVtoObj.h"
#include <QMessageBox>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include "adduser.h"

winEmployees::winEmployees(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::winEmployees){
    ui->setupUi(this);
    setCentralWidget(ui->tableWidget);
    string PATH="/home/qw/opd/data.csv";
    int objCount=parseCSVtoObj::objCount(PATH);
    parseCSVtoObj::readFile(PATH,emp);
    ui->tableWidget->setRowCount(objCount);//получить количество из файла
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"ФИО"<<"Должность"<<"Стаж"<<"Оклад"<<"Ставка"<<"Качество работы");
    ui->statusBar->showMessage("Ready to work.");
    
}
void winEmployees::init(){
}

winEmployees::~winEmployees(){
    delete ui;
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
    //ui->tableView->set

    mFile.flush();
    mFile.close();
}

void winEmployees::on_quit_triggered(){
    QApplication::quit();
}

void winEmployees::on_changeDataBase_triggered(){
    changeFile=new changeSourceCSV(this);
    changeFile->show();
    connect(changeFile, SIGNAL(pathDataBase(QString)),this, SLOT(readFile(QString)));
}

void winEmployees::on_addUser_triggered(){
    addMan=new addUser(this);
    addMan->show();
    //==============
    QFile mFile("/home/qw/opd/form");
    if(!mFile.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::information(this, "Предупреждение",("Некорректный путь."),"OK");
        ui->statusBar->showMessage("Write to file.");
        return;
    }
    QTextStream stream(&mFile);
    stream<<ui->textEdit->toPlainText();
    //QMessageBox::information(this, "Предупреждение",("Файл обновлён."),"OK");
    mFile.close();
}
