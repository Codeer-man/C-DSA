#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int n = 4;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << '*';
        }

        for (j = 0; j < 2 * (n - i - 1); j++)
        {
            cout << ' ';
        }
        for (j = 0; j <= i; j++)
        {
            cout << '*';
        }

        cout << endl;
    }

    // lower butterfly
    for (i = 0; i < n; i++)
    {
        for (j = n-i; j >= 1; j--)
        {
            cout << '*';
        }

        for (j = 2; j <  2*i+2; j++)
        {
            cout << ' ';
        }
        for (j = n-i; j >= 1; j--)
        {
            cout << '*';
        }

        cout << endl;
    }

    return 0;
}