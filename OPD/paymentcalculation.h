/*Класс для расчета выплат сотруднику.
 Методы позволяют рассчитать ЗП, отпускные, больничный, премию согласно определенным формулам.*/

#ifndef PAYMENTCALCULATION_H
#define PAYMENTCALCULATION_H
#include "employee.h"

class paymentCalculation
{
public:
    /*расчет ЗП по окладу, количеству рабочего времени*/
    static float payroll(float salary, int worktime);
    static float calculateVacation(float salary, int worktime, int holiday);
    /*расчет отпускных. формула=месячный оклад*число отпускных дней-13%/среднее количество дней в месяце*/
    /*расчет премий. формула=коэффициент от стажа*оклад*0.2*качество работы*/
    static float calculatePremium(int experience, float salary, int worktime, int workQuality);
    /*расчет больничных. формула=коэффициент от стажа*оклад*ставку*число дней на больничном*/
    static float calculateHospital(int experience, float salary, int worktime, int hospitDays);
};

#endif // PAYMENTCALCULATION_H
