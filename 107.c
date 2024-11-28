#include <stdio.h>
#include <math.h>

// Function to flip the last N digits of a number
int flip(int num, int n) {
    int divisor = pow(10, n);
    int lastNDigits = num % divisor;
    int remainingDigits = num / divisor;

    int flippedLastNDigits = 0;
    while (lastNDigits > 0) {
        flippedLastNDigits = flippedLastNDigits * 10 + lastNDigits % 10;
        lastNDigits /= 10;
    }

    return remainingDigits * divisor + flippedLastNDigits;
}

int main() {
    int num, n;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the number of digits to flip: ");
    scanf("%d", &n);

    // Call the function to flip the last N digits
    int result = flip(num, n);
    printf("Result after flipping the last %d digits: %d\n", n, result);

    return 0;
}