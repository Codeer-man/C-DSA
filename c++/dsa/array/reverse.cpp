#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0, end = n - 1;

    while (start < end)
    {
        int temp = arr[start];
        arr[end] = arr[start];
        arr[end] = temp;

        start++;
        end--;
    }
}

int reverseMinMax()
{
    int arr[] = {4, 3, 7, 8, 1, 2, 5}, smallest = arr[0], largest = arr[0];
    int largestIndex;
    int smallestIndex;

    for (int i = 1; i < 7; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
        if (arr[i] < smallest)
        {
            largest = arr[i];
            smallestIndex = i;
        }
    }

    swap(arr[largestIndex], arr[smallestIndex]);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

int main()
{
    int arr[] = {4, 3, 7, 8, 1, 2, 5};
    int n = 7;
    reverse(arr, n);

    reverseMinMax();
    return 0;
}