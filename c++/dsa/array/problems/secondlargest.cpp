#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    if (arr.size() < 2) return -1; // If there are fewer than 2 elements, return -1.

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            secondLargest = largest; // Update second largest.
            largest = num; // Update largest.
        } else if (num > secondLargest && num != largest) {
            secondLargest = num; // Update second largest if it's smaller than largest and not a duplicate.
        }
    }

    return (secondLargest == INT_MIN) ? -1 : secondLargest; // Return -1 if no second largest found.
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int result = findSecondLargest(arr);

    if (result == -1) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
