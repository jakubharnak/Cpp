#include <iostream>
#include <cmath>

using namespace std;

void zaokruhlenie(float *cislo)
{
    *cislo = round(*cislo);
}

int main()
{
    float *cislo = new float;
    cin >> *cislo;

    zaokruhlenie(cislo);
    cout << *cislo;
    return 0;
}