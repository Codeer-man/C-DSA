//Display Fibonacci Series. (0,1,1,2,3,5,8,13, … )
#include<stdio.h>


int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);

    int t1=0,t2=1,nextTerm;

    for(i=0;i<n;i++){
        printf("%d",t1);
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}