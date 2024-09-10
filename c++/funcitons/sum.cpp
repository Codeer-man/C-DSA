#include <iostream>
using namespace std;

int sumOfNum(int n)
{
    int i;
    int sum = 1;

    for (i = 1; i <= n; i++)
    {
        sum = sum*i;
    }
        return sum;
}

int main()
{
    cout << sumOfNum(5) << endl;
    return 0;
}