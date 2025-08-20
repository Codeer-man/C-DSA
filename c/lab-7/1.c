//WAP to demonstrate the concept of pointer arithmetics. 

#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;

    printf("Pointer points to address: %p, value: %d\n", p, *p);
    p++;  
    printf("After p++, pointer points to address: %p, value: %d\n", p, *p);

    return 0;
}

