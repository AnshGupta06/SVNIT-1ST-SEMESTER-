#include<stdio.h>
#include<string.h>
char string_length(char *str) {
    int length=0;
    while (*str!='\0') {
        length++;
        str++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s",&str);
    printf("The length of the string is %d",string_length(str));
    return 0;
}
