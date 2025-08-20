// WAP to accept a 3x3 matrix and display the sum of all elements
#include <stdio.h>

int main() {
    int mat[3][3];
    int i, j, sum = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j]; 
        }
    }

    printf("\nMatrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements = %d\n", sum);

    return 0;
}
