#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // Adds 3 at the end of the list
    l.push_back(3);
    cout << "After push_back(3): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    // Adds 2 at the front of the list
    l.push_front(2);
    cout << "After push_front(2): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    // Constructs and adds 4 at the end of the list
    l.emplace_back(4);
    cout << "After emplace_back(4): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    // Constructs and adds 1 at the front of the list
    l.emplace_front(1);
    cout << "After emplace_front(1): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    // Removes the last element from the list
    l.pop_back();
    cout << "After pop_back(): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    // Removes the first element from the list
    l.pop_front();
    cout << "After pop_front(): ";
    for (int val : l)
        cout << val << " ";
    cout << endl;

    return 0;
    // size,erase,clear,begin,end,rend,rbegin,insert,font,back these function works same like vector functions
}
