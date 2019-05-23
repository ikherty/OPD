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
///*        for(int i=0; i<objCount; i++){
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
