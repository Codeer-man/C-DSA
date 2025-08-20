/*
Open a file in read mode.
Search for a specific word entered by the user.
Replace the word with another word specified by the user.
Save the modified content in a new file.

*/

#include <stdio.h>
#include <string.h>

int main() {
    FILE *src, *dest;
    char text[1000], word[50], replace[50];
    char *pos;

    src = fopen("source.txt", "r");
    if (src == NULL) {
        printf("Error: source.txt not found.\n");
        return 1;
    }

    // read whole file into text
    fread(text, sizeof(char), sizeof(text), src);
    fclose(src);

    printf("Enter word to search: ");
    scanf("%s", word);

    printf("Enter replacement word: ");
    scanf("%s", replace);

    // open destination file
    dest = fopen("dest.txt", "w");
    if (dest == NULL) {
        printf("Error: cannot create dest.txt\n");
        return 1;
    }

    // replace all occurrences
    pos = text;
    while ((pos = strstr(pos, word)) != NULL) {
        *pos = '\0';
        fprintf(dest, "%s%s", text, replace);
        pos += strlen(word);
        strcpy(text, pos);
        pos = text;
    }
    fprintf(dest, "%s", text);

    fclose(dest);

    printf("Word replaced and saved to dest.txt\n");
    return 0;
}
