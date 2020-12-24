// ConsoleApplication1.cpp : main project file.

#include "stdafx.h"
#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;
using namespace System;

//int validadigito()
//{
//
//	int n;
//	cout << "ingrese un numero de dos digitos: "; cin >> n;
//	while (n <= 10 || n > 99)
//	{
//		cout << "ingrese un numero de dos digitos: "; cin >> n;
//	}return n;
//}
//
//void sumadigito(int &n,int &suma)
//
//{
//
//	int temp1;
//	do
//	{
//
//		temp1 = n % 10;
//		n = n / 10;
//		suma = suma + temp1;
//		
//	} while (temp1 != 0);
//
//	//return suma;
//}
//
//
//int main()
//{
//	int suma=0;
//	int num = validadigito();
//	sumadigito(num,suma);
//	cout << suma;
//	_getch();
//}


int validadigito()
{

	int n;
	cout << "ingrese un numero de dos digitos: "; cin >> n;
	while (n <= 10 || n > 99)
	{
		cout << "ingrese un numero de dos digitos: "; cin >> n;
	}return n;
}
void sumadigito(int &n, int &suma)

{
	int temp1;
	do
	{

		temp1 = n % 10;
		n = n / 10;
		suma = suma + temp1;

	} while (temp1 != 0);

	//return suma;
}


int main()
{
	int suma = 0;
	int *punterosuma;
	punterosuma = &suma;
	
	int c;
	int*punteroc;
	punteroc = &c;
	c = validadigito();
	sumadigito(*punteroc, *punterosuma);
	cout << suma;
	_getch();
}
