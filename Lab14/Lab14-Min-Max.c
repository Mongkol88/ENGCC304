#include <stdio.h>

int main()
{
    int n = 9;
    int array[n], Max = -99999999, Min = 10000000, input;
    printf("Enter value:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        array[i] = input;
    }
    Min = input;
    printf("\nIndex:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", i);
        if ( array[i] > Max ) 
        {
            Max = array[i];
        } else if ( array[i] < Min )
        {
            Min = array[i];
        }
    }
    printf("\nArray:  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    

    printf("\nMin : %d\nMax : %d", Min, Max);
    return 0;
}
