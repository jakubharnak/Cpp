#include <iostream>

using namespace std;

void selectionSort(int array[], int n, int c)
{
    for (int a = 0; a < n; a++)
    {
        for (int b = a; b < n; b++)
        {
            if (array[a] < array[b])
            {
                c = array[b];
                array[b] = array[a];
                array[a] = c;
            }
        }
    }
}


void printArray(int array[], int count)
{
    for (int a = 0; a < count; a++)
    {
        int premenna = count - 1;
        if (a < premenna)
        {
            cout << array[a] << ", ";
        }
        else
        {
            cout << array[a];
        }
    }
}


int main()
{
    int n, count, array[40], c;

    cin >> n;

    for (int x = 0; x < n; x++)
    {
        cin >> array[x];
    }

    cin >> count;

    selectionSort(array, n, c);

    printArray(array, count);

    return 0;
}