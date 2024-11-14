#include<stdio.h>
char check_vowel(char a) {
    if (a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U') {
        printf("The entered character is a vowel");
    }
    else {
        printf("The entered character is not a vowel");
    }
}
int main() {
    char a;
    printf("Enter a character: ");
    scanf("%c",&a);
    check_vowel(a);
    return 0;
}
