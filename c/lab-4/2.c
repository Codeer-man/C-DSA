// WAP to find the sum of all the integers of an array.

#include<stdio.h>

int main(){
    int array[5]= {12,34,7,4,7};
    int i,sum=0;

    for(i=0;i<5;i++){
        sum += array[i];
    }

    printf("The sum is %d",sum);

    return 0;
}