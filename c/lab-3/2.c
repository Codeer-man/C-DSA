// Count Number of Digits of an Integer Using Loop.
#include<stdio.h>

int main(){
    int n,count =0;
    printf("Enter a number: ");

    scanf("%d",&n);

    if(n ==0){
        count =1;
    }else {
        while (n != 0)
        {
            n = n/10;
            count++;
        }
        
    }

    printf("The number has %d digit ",count);

    return 0;
}
