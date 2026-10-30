// structure management library contains 5 members of the structure library_management. The members are id, book_id, book_title, quantity, and author.
#include <stdio.h>
// Structure definition for library management
struct library_management {
    // structure members
        int library_id;         //library ID
        char book_id[50];      //book ID
        char book_title[100];   //book title
        int quantity;         //quantity
        char author[50];      //author
    };
    int main() {
    struct library_management books[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Library ID: ");
        scanf("%d", &books[i].library_id);
        printf("Book ID: ");
        scanf("%s", books[i].book_id);
        printf("Book Title: ");
        scanf("%s", books[i].book_title);
        printf("Quantity: ");
        scanf("%d", &books[i].quantity);
        printf("Author: ");
        scanf("%s", books[i].author);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("------------------------------\n");
        printf("Book %d:\n", i + 1);
        printf("Library ID: %d\n", books[i].library_id);
        printf("Book ID: %s\n", books[i].book_id);
        printf("Book Title: %s\n", books[i].book_title);
        printf("Quantity: %d\n", books[i].quantity);
        printf("Author: %s\n", books[i].author);
    }
    return 0;
}