#include <stdio.h>

// Function to modify the value of a variable using a pointer
void modifyValue(int *ptr) {
    *ptr = 20; 
}

int main() {
    int var = 10;
    int *ptr = &var; // Initialize the pointer with the address of the variable

    printf("Before modification: %d\n", var);

    // Call the function to modify the value
    modifyValue(ptr);

    printf("After modification: %d\n", var);

    return 0;
}