#include <iostream>
using namespace std;

int main()
{
	int pocet;
	cin >> pocet;
	if (pocet >= 5)
		cout << "V triede je " << pocet << " ziakov.\n";
	else if (pocet == 0)
		cout << "V triede nie je nikto.\n";
	else if (pocet == 1)
		cout << "V triede je 1 ziak.\n";
	else  // po�et je 2 a� 4 (ostatn� mo�nosti)
		cout << "V triede su " << pocet << " ziaci.\n";
	
	return 0;
}