// kursProgramowanie.cpp : Defines the entry point for the console application.
//

/*Zadanie 2 v0.1
Oskar Leligdowicz
kurs Programowanie, Politechnika Warszawska*/
//#include <stdafx.h>
#include <iostream> //czytanie i drukowanie (cin, cout)
#include <cstdlib> //funkcja system
#include <string> //mo¿liwoœæ deklarowania stringów
#include <cmath>  //dodaje bardziej zaawansowane operacje arytmetyczne

using namespace std; //przestrzeñ std

int main(int argc, char *argv[])
{
	char end = 'n';
	do
	{
		char zn = ' ';
		int numbers = 0, letters = 0, count_special = 0;
		bool special = 0;
		cout << "wpisz . lub !<<" << endl;
		while (zn != '!' && zn != '.')
		{
			cin >> zn;
			if (zn != '!' && zn != '.')
				cout << "bledny znak." << endl;
		}
		zn = ' ';
		cout << "Wpisuj pojedynczo znaki i zatwierdzaj je enterem. Program wykona operacje kiedy pojawi siê znak konczacy (kropka lub wykrzyknik)." << endl;
		do
		{
			cout << "Podaj znak: ";
			cin >> zn;
			if (zn >= '0' && zn <= '9')
				numbers++;
			if (zn >= 'a' && zn <= 'z')
				letters++;
			if (special == 1 && zn == '&')
				count_special++;
			if (zn == '&')
				special = 1;
			else special = 0;
		} while (zn != '!' && zn != '.');
		cout << endl << "Znak & wystapil obok siebie " << count_special << " razy." << endl;
		if (numbers < letters)
			cout << "Wystapilo wiêcej ma³ych liter niz cyfr." << endl;
		else if (numbers > letters)
			cout << "Wystapilo wiecej cyfr niz malych liter." << endl;
		else cout << "Wystapilo tyle samo malych liter i cyfr." << endl;
		cout << "Czy zamknac program? (tak - t, nie - n)" << endl;
		cin >> end;
	} while (end != 't');

	return 0;
}
