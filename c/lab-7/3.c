//WAP to create an array of pointers.

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *ptrArr[3];  // array of 3 integer pointers

    // Assign addresses to the pointer array
    ptrArr[0] = &a;
    ptrArr[1] = &b;
    ptrArr[2] = &c;

    // Access values using pointer array
    for (int i = 0; i < 3; i++) {
        printf("Value at ptrArr[%d] = %d\n", i, *ptrArr[i]);
    }

    return 0;
}
