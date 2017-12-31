// kursProgramowanie.cpp : Defines the entry point for the console application.
//

/*Zadanie 1 v0.1
Oskar Leligdowicz
kurs Programowanie, Politechnika Warszawska*/
//#include <stdafx.h> //niezbędna w VSO
#include <iostream> //czytanie i drukowanie (cin, cout)
#include <cstdlib> //funkcja system
#include <string> //możliwość deklarowania stringów
#include <cmath>  //dodaje bardziej zaawansowane operacje arytmetyczne

using namespace std; //przestrzeń std

int main(int argc, char *argv[]) //funkcja główna
{
	//stringi deklarowane są parami (a nie wszystkie naraz), aby rozdzielić je wg sposobu wykorzystania w kodzie, tak było dla mnie czytelniej
	string imie, zwrot;
	char plec;
	int x, y;
	string if_absolutex, if_absolutey;
	string number_of_digitsx, number_of_digitsy;
	double result;
	//flagi decydują co zobaczy użytkownik jako wynik swoich operacji
	bool flag_name;
	bool flag_oper;

	flag_name = 1;
	cout << "Podaj swoje imie: ";
	cin >> imie;
	cout << endl << "Podaj swoja plec (podaj wartosc M dla mezczyzny lub K dla kobiety): ";
	cin >> plec;
	if (plec != 'K' && plec != 'k' && plec != 'm' && plec != 'M')
		flag_name = 0;
	if (flag_name == 1)
	{
		if (plec == 'k' || plec == 'K')
			zwrot = "Pania";
		else zwrot = "Pana";
		cout << "\n\n" << imie << ", witam " << zwrot<<"!"
			<<"\nProsilbym o podanie dwoch liczb calkowitych. Zostanie dla nich zbadane czy podane liczby sa dodatnie badz ujemne,"
			<<"czy skladaja sie z 1, 2 lub wiecej cyfr oraz wynik dzielenia pierwszej liczby przez druga.\n";
		system("pause");
		cout << "\nPodaj pierwsza liczbe: ";
		cin >> x;
		cout << "\nPodaj druga liczbe: ";
		cin >> y;

		//początkowo zmienne absolute i numer_of_digits miały byc flagą/integerem, ale trzymanie ich od początku jako string skraca ilośc operacji
		//potem trzebaby było dokonać translacji na odpowiedniego stringa, a tak od początku mamy stringi
		if_absolutex = "dodatnia";
		number_of_digitsx = "wiecej niz dwoch cyfr";
		if (x < 0)
			if_absolutex = "ujemna";
		if (abs(x) < 10)
			number_of_digitsx = "jednej cyfry";
		else if(abs(x) < 100)
			number_of_digitsx = "dwoch cyfr";

		if_absolutey = "dodatnia";
		number_of_digitsy = "wiecej niz dwoch cyfr";
		if (y < 0)
			if_absolutey = "ujemna";
		if (abs(y) < 10)
			number_of_digitsy = "jednej cyfry";
		else if (abs(y) < 100)
			number_of_digitsy = "dwoch cyfr";

		flag_oper = 1;
		if (y == 0)
			flag_oper = 0;
		else result = (double)x / (double)y;
	}

	if (flag_name == 0)
		cout << "\n\nPodales niedopuszczalna plec. wiem, ze zyjemy w czasach, gdzie kazdy ma prawo do samodzielnego okreslania swojej tozsamosci,"
		<< "ale to jest prosty program i nie mozna od niego wiele oczekiwac :("
		<< "\nPodales wartosc: " << plec << ", a dopuszczalne wartosci to: \"M\", \"K\" oraz w ostatecznosci mozna bylo uzyc wartosci \"m\", \"k\". Sprobuj ponownie :)";
	else
	{
		cout << "\n\nPierwsza liczba, ktora podales to: \"" << x << "\". Ta liczba jest liczba " << if_absolutex << " i sklada sie z " << number_of_digitsx << ".";
		cout<<"\n\nDruga liczba, ktora podales to: " << y << ". Ta liczba jest liczba " << if_absolutey << " i sklada sie z " << number_of_digitsy << ".";
		if (flag_oper == 0)
			cout << "\n\nNiestety druga liczba jest zerem, a nie mozna dzielic przez zero, wiec operacja dzielenia nie zostala wykonana.";
		else
			cout << "\n\nWynik dzielenia to: " << result;
	}
	cout << "\n\n";
	system("pause");

	return 0;
}

