#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Vector declaration and initialization
    vector<int> vec = {1, 2, 3, 4, 5};

    // Time complexity of O(1)

    // size() - O(1): Returns the number of elements in the vector
    cout << "Size: " << vec.size() << endl;

    // capacity() - O(1): Returns the current allocated space for elements
    cout << "Capacity: " << vec.capacity() << endl;

    // push_back() - O(1) amortized: Adds an element at the end of the vector
    vec.push_back(6);
    cout << "After push_back: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // pop_back() - O(1): Removes the last element from the vector
    vec.pop_back();
    cout << "After pop_back: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // emplace_back() - O(1) amortized: Constructs and adds an element at the end
    vec.emplace_back(7);
    cout << "After emplace_back: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // at() - O(1): Accesses the element at the specified index with bounds checking
    cout << "Element at index 2: " << vec.at(2) << endl;

    // front() - O(1): Returns the first element of the vector
    cout << "First element: " << vec.front() << endl;

    // back() - O(1): Returns the last element of the vector
    cout << "Last element: " << vec.back() << endl;
    cout << endl;

    // Time complexity of O(n)

    // erase() - O(n): Removes an element at a specified position or range
    vec.erase(vec.begin() + 2); // Removes the element at index 2
    cout << "After erase at index 2: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // insert() - O(n): Inserts an element at a specified position
    vec.insert(vec.begin() + 1, 9); // Inserts 9 at index 1
    cout << "After insert at index 1: ";
    for (int i : vec)
        cout << i << " ";
    cout << endl;

    // clear() - O(n): Removes all elements from the vector
    vec.clear();
    cout << "After clear, size: " << vec.size() << endl;

    // empty() - O(1): Checks whether the vector is empty
    cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << endl;

    return 0;
}
