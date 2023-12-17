#include <iostream>
using namespace std;

int main()
{
	int cislo;
	cin >> cislo;
	
	if (cislo == 0)
		cout << "nula" << endl;
	else if (cislo%2 == 0)
		cout << "parne" << endl;
	else
		cout << "neparne" << endl;

	return 0;
}