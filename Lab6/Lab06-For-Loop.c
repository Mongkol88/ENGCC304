#include <stdio.h>

int main()
{
    int num, cal;
    printf("Enter value : ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Series :");
        for (int i = num; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                printf(" %d ", i);
            }
            
        }
    } else {
        printf("Series :");
        for (int i = 1; i <= num; i++)
        {
            if (i % 2 == 1)
            {
                printf(" %d ", i);
            }
        }
    }
    return 0;
}
