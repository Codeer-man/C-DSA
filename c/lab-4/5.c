// WAP to create and display a 2x2 matrix.
#include<stdio.h>

int main(){
    int matrix[2][2] = {{2,3},{3,4}},i,j;

    for(i =0;i<2;i++){
        for(j=0;j< 2;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    


    return 0;
}