//cout<<"Данная программа позволяет вам вести учет кадров интернет-провайдера.";
//cout<<" Для этого необходим файл формата .CSV с информацией о сотрудниках. "<<endl;
//cout<<"Укажите путь к файлу:"<<endl;
//string PATH;//"/home/qw/format"
//cin>>PATH;
//int objCount=parseCSVtoObj::objCount(PATH);
//working employees[objCount];
//parseCSVtoObj::readFile(PATH, employees);
//int switcher=1;
//while(switcher!=7){/*условие для завершения диалога с пользователем*/
//cout<<"Список имен всех сотрудников:"<<endl;
//for(int i=0; i<objCount; i++){
//    employees[i].showWorkerName(i);
//}
//cout<<"Выберите дальнейшие действия:"<<endl;
//cout<<"1. Вывести информацию о всех сотрудниках."<<endl;
//cout<<"2. Расчитать ЗП всех сотрудников."<<endl;
//cout<<"3. Расчитать ЗП сотрудника."<<endl;
//cout<<"4. Расчитать больничные выплаты сотрудника."<<endl;
//cout<<"5. Расчитать отпускные выплаты сотрудника."<<endl;
//cout<<"6. Расчитать премию сотрудника."<<endl;
//cout<<"7. Завершить работу программы."<<endl;
//cout<<"Введите номер команды: ";
//cin>>switcher;
//switch(switcher){
//   case 1:{
//    for(int i=0; i<objCount; i++){
//        cout<<i+1<<") ";
//        employees[i].showWorkerInfo();
//    }
//   } break;
//   case 2:{
//    cout<<"Укажите номер сотрудника: ";
//    int count;
//    cin>>count;
//        for(int i=0; i<objCount; i++){
//        cout<<i+1<<") ";
//        employees[i].showWorkerInfo();
//        cout<<"ЗП состравляет "<<employees[count].payroll(salary, worktime)<<"тыс. руб.";
//    } */
//    break;
//   }
//   case 3:{
//        cout<<"Укажите номер сотрудника: ";
//        int count;
//        cin>>count;
////        cout<<"ЗП состравляет "<<employees[count].payroll(salary, worktime)<<"тыс. руб.";
//        }
//        break;
//   case 4:break;
//   case 5:break;
//   case 6:break;
//   case 7:break;
//   default: cout<<"Введен неправильный код. Повторите операцию."<<endl;
//    break;
//}
//}
//#include "winemployees.h"
//#include "ui_winemployees.h"
//#include "parseCSVtoObj.h"
//#include "employee.h"
//#include <QMessageBox>
//#include <QDir>
//#include <QFile>
//#include <QTextStream>
//using namespace std;
//winEmployees::winEmployees(QWidget *parent) :
//    QMainWindow(parent),
//    ui(new Ui::winEmployees)
//{
//    ui->setupUi(this);
//    setCentralWidget(ui->textEdit);
//    ui->statusBar->showMessage("Ready to work.");

//}

//winEmployees::~winEmployees(){
//    delete ui;
//}

//void winEmployees::quit(){
//    QApplication::quit();
//}

//void winEmployees::init(){
//    //    QFile mFile("/home/qw/opd/data.csv");
//    //    if(!mFile.open(QFile::ReadOnly|QFile::Text)){
//    //        QMessageBox::information(this, "Предупреждение",("Некорректный файл."),"OK");
//    //        ui->statusBar->showMessage("Error.");
//    //        return;
//    //    }
//    //    ui->statusBar->showMessage("/home/qw/opd/data.csv");
//    //    QTextStream stream(&mFile);
//    //    QString buffer=stream.readAll();
//    //    ui->textEdit->setText(buffer);
//    //    mFile.flush();
//    //    mFile.close();

//    //    for(int i=0;i<menu::objCount; i++)
//    //        ui->listWidget->addItem(menu::employees[i]);
//            int objCount;
//            string PATH="/home/qw/opd/data.csv";
//            std::vector<employee> employees;
//            //employee employees;
//            objCount=parseCSVtoObj::objCount(PATH);
//            parseCSVtoObj::readFile(PATH,employees);
//            int j=0;
//            //ui->textEdit->setText(buffer);
//            //ui->textEdit->setText(employees.size());
//            //for(size_t i=0 ; i<employees.size(); i++)
//             //   ui->textEdit->setText(employees[i].showWorkerName(i));
//    //        for(vector<employee>::iterator i=employees.begin();i!=employees.end();++i,j++)
//    //                cout/*<<"value: "*/<<i->showWorkerName(j)/*<<"\n"*/;
//            for(size_t x = 0; x < employees.size(); x++) {
//                employees[x].showWorkerName(j);j++;}
//    //        for(int i=0; i<objCount; i++)
//    //            std::cout<<employees[i].showWorkerName(i)<<endl;
//    //ui->textEdit->setText(buffer);
//    //mFile.flush();
//}
//void winEmployees::changeDataBase(){
//    changeFile=new changeSourceCSV(this);
//    changeFile->show();
//    connect(changeFile, SIGNAL(pathDataBase(QString)),this, SLOT(readFile(QString)));

//}
//void winEmployees::readFile(const QString &filePath){
//    QFile mFile(filePath);
//    if(!mFile.open(QFile::ReadOnly|QFile::Text)){
//        QMessageBox::information(this, "Предупреждение",("Некорректный путь."),"OK");
//        ui->statusBar->showMessage("Error.");
//        return;
//    }
//    ui->statusBar->showMessage("Read to file "+filePath);
//    QTextStream stream(&mFile);
//    QString buffer=stream.readAll();
//    ui->textEdit->setText(buffer);
//    mFile.flush();
//    mFile.close();
//}

//void winEmployees::writeOutputFile()
//{
//       QFile mFile("/home/qw/opd/form");
//       if(!mFile.open(QFile::WriteOnly|QFile::Text)){
//           QMessageBox::information(this, "Предупреждение",("Некорректный путь."),"OK");
//           ui->statusBar->showMessage("Write to file.");
//           return;
//       }
//       QTextStream stream(&mFile);
//       stream<<ui->textEdit->toPlainText();
//       QMessageBox::information(this, "Предупреждение",("Файл обновлён."),"OK");
//       mFile.close();
//}
