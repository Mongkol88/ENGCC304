#include <stdio.h>
#include <string.h>


int main()
{
    char input_word[20];

    printf("Enter word: \n");

    scanf("%s", &input_word);

    int a = strlen(input_word);

    strlwr(input_word);

    char array[a];
    char result_array[a];

    strcpy(array, input_word);

    int i = a - 1;
    int b = 0;

    while (i >= 0)
    {
        result_array[b] = array[i];
        i--, b++;
    }

    result_array[a] = '\0';

    if ( strcmp(array , result_array) == 0)
    {
        printf("Pass ");
    } else
    {
        printf("not pass ");
    }

    return 0;
}
