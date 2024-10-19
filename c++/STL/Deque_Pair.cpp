#include <iostream>
#include <deque>
using namespace std;

int main()
{
    // deque and list are same except for a deque and a list in C++ is that a deque (double-ended queue) allows fast insertion and deletion
    // at both ends with random access to elements, while a list only allows fast insertion and deletion at both ends and in the middle but
    // does not support random access (sequential access only).

    deque<int> d = {2, 3, 4};

    cout << d[1];
    deque<pair<int, int>> deq = {{1, 2}, {2, 3}, {3, 4}};

    deq.emplace_back(4, 5); // inplace object create

    for (auto val : deq)
    {
        cout << val.first << " " << val.second << endl;
    }

    return 0;
}