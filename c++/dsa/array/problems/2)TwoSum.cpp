#include <iostream>
#include <vector>
using namespace std;

vector<int> TwoSum(vector<int> &nums, int target)
{

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return {i, j};
            }
        }
    }
    return {};
}

int main()
{
    vector<int> nums = {2, 4, 7, 9, 3};
    int target = 6;

    vector<int> result = TwoSum(nums, target);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}