// WAP to sort the integers of an array in ascending order.
#include<stdio.h>

int main(){
    int array[6]= {12,34,7,4,2,44},i,temp,j;
     int n = sizeof(array) / sizeof(array[0]);

       for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
        printf("The asc sort: ");
     for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    return 0;
}