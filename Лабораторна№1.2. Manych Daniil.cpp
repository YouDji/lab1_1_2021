/* file name: lab1_1.cpp
*�����: ����� ���� ������������� 
*�����: ��-1-3
*���� ��������� 16/09/2021
*���� ������� ���� : 20/09/2021
*����������� ������ �1
*����: 	���� ����������� ������.
*��������: ������� ������� 
*����������� ���������� ����� : � ������ ����� �� �������
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
    cout<< "������ " ;
    double a,b,c;
	
	cout<<"\n\n ������� �������� a = ";
	
	cin>>a;
	SetColor(7,1);
	
	cout<<"\n\n ������� �������� b = ";
	cin>>b;

	c = sqrt(pow(a,2)+pow(b,2));
	SetColor(11,1);
	cout<<"\n\n ����� ="<<c ;
	
}
	
