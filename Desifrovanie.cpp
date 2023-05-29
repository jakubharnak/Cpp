#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Pair
{
    char from_symbol;
    char to_symbol;
};

string Substitution(vector<Pair> map, string text)
{
    string result = "";

    for (int i = 0; i < text.length(); i++)
    {
        char character = text[i];

        bool found = false;

        for (int j = 0; j < map.size(); j++)
        {
            if (map[j].from_symbol == character)
            {
                result += map[j].to_symbol;
                found = true;
                break;
            }
        }
        if (!found)
        {
            result += character;
        }
    }
    return result;
}

int main()
{
    int substitutions;
    string text;
    vector<Pair> map = vector<Pair>();

    cin >> substitutions;

    for (int i = 0; i < substitutions; i++)
    {
        char fron_symbol, to_symbol;
        cin >> to_symbol >> fron_symbol;
        map.push_back(Pair{fron_symbol, to_symbol});
    }
    getline(cin, text);
    getline(cin, text);

    cout << Substitution(map, text);

    return 0;
}