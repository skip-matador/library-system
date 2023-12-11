// book.c

#include <stdio.h>
#include <string.h>

struct Book {
    int bookId;
    char title[100];
    char author[50];
};

void displayBook(struct Book book) {
    printf("Book ID: %d\n", book.bookId);
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
}
