#include <iostream>
using namespace std;

int main()
{
	int pocet;
	cin >> pocet;
	if (pocet == 0)
		cout << "V triede nie je nikto.\n";
	if (pocet == 1)
		cout << "V triede je 1 ziak.\n";
	if (pocet == 2)
		cout << "V triede su 2 ziaci.\n";
	if (pocet == 3)
		cout << "V triede su 3 ziaci.\n";
	if (pocet == 4)
		cout << "V triede su 4 ziaci.\n";
	if (pocet >= 5)
		cout << "V triede je " << pocet << " ziakov.\n";
	
	return 0;
}