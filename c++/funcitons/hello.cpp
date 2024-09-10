#include <iostream>
using namespace std;

// min 0f two
int min(int a, int b) // parameters
{
    if (a < b)
    {
        return a;
    }
    else
    {
       return b;

    }
}
int main()
{
    cout << min(1, 4) << endl; //arguments

    return 0;
}