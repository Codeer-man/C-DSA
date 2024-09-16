#include <iostream>
#include <vector>
using namespace std;

void Vecfunction()
{
    vector<int> vec = {1, 2, 3};

    // size of vector
    cout << "size = " << vec.size() << endl;

    // push_back helps to add element or index to vector
    vec.push_back(4);
    cout << "size after push_back= " << vec.size() << endl;

    // pop_back removes last element or index from vector
    vec.pop_back();
    cout << "size after pop_back= " << vec.size() << endl;

    // front and back function helps to display the first and last elements
    cout << "First element = " << vec.front() << endl;
    cout << "Last element = " << vec.back() << endl;

    // at function helps to display the element that we want to display
    cout << "at function=   "<< vec.at(0) << endl;
    cout << "Capacity of vector=   "<< vec.capacity() << endl; // capacity will be double the size of the vector when the size is increased
     
    for (int val : vec)
    {
        cout << val << " ";
    }
    getchar();
}

int main()
{
    

    Vecfunction();
    return 0;
}
