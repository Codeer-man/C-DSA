// WAP to find the sum of all the even integers of an array


#include<stdio.h>

int main(){
    int array[6]= {12,34,7,4,2,34};
    int i,sum=0;

    for(i=0;i<sizeof(array)/4;i++){
        if(array[i]%2 == 0 ){

            sum += array[i];
        }
    }

    printf("The sum even num is %d",sum);

    return 0;
}