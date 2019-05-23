#include "working.h"

working::working(){}

working::working(string name, string specialty, int experience, float salary, string worktime, string workQuality){
    this->name=name;
    this->specialty=specialty;
    this->experience=experience;
    this->salary=salary;
    this->worktime=worktime;
    this->workQuality=workQuality;
}

void working::setPrivateLines(string name,string specialty, int experience, float salary, string worktime, string workQuality){
    this->name=name;
    this->specialty=specialty;
    this->experience=experience;
    this->salary=salary;
    this->worktime=worktime;
    this->workQuality=workQuality;
}

void working::showWorkerInfo(){
    string buf;
    cout<<"Имя сотрудника: "<<name<<endl;
    cout<<"Должность: "<<specialty<<endl;
      if(((int)experience/12<5)||((int)experience/12>20)&&((int)experience/12<25))
          buf="год.";
      else
          buf="лет.";
    cout<<"Стаж: "<<(int)experience/12<<" "<<buf<<" "<<experience%12<<" мес."<<endl;
    cout<<"Оклад: "<<salary<<" тыс. руб."<<endl;
    cout<<"Ставка: "<<worktime<<endl;
    cout<<"Качество работы: "<<workQuality<<endl;
    cout<<endl;
}

void working::showWorkerName(int count){
    cout<<count+1<<". "<<name<<endl;
}

bool working::getStatus(string status){
        if(status=="работает")
            return 1;
        else return 0;
        /*в случае, если сотрудник уволен, удаляем информацию о нем*/
}

