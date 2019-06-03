#include "parseCSVtoObj.h"

/*метод для счета количества объектов*/
 int parseCSVtoObj::objCount(string pathToFile){
    string line;
    int numberObj=0;
    ifstream fInput(pathToFile,ios_base::out);
    if(fInput.is_open()){
        while(!fInput.eof()){
            getline(fInput,line);
            if(line.length()>0)
                numberObj++;
        }
    }
    else
        cout<<"Файл отсутствует."<<endl;
    fInput.close();
    if(numberObj==1)
        cout<<"Объектов нет.";
    if(numberObj>=2)
        numberObj--;//так как первая строка по умолчанию-заголовки столбцов
    return numberObj;
}
/*метод для извлечения информации о сотрудниках из файла*/
void parseCSVtoObj::readFile(string pathToFile, employee *obj){
    string line, buf, workQuality, name, worktime, specialty;
    int experience=0;
    float salary=0;
    int i=0;
    //pathToFile="/home/qw/format";
    ifstream fInput(pathToFile,ios_base::out);
    if(fInput.is_open()){
        getline(fInput,line);
        while(!fInput.eof()){
                getline(fInput,name,';');
                if(name.length()==0)/*в случае, если не удалось считать файл по заданной структуре*/
                  break;
                getline(fInput,specialty,';');
                getline(fInput,buf,';');
                  experience=NULL;//преобразование строки в число
                  for(int ii=0; ii<buf.length(); ii++){
                      experience=experience*10+buf[ii]-0x30;
                  }
                getline(fInput,buf,';');
                  salary=NULL;//преобразование строки в число
                  for(int ii=0; ii<buf.length(); ii++){
                      salary=salary*10+buf[ii]-0x30;
                  }
                getline(fInput,worktime,';');
                getline(fInput,workQuality);
                obj[i].setPrivateLines(name, specialty, experience, salary, worktime, workQuality);
                i++;
        }
    }else
        cout<<"Файл отсутствует.";
    fInput.close();
}
