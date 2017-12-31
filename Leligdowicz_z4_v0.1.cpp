// kursProgramowanie.cpp : Defines the entry point for the console application.
//

/*Zadanie 4 v0.1
Oskar Leligdowicz
kurs Programowanie, Politechnika Warszawska*/
//#include <stdafx.h>
#include <iostream> //czytanie i drukowanie (cin, cout)
#include <cstdlib> //funkcja system
#include <string> //możliwość deklarowania stringów
#include <cmath>  //dodaje bardziej zaawansowane operacje arytmetyczne

using namespace std; //przestrzeń std
//wspolne zmienne
int i;

//zmienne do podpunktu a
int a, minv, maxv, number, sum, counts;
double avg;

//zmienne+stała do podpunktu b
int smallest, subtraction;
const int n = 5;
int A[n];

//zmienne podpunkt c
int clipboard;

int main(int argc, char *argv[])
{

	//podpunkt a
	cout << "\nNajpierw program poda ci srednia dla podanych liczb o ile mieszcza sie w zadeklarowanym przedziale.\n\nNajpierw podaj minimalna wartosc przedzialu: ";
	cin >> minv;
	cout << "\nPodaj maksymalna wartosc przedzialu: ";
	cin >> maxv;
	cout << "\nPodaj ile liczb chcesz wczytac: ";
	cin >> a;

	for (i = 0; i < a; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe: ";
		cin >> number;
		if (number >= minv && number <= maxv)
		{
			sum += number;
			counts++;
		}
		else cout<<"Liczba nie miesci sie w przedziale. Nie zostanie ona uwzgledniona.\n";
	}

	if (counts != 0)
		avg = sum / (double)counts;
	else avg = 0;

	//print
	cout << "\n\nSrednia dla liczb, ktore miescily sie w przedziale to " << avg <<".\n\n";

	system("pause");

	//podpunkt b
	cout << "\nTeraz podaj "<<n<<" liczb, a program zwroci ci te cyfry oraz roznice miedzy nimi.\n";
	for (i = 0; i < n; i++)
	{
		cout << "Podaj " << i + 1 << " liczbe: ";
		cin >> A[i];
		if (i == 0)
			smallest = A[i];
		else if (smallest > A[i])
			smallest = A[i];
	}
	cout << endl;
	for (i = 0; i < n; i++)
	{
		subtraction = A[i] - smallest;
		cout << i + 1 << "podana liczba to " << A[i] << ". Roznica miedzy nia, a najmniejsza podana liczba (" << smallest << ") to " << subtraction << ".\n";
	}
	cout << endl;

	system("pause");

	//podpunkt c
	for (i = 0; i < (n / 2); i++)
	{
		clipboard = A[i];
		A[i] = A[n - 1-i];
		A[n - 1-i] = clipboard;
	}
	cout << "Podane liczby w odwroconej kolejnosci to:\n";
	for (i = 0; i < n; i++)
		cout << A[i] << "\t";
	cout << endl;

	system("pause");

	return 0;
}
