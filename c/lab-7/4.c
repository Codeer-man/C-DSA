

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));  // allocate memory for one integer
    if(ptr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }

    *ptr = 42;  // store value
    printf("The Value is = %d\n", *ptr);

    free(ptr);  // free memory
    return 0;
}
