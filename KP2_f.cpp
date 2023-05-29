#include <iostream>

using namespace std;
//uloha f
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if((a & b) > (b & c) && (a & b) > (a & c)){
         cout << a << " "<< b;
	}
	else if((b & c) > (c & a) && (b & c) > (a & b)){
         cout << b << " "<< c;
	}
	else if((a & c) > (b & c) && (a & c) > (a & b)){
         cout << a << " "<< c;
	}
    return 0;
}
