#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
    int  Book_ID;
    char Title[50];
    char Author[50];
    int Years;
} typedef B;


void addBook(B books[]) ;
void searchBook(B books[]) ;
void displayBooks(B books[]) ;

int main()
{
    B Book1[20];
    int option = 0;
    while ( option >= 0  && option <= 3)
    {
        printf("\nChoose an option : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            addBook(Book1);
            printf("Book added successfully!");
            break;
        case 2:
            searchBook(Book1);
            break;
        case 3:
            displayBooks(Book1);
            break;
        case 4:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
    }
    return 0;
}



void addBook(B books[]) {
    printf("Enter Book ID: ");
    scanf("%d", &books->Book_ID);
    getchar();
    printf("Enter Title: ");
    fgets(books->Title, sizeof(books->Title), stdin);
    books->Title[strcspn(books->Title, "\n")] = '\0';
    printf("Enter Author: ");
    fgets(books->Author, sizeof(books->Author), stdin);
    books->Author[strcspn(books->Author, "\n")] = '\0';
    printf("Enter Year: ");
    scanf("%d", &books->Years);
};

void searchBook(B books[]) {
    getchar();
    char input[50];
    printf("Enter Title to Search: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    if ( strcmp(input, books->Title) )
    {
        printf("\nBook not found.");
    } else
    {
        printf("Book ID: %d", books->Book_ID);
        printf("\nTitle: %s", books->Title);
        printf("\nAuthor: %s", books->Author);
        printf("\nYear: %d", books->Years); 
    }
    
    
};

void displayBooks(B books[]) {
    printf("Book ID: %d", books->Book_ID);
    printf("\nTitle: %s", books->Title);
    printf("\nAuthor: %s", books->Author);
    printf("\nYear: %d", books->Years);
};
