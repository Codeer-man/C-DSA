#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector Iteration
    // .begin()  choose the first iterator
    // .end()  choose the last iterator

    
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6};

    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}