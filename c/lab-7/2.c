//WAP to demonstrate the concept of passing pointer to a function.

#include <stdio.h>

// Function to increment the value using pointer
void increment(int *p) {
    *p = *p + 1;
}

int main() {
    int x = 5;
    printf("Before function call: x = %d\n", x);

    increment(&x);  // passing pointer to the function

    printf("After function call: x = %d\n", x);
    return 0;
}
