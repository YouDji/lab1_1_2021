/* file name: lab1_1.cpp
*Манич: Манич Даніїл Олександрович 
*група: КН-1-3
*дата створення 16/09/2021
*дата останьої зміни : 20/09/2021
*лабораторна робота №1
*тема: 	Тема лабораторної роботи.
*завдання: намалювати черешню 
*призначення прогамного файлу :  рисунок зображений у консолі
*/
#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void SetColor(int text, int background)
{
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}

void gotoxy (int xp, int yp)
{
	COORD new_xy;
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	new_xy.X = xp ; new_xy.Y = yp;
	SetConsoleCursorPosition(hStdOut,new_xy);
	
}
int main(int argc, char** argv) {
	system ("cls");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	system("color 16");
	SetColor(6,1);
	cout<<endl;
	gotoxy(40,1);
	SetColor(6,1);
	cout<<"   ##           ";
	gotoxy(40,1);
	SetColor(6,1);
	cout<<"      ##           ";
	gotoxy(40,2);
	SetColor(6,1);
	cout<<"      ##           ";
	gotoxy(41,3);
	SetColor(6,1);
	cout<<"        ##         ";
	gotoxy(41,4);
	SetColor(6,1);
	cout<<"        ##         ";
	gotoxy(42,5);
	SetColor(6,1);
	cout<<"         ##        ";
	gotoxy(42,6);
	SetColor(6,1);
	cout<<"         ##        ";
	gotoxy(42,7);
	SetColor(6,1);
	cout<<"         ##        ";
	gotoxy(42,8);
	SetColor(6,1);
	cout<<"         ##        ";
	gotoxy(42,9);
	SetColor(6,1);
	cout<<"         ##      ";
	gotoxy(42,10);
	SetColor(4,1);
	cout<<"  $$$$$$$$$$$$$$$  ";
	gotoxy(42,11);
	SetColor(4,1);
    cout<<" $$$$$$$$$$$$$$$$$ ";
    gotoxy(41,12);
	SetColor(4,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(41,13);
	SetColor(4,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(41,14);
	SetColor(4,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(41,15);
	SetColor(4,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(41,16);
	SetColor(4,1);
    cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(41,17);
	SetColor(4,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(42,18);
	SetColor(4,1);
	cout<<" $$$$$$$$$$$$$$$$$ ";
	gotoxy(42,19);
	SetColor(4,1);
	cout<<"  $$$$$$$$$$$$$$  ";
	gotoxy(43,22);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,23);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,24);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,25);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,26);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,27);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,28);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,29);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,30);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,31);
	SetColor(7,1);
	cout<<"       $$$$";
	gotoxy(43,32);
	SetColor(7,1);
	cout<<"$$$$$$$$$$$$$$$$$";
	gotoxy(40,33);
	SetColor(7,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$";
	gotoxy(37,34);
	SetColor(7,1);
	cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$";
		gotoxy(40,21);
	SetColor(7,1);
		cout<<"    $$$$$$$      ";
		gotoxy(32,20);
	SetColor(7,1);
		cout<<"       $$$$$$    ";
		gotoxy(30,19);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(28,18);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(26,17);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(24,16);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(22,15);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(20,14);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(18,13);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(16,12);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(14,11);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(12,10);
	SetColor(7,1);
		cout<<"       $$     ";
		
		
		
			gotoxy(50,21);
	SetColor(7,1);
		cout<<"    $$$$$$$      ";
		gotoxy(53,20);
	SetColor(7,1);
		cout<<"       $$$$$$    ";
		gotoxy(59,19);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(61,18);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(63,17);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(65,16);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(67,15);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(69,14);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(71,13);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(73,12);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(75,11);
	SetColor(7,1);
		cout<<"       $$     ";
		gotoxy(77,10);
	SetColor(7,1);
		cout<<"       $$     ";
		  
		  
		  
		  
		  
		  
	
	
		
		
		
		
		





	
	
	gotoxy(10,40);
	SetColor(4,1);
	system("pause");
	return 0 ; 
}


