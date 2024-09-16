#include <iostream>
using namespace std;

int add()
{
    int arr[] = {4, 3, 7, 8, 1, 2, 5}, sum = 0;

    for (int i = 0; i < 7; i++)
    {
        sum += arr[i];
    }
    cout << sum << endl;
    return 0;
}

int product()
{
    int arr[] = {4, 3, 7, 8, 1, 2, 5}, pro = 1;

    for (int i = 0; i < 7; i++)
    {
        pro *= arr[i];
    }
    cout << pro;
    return 0;
}

int main()
{

    add();
    product();

    return 0;
}