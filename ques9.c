
// 9. Library Book Management
#include <stdio.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int total;
    int available;
};

int main()
{
    struct Book b[50];

    int n = 0;
    int choice;
    int id, i, found;

    do
    {
        printf("\n\n----- LIBRARY -----\n");
        printf("1. Add Book\n");
        printf("2. Search Book\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Display Unavailable Books\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:

                printf("Enter book ID: ");
                scanf("%d", &b[n].id);

                printf("Enter title: ");
                scanf(" %[^\n]", b[n].title);

                printf("Enter author: ");
                scanf(" %[^\n]", b[n].author);

                printf("Enter total copies: ");
                scanf("%d", &b[n].total);

                b[n].available = b[n].total;

                n++;

                printf("Book added successfully.");

                break;

            case 2:

                printf("Enter book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        printf("\nTitle: %s", b[i].title);
                        printf("\nAuthor: %s", b[i].author);
                        printf("\nAvailable copies: %d",
                               b[i].available);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book not found.");
                }

                break;

            case 3:

                printf("Enter book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;

                        if(b[i].available > 0)
                        {
                            b[i].available--;
                            printf("Book issued.");
                        }
                        else
                        {
                            printf("Book is not available.");
                        }

                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.");

                break;

            case 4:

                printf("Enter book ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(b[i].id == id)
                    {
                        found = 1;

                        if(b[i].available < b[i].total)
                        {
                            b[i].available++;
                            printf("Book returned.");
                        }
                        else
                        {
                            printf("All copies are already available.");
                        }

                        break;
                    }
                }

                if(found == 0)
                    printf("Book not found.");

                break;

            case 5:

                printf("\nUnavailable books:\n");

                for(i = 0; i < n; i++)
                {
                    if(b[i].available == 0)
                    {
                        printf("%d - %s\n",
                               b[i].id,
                               b[i].title);
                    }
                }

                break;

            case 6:

                printf("Exiting...");

                break;

            default:

                printf("Invalid choice.");
        }

    } while(choice != 6);

    return 0;
}