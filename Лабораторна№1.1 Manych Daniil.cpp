/* file name: lab1_1.cpp
*Манич: Манич Даніїл Олександрович 
*група: КН-1-3
*дата створення 16/09/2021
*дата останьої зміни : 20/09/2021
*лабораторна робота №1
*тема: 	Тема лабораторної роботи.
*завдання: 3 приклади 
*призначення прогамного файлу :  Приклад рахуеться у консолі
*/


#include <iostream>
#include <math.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

void SetColor(int text, int background)
{
   HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
   SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

int main(int argc, char** argv) {

    system("color 8 " );

    setlocale(LC_ALL,"Rus");
    SetColor(7,1);
    cout<< "Задача №1" ;
 double x,y,z1 ;
  SetColor(11,1);
 
 cout<<"\n\n Введите значение x = " ;
 
 cin>>x ;
 SetColor(7,1);
 cout<<"\n Введите значение y = " ;
 
 cin>>y ;
 
 
 z1 = 1/(x+y)+sqrt(x+pow((1+y),2));
 
 
 SetColor(11,1);
 cout<<"\n\n Ответ первой задачи ="<<z1;
 
 
 	// _______________________________________
 	
  cout<<"\n\n Третья задача ";
  
  double Z3,Z1,Z2;
  SetColor(11,1);
  cout<<"\n\n Введите значение Z1 = " ;
  cin>>Z1 ;
  SetColor(7,1);
 cout<<"\n Введите значение Z2 = " ;
 
 cin>>Z2 ;
  
  
  Z3= sqrt(fabs(Z2 + Z1));
  
  
  SetColor(7,1);
  cout<<"\n\n Ответ третьей задачи = "<<Z3; 
   

   
   	// _______________________________________
   	
   	cout<<"\n\n Вторая задача";
   	
   	double xy,xx,yy,e,tg,Z2Z2 ;
   	
   	
   	Z2= 3*xy-1+pow(e,2*x)/1+pow(x,3)*fabs(y-pow(tg,2))*(x);
	
	
   SetColor(11,1);
   
	 cout<<"\n\n Ответ второй задачи ="<<Z2;
 
   
  
 


 
}


