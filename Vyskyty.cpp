#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    string text, query;
    std::getline(cin, text);
    cin >> query;

    while (text.find(query, i) != string::npos)
    {
        cout << text.find(query, i) << endl;
        i = (text.find(query, i) + (query.size() - 1));
    }
    return 0;
}