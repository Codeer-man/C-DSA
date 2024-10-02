#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int> &arr)
{
    int st = 0, end = arr.size() - 1;

    while (st < end)
    {
        int mid = st + (end - st) / 2;

        // Check if the middle element is greater than its neighbors
        if (arr[mid] < arr[mid + 1])
        {
            // We are in the increasing part, so move the start to mid + 1
            st = mid + 1;
        }
        else
        {
            // We are in the decreasing part, move the end to mid
            end = mid;
        }
    }
    return st;
}

int main()
{
    vector<int> arr = {0, 3, 5, 7, 4, 2, 1};

    cout << "Peak index: " << peakIndexInMountainArray(arr) << endl;
}
