#include <stdio.h>

// Define a macro to find the biggest number of two given numbers
#define BIGGEST(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Use the macro to find the biggest number
    int biggest = BIGGEST(num1, num2);
    printf("The biggest number is: %d\n", biggest);

    return 0;
}