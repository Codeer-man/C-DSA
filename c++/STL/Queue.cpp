#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.emplace(20);
    q.pop();

    queue<int> q2;

    q2.swap(q);

    cout << "Top element of s: " << q.front() << endl;
    cout << "Top element of s2: " << q2.front() << endl;
    cout << "Top element size of s: " << q.size() << endl;
    cout << "Top element size of s2: " << q2.size() << endl;
    return 0;
}