/*  
    Write a program to 
Create a file named data.txt.
Accept a string from the user and write it to the file.
Read the contents of the file and display them on the console.
*/ 

#include<stdio.h>

int main(){
    FILE *fptr ;
    fptr = fopen("data.txt","w+");
    char str[100];
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    fprintf(fptr,"%s",str);

    rewind(fptr);

     char ch;
    printf("\nfile data:\n");
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr);

    return 0;
}
