//WAP to input a string and display whether it is palindrome or not.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], rev[100];
    int i, j, len;

    printf("Enter a word: ");
    scanf("%s", str);

    len = strlen(str);

    // Reverse the string
    for (i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }
    rev[len] = '\0';  // null terminate

    // Compare original and reversed
    if (strcmp(str, rev) == 0) {
        printf("It is a palindrome\n");
    } else {
        printf("Not a palindrome\n");
    }

    return 0;
}
