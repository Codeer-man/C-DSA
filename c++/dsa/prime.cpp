#include <iostream>
using namespace std;

int main()
{
    int i, n;
    int count = 0;

    cout << "Enter a number";
    cin >> n;

    if (n < 1)
    {
        cout << "Enter a number above 1";
    }
    else
    {
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                count++;
                break;
            }
        }
    }
    if (count == 1)
    {
        cout << "The enterd number is Prime";
    }
    else
    {
        cout << "The enterd number is not a Prime number";
    }
}