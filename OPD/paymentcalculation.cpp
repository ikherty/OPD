#include "paymentcalculation.h"
#include "working.h"

float paymentCalculation::payroll(float salary, int worktime){
//расчет ЗП по окладу, количеству рабочего времени
        return salary*worktime*0.87;
}

float paymentCalculation::calculateVacation(float salary, int worktime, int holiday){
//расчет отпускных
//формула=месячный оклад*число отпускных дней-13%/среднее количество дней в месяце
        return salary*holiday*worktime*0.87/29.3;
}

float paymentCalculation::calculatePremium(int experience, float salary, int worktime, int workQuality){
//расчет премий
//формула=коэффициент от стажа*оклад*0.2*качество работы
        float stag=1;
        if(experience<=1)
                stag=1;
        else
            if((experience<=2)&&(experience>1))
                stag=1.5;
            else
                if((experience<=3)&&(experience>2))
                        stag=2;
                else
                    stag=2.5;
        return stag*salary*worktime*0.2*workQuality;
}

float paymentCalculation::calculateHospital(int experience, float salary, int worktime, int hospitDays){
//расчет больничных
//учитывая стаж, указываем коэффициент, и высчитываем выплату
        float percent=1;
        if(experience<=2)
            percent=0.6;
        else
            if((experience<=5)&&(experience>2))
                percent=0.8;
            else
                if((experience<=10)&&(experience>5))
                    percent=0.9;
                else
                    percent=1;
        return 0.87*percent*salary*worktime*hospitDays;
}
