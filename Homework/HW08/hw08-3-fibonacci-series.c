/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/

#include <stdio.h>

int main()
{
    int input = 0, result = 0, previous1 = 1, previous2 = 0;
    scanf("%d", &input);
    input -= 1;
    int save[input];
    save[0] = 1;
    printf("Series = ");
    for (int i = 0; i <= input; i++)
    {
        save[i] = previous1 + previous2;
        previous1 = save[i];

        if ( i == 0)
        {
            printf("%d", save[i]);
        } else
        {
           printf(" + %d", save[i]); 
        }

        if ( i >= 1)
        {
            previous2 = save[i - 1];
        }
    }

    for (int i = 0; i <= input; i++)
    {
        result += save[i];
        printf(" %d", save[i]);
    }
    printf("\nSum = %d", result);
    return 0;
}
