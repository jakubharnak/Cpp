#include <iostream>
#include <string>

using namespace std;

int main()
{
    int w, h;
    cout << "Set width:" << endl;
    cin >> w;
    cout << "Set height:" << endl;
    cin >> h;

    cout << "Set the shape" << endl;
    string t;
    int number_sheep = 0;
    for (int i = 0; i <= h; i++)
    {
        getline(cin, t);
        t = t.substr(0, w);
        int first = t.find("*"), last = t.find_last_of("*");
        if (first != last)
        {
            int count = 0;

            for (int j = first + 1; j < last; j++)
            {
                if (t[j] == '*')
                {
                    ++count;
                }
            }
            //pocet oveciek zvysime o rozdiel pozicia krajov (ale musime odcitat 1) a op pocet * medzi krajmi ohrady
            number_sheep = number_sheep + last - first - 1 - count;
        }
    }
    cout << "The number of sheep is:" << endl;
    cout << number_sheep;
    return 0;
}