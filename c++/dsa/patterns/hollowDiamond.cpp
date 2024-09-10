#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 4;

    // Upper part of the diamond
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << '*';
        if (i != 0)
        {
            for (j = 0; j < 2 * i - 1; j++)
            {
                cout << ' ';
            }
            cout << '*';
        }
        cout << endl;
    }

    // Lower part of the diamond
    for (i = 1; i < n; i++)  
    {
        for (j = 0; j < i; j++)
        {
            cout << ' ';
        }
        cout << '*';
        if (i != n - 1)
        {
            for (j = 0; j < 2 * (n - i - 1) - 1; j++)  
            {
                cout << ' ';
            }
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
