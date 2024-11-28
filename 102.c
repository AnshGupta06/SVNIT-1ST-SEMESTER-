#include <stdio.h>
#include <ctype.h>

// Function to count characters, words, and lines in a file
void countFileContents(FILE *file, int *charCount, int *wordCount, int *lineCount) {
    char ch;
    *charCount = *wordCount = *lineCount = 0;
    int inWord = 0;

    while ((ch = fgetc(file)) != EOF) {
        (*charCount)++;
        if (ch == '\n') {
            (*lineCount)++;
        }
        if (isspace(ch)) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            (*wordCount)++;
        }
    }
}

int main() {
    FILE *file = fopen("textfile.txt", "r");
    if (file == NULL) {
        printf("Could not open file.\n");
        return 1;
    }

    int charCount, wordCount, lineCount;

    // Call the function to count characters, words, and lines
    countFileContents(file, &charCount, &wordCount, &lineCount);

    printf("Number of characters: %d\n", charCount);
    printf("Number of words: %d\n", wordCount);
    printf("Number of lines: %d\n", lineCount);

    fclose(file);
    return 0;
}