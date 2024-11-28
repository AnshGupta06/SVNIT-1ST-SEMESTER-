#include <stdio.h>

// Function to copy one string into another
void copyString(char *source, char *destination) {
    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Null-terminate the destination string
}

int main() {
    char source[] = "Hello, World!";
    char destination[100];

    // Call the function to copy the string
    copyString(source, destination);

    // Print the copied string
    printf("Copied string: %s\n", destination);

    return 0;
}