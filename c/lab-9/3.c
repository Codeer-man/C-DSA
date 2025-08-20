/*
Open a file source.txt in read mode.
Create another file destination.txt.
Copy the contents of source.txt into destination.txt.

*/

#include<stdio.h>

int main(){

    FILE *src,*dest;
    char ch;

    src = fopen("source.txt","r");
    if(src == NULL){
        printf("The File does not exist");
        return 1;
    }

    dest = fopen("dest.txt","w+");
      if(dest == NULL){
        printf("The File does not exist");
        return 1;
    }

     while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

     printf("File copied successfully!\n");

    fclose(src);

    rewind(dest);

    while ((ch = fgetc(dest)) != EOF) {
        putchar(ch);
    }
    
    fclose(dest);

    return 0;
}