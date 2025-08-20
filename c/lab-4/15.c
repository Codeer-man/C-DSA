// WAP to demonstrate the bubble sort and selection sort.
#include <stdio.h>

int main() {
    int i, j, temp;


    int sel[5] = {22, 3, 6, 23, 7};
    for(i = 0; i < 5 - 1; i++) {
        for(j = i + 1; j < 5; j++) {
            if(sel[i] > sel[j]) { 
                temp = sel[i];
                sel[i] = sel[j];
                sel[j] = temp;
            }
        }
    }

    printf("Selection sort: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", sel[i]);
    }
    printf("\n");


    int bub[5] = {22, 3, 6, 23, 7};
    for(i = 0; i < 5 - 1; i++) {
        for(j = 0; j < 5 - 1 - i; j++) {
            if(bub[j] > bub[j+1]) {  
                temp = bub[j];
                bub[j] = bub[j+1];
                bub[j+1] = temp;
            }
        }
    }

    printf("Bubble sort: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", bub[i]);
    }
    printf("\n");

    return 0;
}
