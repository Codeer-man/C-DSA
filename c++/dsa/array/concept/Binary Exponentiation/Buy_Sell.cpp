// buying and selling stocks
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0, bestPrice = INT_MAX;

    for (int i = 0; i < prices.size(); i++)
    {
        bestPrice = min(bestPrice, prices[i]);
        maxProfit = max(maxProfit, prices[i] - bestPrice);
    }
    cout << "Maximum Profit: " << maxProfit << endl;
    return 0;
}