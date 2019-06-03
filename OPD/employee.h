/*Класс для хранения информации сотрудника.
 Поля содержат данные, считанные с файла.
 Методы позволяют заполнять поля, выводить информацию на экран, менять статус сотрудника.*/

#ifndef employee_H
#define employee_H
#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <clocale>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <stdlib.h>
using namespace std;

class employee{
    string name; /*ФИО*/
    string specialty; /*должность*/
    int experience; /*стаж в месяцах*/
    float salary; /*оклад*/
    string worktime; /*ставка (полный/неполный рабочий день)*/
    string workQuality; /*качество работы*/
public:
    employee();
    employee(string name,string specialty, int experience, float salary, string worktime, string workQuality);
    /*метод для записи в закрытые поля соответствующих данных*/
    void setPrivateLines(string name,string specialty, int experience, float salary, string worktime, string workQuality);
    /*метод для вывода информации о сотруднике*/
    void showWorkerInfo();
    /*метод для вывода имени сотрудника*/
    void showWorkerName(int count);
    /*статус: работает или уволен*/
    bool getStatus(string status);
};

#endif // employee_H
