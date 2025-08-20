//WAP to enter a name and display the total number of characters in the name.
#include<stdio.h>
#include<string.h>

int main(){
    char c[100];
    int len;
    printf("Enter a word");
    scanf("%s",c);
    len = strlen(c);

    printf("The length of the word is %d",len);

    return 0;
}