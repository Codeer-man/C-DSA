// Number Is a Palindrome or Not
#include<stdio.h>

int main(){
    int num,rev=0,rem,original;

    printf("Enter a number: ");
    scanf("%d",&num);

    original = num;
    while (num != 0)
    {
        rem = num%10;
        rev= rev * 10 + rem;
        num =num/10;
    }
    
    if(original == rev){
        printf("The number is palindrom");
    }else {
        printf("The number is not a palindrom");
    }
    return 0;
}