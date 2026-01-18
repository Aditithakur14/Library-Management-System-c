#include <stdio.h>

struct Book {
    int id;
    char name[30];
};

int main() {
    struct Book b[10];
    int n = 0;
    int choice;

    while (1) {
        printf("\nLIBRARY MENU\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);

            printf("Enter Book Name: ");
            scanf("%s", b[n].name);

            n++;
            printf("Book Added Successfully\n");
        }

        else if (choice == 2) {
            if (n == 0) {
                printf("No books available\n");
            } else {
                for (int i = 0; i < n; i++) {
                    printf("\nBook ID: %d", b[i].id);
                    printf("\nBook Name: %s\n", b[i].name);
                }
            }
        }

        else if (choice == 3) {
            printf("Thank You\n");
            break;
        }

        else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}
