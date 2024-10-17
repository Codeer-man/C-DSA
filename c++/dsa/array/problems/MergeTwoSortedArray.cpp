// Merge @ sorted array
#include <iostream>
using namespace std;
void merge(int A[], int B[], int m, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;

    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[idx--] = A[i--];
        }
        else
        {
            A[idx--] = B[j--];
        }
    }
    while (j >= 0)
    {
        A[idx--] = B[j--];
    }

    for (int i = 0; i < m + n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{
    int A[] = {1, 2, 3, 0, 0, 0}, m = 3;
    int B[] = {2, 5, 6}, n = 3;

    merge(A, B, m, n);
    return 0;
}