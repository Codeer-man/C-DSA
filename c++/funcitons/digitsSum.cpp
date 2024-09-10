#include <iostream>
using namespace std;

int sum(int num)
{
    int dignum = 0;
    while (num > 0)
    {
        int lastdig = num % 10;
        num /= 10;

        dignum += lastdig;
    }
        return dignum;
}

int main()
{
    cout << sum(123) << endl;
    return 0;
}