#include <stdio.h>

void swapNumbers( int **plr1, int **plr2 ) ; 

int main()
{
    int num1 = 0, num2 = 0, *plr1 , *plr2;
    plr1 = &num1;
    plr2 = &num2;
    printf("Enter num1 :");
    scanf("%d", &num1);
    printf("Enter num2 :");
    scanf("%d", &num2);
    printf("\nBefore swap (num1 & num2) : \n%d, %d", num1,  num2);
    swapNumbers(&plr1, &plr2);
    printf("\nAfter swap (num1 & num2) : \n%d, %d", num1, num2);
    return 0;
}



void swapNumbers( int **plr1, int **plr2 )
{
    **plr1 = **plr1 + **plr2;
    **plr2 = **plr1 - **plr2;
    **plr1 = **plr1 - **plr2;
} 