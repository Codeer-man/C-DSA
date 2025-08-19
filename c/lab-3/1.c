// WAP to reverse a Given Number Using looping

#include <stdio.h>

int main(){

    int num[5],i,temp;
    int size = sizeof(num)/4;

    printf("Enter 5 numbers: ");

    for(i=1;i<=size;i++){
        scanf("%d",&num[i]);
    };

    for(i=size;i>0;i--){
        printf("%d,",num[i]);
    }


    return 0;
}