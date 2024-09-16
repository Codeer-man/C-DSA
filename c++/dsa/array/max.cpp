#include <iostream>
using namespace std;

int main()
{
    int num[5] = {5, 22, 24, -15, 1};
    int i, largest = 0;
    int index = 0;

    for (i = 0; i < 5; i++)
    {
        if (num[i] > largest)
        {
            largest = num[i];
            index = i;
        }
    }
    cout << "The largest number is " << largest;
    cout << "The smallest index is num[" << index << "]" << endl;

    return 0;
}