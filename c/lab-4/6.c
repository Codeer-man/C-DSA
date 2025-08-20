// WAP to add two 2x2 matrices.
#include<stdio.h>

int main(){
     int matrix1[2][2] = {{2,3},{3,4}},i,j;
     int matrix2[2][2] = {{3,5},{4,2}};
    int result[2][2];

     for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
     }

      printf("Resultant Matrix: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

     return 0;
}