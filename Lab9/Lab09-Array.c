#include <stdio.h>


int main()
{
    int n = 0;
    printf("Enter N : ");
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++)
    {
        int input = 0;
        printf("Enter value[%d] : ", i);
        scanf("%d", &input);
        array[i] = input;
        for (int b = 2; b < 5; b++) {
            if (array[i] % b == 0  && array[i] != b || array[i] <= 1)
            {
                array[i] = 0;
            }
        }
    }

    
    printf("\nIndex :");

    for (int i = 0; i < n; i++)
    {
        printf(" %d", i);
    }

    printf("\nArray :");

    for (int i = 0; i < n; i++)
    {
        if ( array[i] == 0 )
        {
            printf(" #");
        } else
        {
            printf(" %d", array[i]);
        }
    }
    return 0;
}
