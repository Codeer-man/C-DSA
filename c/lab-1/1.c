//Write a program to input necessary data and display the simple interest. 

#include <stdio.h>

int main() {
    int p,t,r;
    
    printf("Enter Principal,Time and Rate respectively: ");
    scanf("%d %d %d",&p,&t,&r);

    printf("The simple interest is %d",(p*t*r)/100);

    return 0;
}