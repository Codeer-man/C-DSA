#include <iostream>
using namespace std;

// Bubble sort
// Time Complexity  O(n^2)

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
        {
            break;
        }
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3}, n = 5;

    BubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}