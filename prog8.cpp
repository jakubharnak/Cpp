#include <iostream>
#include <iomanip>  // treba pre setprecision() a setw()
using namespace std;

int main()
{
	int b = 65;
	cout << "Cislo " << b << " v 16-kovej sustave je: " << hex << b << endl << dec;
	cout << "Cislo " << b << " v 8-kovej sustave je: " << oct << b << endl << dec;

	double pi = 53.1415926536;
	cout << "Cislo pi: " << pi << endl;  // predvolen� je v�pis na 6 platn�ch ��slic
	cout << "Cislo pi na 5 platnych cislic: " << setprecision(2) << pi << endl;  // zaokr�h�uje
	cout << "Cislo pi na 7 desatinnych miest: " << fixed << setprecision(2) << pi << endl;  // zaokr�h�uje

	float r = 0.00000000453;
	// cout.precision(9);  // in� sp�sob - nepotrebuje iomanip
	cout << endl << fixed << setprecision(10) << r << endl;  // nastav v�pis na pevn� po�et desatinn�ch miest (fixed) a nastav 9 desatinn�ch miest

	cout << "\nVyzbierane sumy:\n" << fixed << setprecision(2);
	// cout.width(8);  // in� sp�sob - nepotrebuje iomanip
	cout << setw(9) << 5. << endl << setw(8) << 234453.14 << endl << setw(8) << 12.5 << endl << setw(8) << 12150. << endl;
	// width / setw nastavuje ��rku v�pisu (dorovn� z�ava medzerami), no uplatn� sa len na najbli��� v�pis!

	return 0;
}