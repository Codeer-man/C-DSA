#include <iostream>
#include <stack>
using namespace std;

// Last In First Out LIFO

int main()
{
    stack<int> s;

    s.push(1);
    s.emplace(2);
    s.pop();

    stack<int> s2;

    s2.swap(s);

    cout << "Top element of s: " << s.top() << endl;
    cout << "Top element of s2: " << s2.top() << endl;
    cout << "Top element size of s: " << s.size() << endl;
    cout << "Top element size of s2: " << s2.size() << endl;
    return 0;
}