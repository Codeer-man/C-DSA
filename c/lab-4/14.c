//WAP to input a string and reverse it without using library function.
#include <stdio.h>

int main() {
    char str[100];  // array to store the string
    int i, length = 0, temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // read string including spaces

    // Calculate string length
    for(i = 0; str[i] != '\0'; i++) {
        length++;
    }

    // Reverse the string by swapping charactersman
    for(i = 0; i < length/2; i++) {
        temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
