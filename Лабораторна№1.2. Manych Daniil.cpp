/* file name: lab1_1.cpp
*Манич: Манич Даніїл Олександрович 
*група: КН-1-3
*дата створення 16/09/2021
*дата останьої зміни : 20/09/2021
*лабораторна робота №1
*тема: 	Тема лабораторної роботи.
*завдання: Теорема піфагора 
*призначення прогамного файлу : у консолі рахуе цю теорему
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

int main(int argc, char** argv) 
{
	SetColor(11,1);
  system("color 8 " );

    setlocale(LC_ALL,"Rus");
    SetColor(4,1);
    cout<< "Задача " ;
    double a,b,c;
	
	cout<<"\n\n Введите значения a = ";
	
	cin>>a;
	SetColor(7,1);
	
	cout<<"\n\n Введите значения b = ";
	cin>>b;

	c = sqrt(pow(a,2)+pow(b,2));
	SetColor(11,1);
	cout<<"\n\n Ответ ="<<c ;
	
}
	
