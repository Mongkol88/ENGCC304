#include <stdio.h>

int main()
{
    int Series[7] = {15, 7, 25, 3, 73, 32, 45};
    

    printf("Old Series : ");
    for (int i = 0; i < 7; i++)
    {
        if ( i == 6 )
        {
            printf(" %d" ,Series[i]);
        } else
        {
            printf(" %d," ,Series[i]);
        }
    }
    int temp = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int a = i + 1; a < 7; a++)
        {
            if ( Series[i] > Series[a] )
            {
                temp = Series[i];
                Series[i] = Series[a];
                Series[a] = temp;
            }
        }
    }
    printf("\nNew Series : ");
    for (int i = 0; i < 7; i++)
    {
        if ( i == 6 )
        {
            printf(" %d" ,Series[i]);
        } else
        {
            printf(" %d," ,Series[i]);
        }
    }
    for (int i = 0; i < 7; i++)
    {
        if (Series[i] == 32)
        {
           printf("\nPos of 32 : %d", i);
        }
        
    }
    
    
    return 0;
}
