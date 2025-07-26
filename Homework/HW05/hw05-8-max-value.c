/*
    ผู้ใช้กรอกตัวเลข 3 จำนวน และให้คุณระบุอันดับของแต่ละหมายเลข พร้อมกับระบุจำนวนที่มากที่สุด

    Test case:
        12 25 52

    Output:
        1st Number = 12
        2nd Number = 25
        3rd Number = 52
        The 3rd Number is the greatest among three

    Test case:
        89 54 72

    Output:
        1st Number = 89
        2nd Number = 54
        3rd Number = 72
        The 1rd Number is the greatest among three

*/

#include <stdio.h>


int main()
{
    int a,b,c;
    int result = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        result = a;
    } else if (a > b && a < c)
    {
        result = c;
    } else if (b > a && b > c)
    {
       result = b;
    } else if (b > a && b < c)
    {
        result = c;
    }
    
    
    
    printf("1st Number = %d  \n2nd Number = %d \n3rd Number = %d \nThe %drd Number is the greatest among three", a, b, c, result);
    return 0;
}
