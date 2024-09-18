// Finding maximum sum of a array

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, -10, 4, 7, 3,-14,56,-14};
    int n = nums.size();

    int maxsum = INT_MIN;
    int sum = 0;

    for (int val : nums)
    {
        sum += val;
        maxsum = max(sum,maxsum);
        if(sum < 0){
            sum = 0;
        } 
    }
    cout << maxsum;

    return 0;
}