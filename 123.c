#include <iostream>
using namespace std;
int main()
{ setlocale(LC_ALL,"rus");
  int N; cout<<"N= "; cin>>N;
  int a,b;
  if(N>=30 && N<=50)
  {
     cout<<"Наименование корзинки: ";
     a=N/10;
     b=N%10;
     switch(a)
     {
        case 30: cout<<"Тридцать "; break;
        case 40: cout<<"Сорок "; break;
        case 50: cout<<"Пятьдесят "; break;
     }
     if(b!=0)
     {
         switch(b)
         {
            case 1: cout<<"один "; break;
            case 2: cout<<"два "; break;
            case 3: cout<<"три "; break;
            case 4: cout<<"четыри "; break;
            case 5: cout<<"пять "; break;
            case 6: cout<<"шесть "; break;
            case 7: cout<<"семь "; break;
            case 8: cout<<"восемь "; break;
            case 9: cout<<"девать "; break;
         }
     }
  }
  else
  { cout<<"Вы ввели неправильное количество корзин!"<<endl; }
  return 0;
}
