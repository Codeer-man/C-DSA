// WAP to search an integer in an array of 10 integers.
#include<stdio.h>

int main(){
    int num[10]= {3,4,6,34,45,34,76,56,2,34};
    int search,i;

    printf("Enter a number: ");
    scanf("%d",&search);

    for(i=0;i<10;i++){
        if(search == num[i]){
            printf("The num you searched exist");
            return 1;
        }
    }
    printf("The num you searched doesnot exist");


    return 0;
}