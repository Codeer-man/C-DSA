// WAP to input any five integers in an array and display the largest one.
#include<stdio.h>

int main(){
    int num[5],largest=0,i;

    printf("Enter 5 number");
    for(i=0;i<5;i++){
        scanf("%d",&num[i]);
        if(largest < num[i]){
            largest = num[i];
        }
    }
    printf("The largest num is %d",largest);

    return 0;

}