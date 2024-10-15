#include <iostream>
#include <vector>
using namespace std;

bool isvalid(int mid, vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages += arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true;
}
int allocateBook(vector<int> &arr, int m, int n)
{
    if (m > n)
    {
        return -1; // Not possible to allocate the books
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum, st = 0;

    int ans = -1;
    while (sum <= end)
    {
        int mid = st + (end - st) / 2;
        if (isvalid(mid, arr, n, m, mid)) // lef
        {
            ans = mid;
            end = mid - 1;
        }
        else // right
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 1, 3, 4};
    int n = 4, m = 2;

    cout << allocateBook(arr, m, n) << endl;
    return 0;
}