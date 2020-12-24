// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;


int validadigito()
{

	int n;
	cout << "ingrese un numero de dos digitos: "; cin >> n;
	while (n <= 10 || n > 99)
	{
		cout << "ingrese un numero de dos digitos: "; cin >> n;
	}return n;
}
void sumadigito(int &numero, int &suma)

{
	int temp1;
	do
	{

		temp1 = numero % 10;
		numero = numero / 10;
		suma = suma + temp1;

	} while (temp1 != 0);

	//return suma;
}


int main()
{
	int suma = 0;
	int numero;
	numero = validadigito();
	sumadigito(numero, suma);
	cout <<"la suma de los digitos es: "<< suma;
	_getch();
}
