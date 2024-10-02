#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};

    int count = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i < nums.size() - 1 && nums[i] == nums[i + 1])
        {
            continue;
        }
        else
        {
            int ver = nums[i];
            count++;
            cout << ver;
        }
    }
    cout << endl;
    cout << count;

    return 0;
}