#include <iostream>
using namespace std;

int main()
{
    int i, n;
    bool isprime = true;

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
                isprime = false;
            }
        }
    }
    if (isprime)
    {
        cout << "The enterd number is Prime number";
    }
    else
    {
        cout << "The enterd number is not a Prime number number";
    }
}
