#include <stdio.h>
#include <string.h>
typedef struct {
    char title[100];
    char author[100];
    int publicationYear;
    float price;
} Book;
void readBookInfo(Book *book) {
    printf("Enter book title: ");
    scanf("%s", book->title);
    printf("Enter author's name: ");
    scanf("%s", book->author);
    printf("Enter publication year: ");
    scanf("%d", &book->publicationYear);
    printf("Enter price: ");
    scanf("%f", &book->price);
}
void displayBookInfo(Book *book) {
    printf("\nBook Information:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Publication Year: %d\n", book->publicationYear);
    printf("Price: %.2f\n", book->price);
}
int main() {
    Book book;
    readBookInfo(&book);
    displayBookInfo(&book);
    return 0;
}
