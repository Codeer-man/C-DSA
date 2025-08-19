// Find the Number Is Armstrong or Not Using While Loop.
#include<stdio.h>
#include<math.h>

int main(){
    int num,armStr =0,temp,original,rem;
    int digit = 0;
    printf("Enter a number: ");
    scanf("%d",&num);


    temp= num;
    while (temp != 0)
    {   
        temp = temp/10;
        digit++;
    }
   
    original = num;
    while (num !=0)
    {
        rem = num%10;
        armStr += pow(rem,digit);
        num=num/10;
    }
    
    if(armStr == original){
        printf("The number is ArmStrong");
    }else{
        printf("The number is not ArmString");
    }

    return 0;
}