#include <stdio.h>
#include <string.h>


void IsArmstrong(int ,int );

int main()
{
    char num[100];
    int result;
    printf("Enter Number : \n");
    scanf("%s", &num);
    int a = strlen(num);
    char array[a];

    strcpy(array, num);

    sscanf(array, "%d", &result);

    IsArmstrong(a, result);
    return 0;
}


void IsArmstrong(int leght,int result)
{
    int array1[leght];
    int count = result;

    for (int i = 0; count > 0; i++)
    {
        array1[i] = count % 10;
        count /= 10;
    }

    int ans1 = 0;
    int save[leght];

    for (int i = leght - 1; i >= 0; i--)
    {
        int sum = 1;
        for (int z = 0; z < leght; z++)
        {
            sum = sum * array1[i];
        }
        save[i] = sum;
    }

    for (int t = 0; t < leght; t++)
    {
        ans1 = ans1 + save[t];
    }

    if ( ans1 == result )
    {
        printf("Pass");
    } else
    {
        printf("Not Pass");
    }
}