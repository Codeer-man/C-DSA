#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;  // 1 and below are not prime numbers
    for (int i = 2; i < num; i++) {
        if (num % i == 0) return false;  // Found a divisor, not prime
    }
    return true;  // No divisors found, number is prime
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers up to " << n << " are: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    return 0;
}
