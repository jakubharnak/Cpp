#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	// 1. sp�sob: vetven�m cez if-else
	if (a > b)  // B vypadlo
		if (a > c)  // rozhodujeme medzi A a C
			cout << a << endl;
		else
			cout << c << endl;
	else  // A vypadlo
		if (b > c)  // rozhodujeme medzi B a C
			cout << b << endl;
		else
			cout << c << endl;

	// 2. sp�sob: spojen�m podmienok cez AND
	if (a >= b && a >= c)
		cout << a << endl;
	else if (b >= c)
		cout << b << endl;
	else
		cout << c << endl;
		
	// 3. sp�sob: vyu�it�m pomocnej premennej (maxima)
	int max = a;  // na �vod vyhl�sim A za (do�asn�) maximum
	if (b > max)
		max = b;
	if (c > max)
		max = c;
	cout << max << endl;

	return 0;
}
