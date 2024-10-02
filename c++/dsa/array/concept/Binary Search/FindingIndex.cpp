#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {-1, 0, 3, 4, 5, 9, 12};
    int target = 12;

    int st = 0;
    int end = vec.size() - 1;

    while (st <= end)   
    {
        int mid = st + (end - st) / 2;
        if (vec[mid] < target)
        {
            st = mid + 1;
        }
        else if (vec[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            cout << mid;
            break;
        }
    }
    return 0;
}