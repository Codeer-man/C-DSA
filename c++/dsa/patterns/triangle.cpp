#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter a number: ";
    cin >> n;
    int num = 1;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << num;
            num++;
           
        }
        cout << endl;
    }

    return 0;
}