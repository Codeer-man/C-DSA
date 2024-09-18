#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 5, 2, 3, 2, 5, 2, 6, 2};
    int n = nums.size();
    int freq = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    cout << ans;
    return 0;
}