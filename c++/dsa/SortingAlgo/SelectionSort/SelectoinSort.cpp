#include <iostream>
using namespace std;

// Selection sort
// Time Complexity  O(n^2)
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallestIndex] > arr[j])
                smallestIndex = j;
        }
        swap(arr[i], arr[smallestIndex]);
    }
}
void printSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[5] = {4, 1, 5, 2, 3};
    int n = 5;

    SelectionSort(arr, n);
    printSort(arr, n);
    return 0;
}