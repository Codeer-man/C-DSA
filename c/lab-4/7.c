// WAP to multiply two 2x2 matrices.
#include<stdio.h>

int main(){
    int matrix1[2][2] = {{2, 3}, {3, 4}};
    int matrix2[2][2] = {{3, 5}, {4, 2}};
    int result[2][2];
    int i, j, k;

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            for(k=0;k<2;k++){
                result[i][j] += matrix1[i][k] * matrix2[j][j];
            }
        }
    }

     printf("Resultant Matrix (Multiplication):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}