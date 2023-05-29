#include <iostream>
#include <cmath>

using namespace std;
//-------------------------------------------------------------------- absolutna hodnota
inline int ABS(int x)
{
    return (x < 0) ? -x : x;
}

inline float ABSD(float y)
{
    return (y < 0) ? -y : y;
}
//-------------------------------------------------------------------- druha mocnina
inline int square(int x)
{
    return x * x;
}

inline float squared(float y)
{
    return y * y;
}
//-------------------------------------------------------------------- euklidova vzdialenost
inline float EUK(int x1, int y1, int x2, int y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
//--------------------------------------------------------------------manhattan vzdialenost
inline int MAN(int x1, int y1, int x2, int y2)
{
    return (x1 - x2) + (y1 - y2);
}

int main()
{
    cout << "absolutna hodnota cisla -5 je : " << ABS(-5) << endl;

    cout << "absolutna hodnota cisla 5.21 je : " << ABSD(5.21) << endl;
    //--------------------------------------------------------------------
    cout << "druha mocnina cisla 5 je : " << square(5) << endl;

    cout << "druha mocnina cisla 5.21 je : " << squared(5.21) << endl;
    //--------------------------------------------------------------------
    cout << "euklidova vzdialenost medzi bodmi 15;15 a 5;5 je : " << EUK(15, 15, 5, 5) << endl;

    cout << "manhattan vzdialenost medzi bodmi 15;15 a 5;5 je : " << MAN(15, 15, 5, 5) << endl;
    return 0;
}