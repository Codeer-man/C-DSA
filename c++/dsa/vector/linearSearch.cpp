#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int target = 6;
    vector<int> nums = {5,2, 4,  8};
    int ans = 0;
    for (int i=0; i <=2;i++)
    {
        ans = nums[i] + nums[i+1];
        if(ans == target){
            cout << "num[" << i <<"] and nums[" << i+1 <<"] is" << ans;
            break;
        }
    }
    return 0;
}