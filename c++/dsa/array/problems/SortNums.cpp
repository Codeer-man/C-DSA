#include <iostream>
using namespace std;

// sort of array of 0s,1s,2s
// Time complexity of O(n)
void Sort(int nums[], int n)
{
    int low = 0, mid = 0, h = n - 1;

    while (mid <= h)
    {
        if (nums[mid] == 0)
        {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[h], nums[mid]);
            h--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main()
{
    int nums[] = {2, 0, 2, 1, 1, 0};
    int n = sizeof(nums) / sizeof(nums[0]);

    Sort(nums, n);
    return 0;
}
