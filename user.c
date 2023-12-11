// user.c

#include <stdio.h>
#include <string.h>

struct User {
    int userId;
    char username[50];
};

void displayUser(struct User user) {
    printf("User ID: %d\n", user.userId);
    printf("Username: %s\n", user.username);
}
