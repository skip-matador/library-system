// main.c

#include <stdio.h>
#include "book.c"
#include "user.c"

int main() {
    // Create a book
    struct Book book1 = {1, "The C Programming Language", "K&R"};

    // Create a user
    struct User user1 = {101, "coder123"};

    // Display book and user information
    printf("Book Information:\n");
    displayBook(book1);

    printf("\nUser Information:\n");
    displayUser(user1);

    return 0;
}
