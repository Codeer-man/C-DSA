#include <iostream>
using namespace std;

// Insertion Sort
// Time complexity O(n^2)

// All the sorting are done in ascending order but if you want to do the sorting in the descending order then you have to change the
// greateter than to smaller than (> to <) and smaller than to greateter than (< to >) to it's requirement

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }

        arr[prev + 1] = curr;
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
    int arr[] = {4, 1, 5, 3, 2}, n = 5;

    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}
