// WAP to input a string and count the number of vowels and consonants.
#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char str[200];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // read full line

    for (i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);  // make lowercase for easy comparison
        if (ch >= 'a' && ch <= 'z') {   // check if alphabet
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
