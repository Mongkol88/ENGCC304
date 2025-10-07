#include <stdio.h>
#include <stdlib.h>

int ReadFile(char *FileName);

int main()
{
    char name[100];
    printf("Enter file name: ");
    scanf("%s", name);
    
    int a = ReadFile(name);
    
    printf("Total number of words in '%s' : %d words", name, a);
    return 0;
}



int ReadFile(char *FileName)
{
    FILE *fp ;

    fp = fopen( FileName, "r");

    char words[200];
    int a = 0;

    if ( fp == NULL )
    {
        printf("\nError! opening file");
        exit( 0 );
    }

    while ( fscanf( fp, "%s\n", words ) != EOF )
    {
        a++;
    }
    

    fclose( fp );
    return a;
}
