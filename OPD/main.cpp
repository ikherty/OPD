/*ИС "Учет кадров Интернет-Провайдера"

Данная ИС разработана для автоматизации учета кадров интернет-провайдера.
Система взаимодействует с *.CSV файлом, считывая, обрабатывая и храня информацию в нем.
Доступны функции для расчета выплат сотрудникам, изменения личной информации.
Разработка производилась в QT-creator на С++.*/
#include <QLabel>
#include "employee.h"
#include "parseCSVtoObj.h"
#include "paymentcalculation.h"
#include <QApplication>
#include "winemployees.h"
int main(int argc, char *argv[]){
    setlocale(LC_ALL,"rus");
    QApplication a(argc, argv);
    winEmployees w;
    w.show();
    return a.exec();
}
