#include <iostream>
#include <vector>
using namespace std;

bool isValid(int mid, vector<int> &arr, int n, int m)
{
    int worker = 1, time = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > mid)
        {
            return false;
        }
        if (arr[i] + time <= mid)
        {
            time += arr[i];
        }
        else
        {
            worker++;
            time = arr[i];
        }
    }
    return worker <= m; // We can use m or fewer workers, so return true if workers <= m.
}

int minTimeToPaint(vector<int> &arr, int n, int m)
{
    if (m > n)
        return -1;

    // Calculate the sum of all elements and find the max element
    int sum = 0, maxValue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        maxValue = max(maxValue, arr[i]);
    }

    // Binary search between the max value and the total sum
    int st = maxValue, end = sum, ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(mid, arr, n, m))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {40, 30, 10, 20};
    int n = arr.size(), m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}
