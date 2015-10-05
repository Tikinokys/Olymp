#include <iostream>
#include <conio.h>
#include "stdafx.h" // только для MVS

using std::cout;
using std::endl;

int main() {

	setlocale(LC_ALL,"Russian");

	int n;
	int p=0;

	cout<<"Введите число n: ";
	for(i=1; i<=n; i++)
	{
		p+=1/(i*(i+1));
	}

	cout<<"Cумма:\t" << p << endl;
		_getch(); // Нажмите клавишу чтобы продолжить
	return 0;
}