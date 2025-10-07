#include <stdio.h>

struct Book
{
    int  Book_ID;
    char Title;
    char Author;
    int Years;
} typedef B;





void addBook(B books[], int *count) ;
void searchBook(B books[], int count, char title[]) ;
void displayBooks(B books[], int count) ;

int main()
{
    struct Book BookA;
    int option = 0;
    printf("Choose an option : ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        
        break;
    case 2:
        
        break;
    case 3:
        break;
    case 4:
        break;
    default:
        break;
    }


    return 0;
}



void addBook(B books[], int *count) {
    
};

void searchBook(B books[], int count, char title[]) {

};

void displayBooks(B books[], int count) {

};
