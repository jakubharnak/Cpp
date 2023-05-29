#include <iostream>

using namespace std;

int main()
{
    int a = 0, b = 0;

    int m, n;
    cin >> m >> n;

    int mask = 0b10000000;

    for (int i = 0; i < 8; i++){
        if(((m & (mask >> i)) > 0) == 1){
            a += 1;
        }
        if(((n & (mask >> i)) > 0) == 1){
            b += 1;
        }
    }
    if (a > b)  cout << m << endl;
    
    else if (a < b) cout << n << endl;
    
    else  cout << "zhoda" << endl;

    return 0;	
}
