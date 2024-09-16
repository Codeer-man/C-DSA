#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int CS = 0, MaxSum = INT_MIN;

    for (int val : vec)
    {
        CS += val;
        MaxSum = max(CS, MaxSum);
        if (CS < 0)
        {
            CS = 0;
        }
    }
    cout << MaxSum;
    return 0;
}