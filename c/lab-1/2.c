// Write a program to input length and breadth of a rectangle and display its area.

#include <stdio.h>

int main() {
    int l,b;
    
    printf("Enter length and breath respectively: ");
    scanf("%d %d",&l,&b);

    printf("The area is %d",l*b);

    return 0;
}