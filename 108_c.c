#include <stdio.h>

// Function to concatenate two strings
void concatStrings(char *str1, char *str2) {
    while (*str1) {
        str1++;
    }
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0'; // Null-terminate the concatenated string
}

int main() {
    char str1[100] = "Hello, ";
    char str2[] = "World!";

    // Call the function to concatenate the strings
    concatStrings(str1, str2);

    // Print the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}