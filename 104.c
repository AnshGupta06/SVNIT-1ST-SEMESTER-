//104) Enumeration with Color Names to Display Hexadecimal Color Code
#include <stdio.h>

// Define an enumeration for color names
enum Color {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    BLACK,
    WHITE
};

int main() {
    enum Color color;
    printf("Enter a color code (0 for RED, 1 for GREEN, 2 for BLUE, 3 for YELLOW, 4 for BLACK, 5 for WHITE): ");
    scanf("%d", &color);

    // Use a switch statement to display the hexadecimal color code
    switch (color) {
        case RED:
            printf("Hexadecimal color code for RED is #FF0000\n");
            break;
        case GREEN:
            printf("Hexadecimal color code for GREEN is #00FF00\n");
            break;
        case BLUE:
            printf("Hexadecimal color code for BLUE is #0000FF\n");
            break;
        case YELLOW:
            printf("Hexadecimal color code for YELLOW is #FFFF00\n");
            break;
        case BLACK:
            printf("Hexadecimal color code for BLACK is #000000\n");
            break;
        case WHITE:
            printf("Hexadecimal color code for WHITE is #FFFFFF\n");
            break;
        default:
            printf("Invalid color code\n");
    }

    return 0;
}