#include <iostream>
using namespace std;

/*
Program na��ta priemer zn�mok a najhor�iu zn�mku (maximum).
Ur�� a vyp�e prospech, ten je dan� nasledovne:
- PSV: priemer je <=1,5 a najhor�ia zn�mka je <3
- PVD: priemer je <=2 a najhor�ia zn�mka je <4
- P: najhor�ia zn�mka je <5
- N: ostatn�

D� sa na to pozera� aj z druhej strany:
- N: najhor�ia zn�mka =5
- P: priemer >2 alebo najhor�ia zn�mka =4 
- PVD: priemer >1,5 alebo najhor�ia zn�mka =3
- PSV: ostatn�
*/

int main()
{
	float priemer;
	int najhorsia;
	cout << "Zadaj priemer znamok: ";
	cin >> priemer;
	cout << "Zadaj najhorsiu znamku: ";
	cin >> najhorsia;

	// Je potrebn� za�a� od jedn�ho konca po druh� - od najlep�ieho prospechu po najhor��
	if (priemer <= 1.5 && najhorsia < 3)
		cout << "Student prospel s vyznamenanim.\n";
	else if (priemer <= 2.0 && najhorsia < 4)
		cout << "Student prospel velmi dobre.\n";
	else if (najhorsia < 5)
		cout << "Student prospel.\n";
	else
		cout << "Student neprospel.\n";

	// Alebo od najhor�ieho po najlep��
	if (najhorsia == 5)
 		cout << "Student neprospel.\n";
 	else if (priemer > 2.0 || najhorsia == 4)
 		cout << "Student prospel.\n";
 	else if (priemer > 1.5 || najhorsia == 3)
 		cout << "Student prospel velmi dobre.\n";
 	else
 		cout << "Student prospel s vyznamenanim.\n";

	return 0;
}