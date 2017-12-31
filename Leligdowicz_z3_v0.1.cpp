// kursProgramowanie.cpp : Defines the entry point for the console application.
//

/*Zadanie 3 v0.1
Oskar Leligdowicz
kurs Programowanie, Politechnika Warszawska*/
//#include <stdafx.h>
#include <iostream> //czytanie i drukowanie (cin, cout)
#include <cstdlib> //funkcja system
#include <string> //mo¿liwoœæ deklarowania stringów
#include <cmath>  //dodaje bardziej zaawansowane operacje arytmetyczne

using namespace std; //przestrzeñ std

string current;
int same_letter, shortest, sentence_no, i;

int main(int argc, char *argv[])
{
	//first loop
	cout << "Podaj napisy. Jesli skonczysz podawac napisy u¿yj komendy \"end\", aby przejsc dalej.\n";
	while (current != "end")
	{
		cout << "Podaj napis: ";
		cin >> current;
		if (shortest == 0 && current != "end")
			shortest = current.size();
		else
			if (current.size() < shortest && current != "end")
			shortest = current.size();
		if (current[current.size() - 2] == current[current.size() - 1])
			same_letter++;
	}

	//second loop
	cout << "\nSuper! Teraz jeszcze wczytajmy pare wyrazow. Podaj wartosc od 5 do 10, a nastepnie podaj tyle napisow ile podana wartosc.\n";
	do
	{
		cout << "Podaj wartosc: ";
		cin >> sentence_no;
		if (sentence_no < 5 || sentence_no > 10)
			cout << "\nZla wartosc. Podaj wartosc miedzy 5, a 10.\n";
	} while (sentence_no < 5 || sentence_no > 10);

	//third loop
	cout << "\nTeraz podaj dodatkowe napisy. Jesli nie chcesz podawac wszystkich zadeklarowanych u¿yj komendy \"end\", aby przejsc dalej.\n";
	for (i = 0; i < sentence_no; i++)
	{
		cout << "Podaj napis: ";
		cin >> current;
		if (current == "end")
			break;
		if (shortest == 0)
			shortest = current.size();
		else if (current.size() < shortest)
			shortest = current.size();
		if (current[current.size() - 2] == current[current.size() - 1])
			same_letter++;
	}

	//print
	cout << "\n\nWsrod wyrazow, ktore podales " << same_letter << " mialo taka sama ostatnia i przedostatnia litere.\nNajkrotszy wyraz mial nastepujaca liczbe znakow: " << shortest << ".\n\n";

	system("pause");

	return 0;
}
