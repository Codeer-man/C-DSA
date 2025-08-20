//WAP to input a sentence and display the number of words.
#include <stdio.h>

int main() {
   char str[200];
    int i, words = 0;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin); 

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            words++;
        }
    }
    // words++;

    printf("Total words = %d\n", words);

    return 0;
}