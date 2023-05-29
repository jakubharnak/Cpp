#include <iostream>

using namespace std;

struct Elevator
{
    int wmax = 600; //maximalna vaha
    int cmax = 6;   //maximalny pocet
    int wall = 0;   //vaha vsetkych
    int call = 0;   //pocet vsetkych
};

void upravVytah(Elevator *e, int inC, int inW, int outC, int outW)
{
    if ((e->wall + inW - outW) > e->wmax || (e->wall + inW - outW) < 0 || (e->call + inC - outC) > e->cmax || (e->call + inC - outC) < 0)
    {
        cout << "Zle zadane udaje!" << endl;
    }
    else
    {
        e->wall = e->wall + inW - outW;
        e->call = e->call + inC - outC;
    }
    cout << "Vo vytahu je/su " << e->call << " clovek/ludia s vahou " << e->wall << " kg." << endl;
}

void pridaj(Elevator *e)
{
    int inC, inW, outC, outW;
    cout << "Nastupili pocet:" << endl;
    cin >> inC;
    cout << "Nastupili vaha:" << endl;
    cin >> inW;
    cout << "Vystupili pocet:" << endl;
    cin >> outC;
    cout << "Vystupili vaha:" << endl;
    cin >> outW;

    upravVytah(e, inC, inW, outC, outW);
}

int main()
{
    Elevator e;
    cout << "Maximalny pocet ludi je " << e.cmax << " a maximalna vaha je " << e.wmax << " kg." << endl;

    int pokracovat = 0;
    do
    {
        pridaj(&e);
        cout << "Chcete pokracovat (Ano = 1/Nie = 0)?" << endl;
        cin >> pokracovat;
    } while (pokracovat == 1);
}