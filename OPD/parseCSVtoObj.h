/*Класс для работы с файлом формата .CSV.
 Методы позволяют узнать число объектов, а также извлечь информацию о каждом сотруднике в соответствующие поля объекта класса employee.*/

#ifndef PARSECSVTOOBJ_H
#define PARSECSVTOOBJ_H_H
#include "employee.h"
#include "paymentcalculation.h"

class parseCSVtoObj{
public:
    /*функция для счета количества объектов*/
    static int objCount(string pathToFile);
    /*метод для извлечения данных из файла*/
    static void readFile(string pathToFile, employee *obj);
};

#endif // PARSECSVTOOBJ_H
