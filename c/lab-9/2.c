/*
Open an existing text file.
Count and display the total number of words and lines in the file.

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fptr;
    char ch;
    int words = 0, lines = 1, inWord = 0;

    fptr = fopen("data.txt", "r");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        if (ch == '\n') {
            lines++;   // count line
        }

        if (isspace(ch) || ch == '\n' || ch == '\t') {
            inWord = 0;  
        } else if (inWord == 0) {
            inWord = 1; 
            words++;
        }
    }

    fclose(fptr);

    printf("Total lines: %d\n", lines);
    printf("Total words: %d\n", words);

    return 0;
}
