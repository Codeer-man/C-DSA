#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    // int num = 1;
    cout << "Enter a number: ";
    cin >> n;
    char num = 'A';

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }
}