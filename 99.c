#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch;
    int vowelCount = 0;

    // Open the file in read mode
    file = fopen("hello.txt", "r");

    // Check if the file opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Read each character from the file until EOF
    while ((ch = fgetc(file)) != EOF) {
        // Convert character to lowercase to make vowel checking case-insensitive
        ch = tolower(ch);

        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowelCount++;
        }
    }

    // Close the file
    fclose(file);

    // Output the result
    printf("Number of vowels in the file: %d\n", vowelCount);

    return 0;
}
