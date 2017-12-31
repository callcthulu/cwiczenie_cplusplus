// kursProgramowanie.cpp : Defines the entry point for the console application.
//

/*Zadanie 1 v0.1
Oskar Leligdowicz
kurs Programowanie, Politechnika Warszawska*/
//#include <stdafx.h>
#include <iostream> //czytanie i drukowanie (cin, cout)
#include <cstdlib> //funkcja system
#include <string> //możliwość deklarowania stringów
#include <cmath>  //dodaje bardziej zaawansowane operacje arytmetyczne

using namespace std; //przestrzeń std

const int a = 10;
int i, j, k, liczba = 1;
double A[a][a];

int main(int argc, char *argv[])
{

	cout << "uzupelnienie tablicy wartosciami o 1 wieksze od poprzedniej po skosie od prawego gornego rogu" << endl;
	for (k=2*(a-1); k>=0;k--)
	{
		for (i = 0; i < a; i++)
		{
			for (j = 0; j <= (a-1) ; j++)
				if (j == i + k - (a-1))
					A[i][j] = liczba++;
		}

	}


	system("pause");

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < a; j++)
			cout << A[i][j] << "\t";
		cout << endl;
	}

	system("pause");

	return 0;
}
