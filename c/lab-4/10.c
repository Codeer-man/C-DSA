//WAP to get 20 numbers from user and count the number of even and odd numbers.

#include<stdio.h>
int main(){
    int num[20],i,even=0,odd=0;

    printf("Enter 20 number");
    for(i=0;i< sizeof(num)/4;i++){
        scanf("%d",&num[i]);
        if(num[i]%2 == 0){
            even++;
        }else{
            odd++;
        }
    }

    printf("There are %d odd and %d even",odd,even);

    return 0;
}