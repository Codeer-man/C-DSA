// Write a C program to check whether a given number is positive, negative, or zero using if-else statements.

#include <stdio.h>

int main(){
    int i;

    printf("Enter a number: ");
    scanf("%d",&i);

    if(i < 0){
        printf("The nubmer %d is negative",i);
    }else if(i>0){
        printf("The nubmer %d is positive",i);
    }else {
        printf("The nubmer %d is zero",i);
    }

    return 0;
}