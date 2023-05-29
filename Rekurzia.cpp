#include <iostream>
#include <string>

using namespace std;

int zmena(string *tabulka, int x, int y, int w, int h, string a)
{
    if (x < 0 or x >= w or y < 0 or y >= h or tabulka[y][x] == '#' or tabulka[y][x] == '1')
    {
        for(int y = 0; y < h; y++)
        {
            cout << tabulka[y] << endl;
        }
        return 0;
    }
        tabulka[y][x] = '#';
        int left = zmena(tabulka, x - 1, y, w, h, a);
        int right = zmena(tabulka, x + 1, y, w, h, a);
        int top = zmena(tabulka, x, y - 1, w, h, a);
        int bottom = zmena(tabulka, x, y + 1, w, h, a);

    return 0;
}

        

int main()
{
    int w, h, x, y;
    cin >> w >> h ;

    string *tabulka = new string[h];
    string a;
    for (int i = 0; i < h; i++)
    {
        cin >> tabulka[i];

        if(tabulka[i].find("1") != string::npos)
        {
            x = tabulka[i].find("1");
            y = i;

            a = 1;
        }
        else if(tabulka[i].find("2") != string::npos)
        {
            x = tabulka[i].find("2");
            y = i;

            a = 2;
        }
        else if(tabulka[i].find("3") != string::npos)
        {
            x = tabulka[i].find("3");
            y = i;

            a = 3;
        }
        else if(tabulka[i].find("4") != string::npos)
        {
            x = tabulka[i].find("4");
            y = i;

            a = 4;
        }
    }
    cout << endl;
    cout << zmena(tabulka, x, y, w, h, a) << endl;

    return 0;
}