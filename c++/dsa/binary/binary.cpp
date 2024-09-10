#include <iostream>
using namespace std;

int main()
{
    int i, n = 5, j = 0, result = 0, pow = 1;

    while (n > 0)
    {
        int rem = n % 2;
        n /= 2;
        result += (rem * pow);
        pow *= 10;
    }
    cout << result ;
    return 0;
}