/*
    จงเรียงลำดับเลขจากข้อมูลที่ผู้ใช้กรอก โดยเรียงจากมากไปน้อย (โดยใช้คำสั่ง if else หรือ else if เท่านั้น)
    
    Test case:
        Input[1] :
            6
        Input[2] :
            9
        Input[3] :
            1
    Output:
        9 6 1

    Test case:
        Input[1] :
            65
        Input[2] :
            91
        Input[3] :
            112
    Output:
        112 91 65
*/


#include <stdio.h>

int main() {
    int a, b, c;
    int result_a = 0, result_b = 0, result_c = 0;
    printf("Input[1] : \n");
    scanf("%d", &a);
    printf("Input[2] : \n");
    scanf("%d", &b);
    printf("Input[3] : \n");
    scanf("%d", &c);
    if (b > a && b < c)
    {
        result_a = c;
        result_b = b;
        result_c = a;
    } else if (c > b && b > a)
    {
        result_a = c;
        result_b = b;
        result_c = a;
    } else if (a > c && b > c)
    {
        result_a = a;
        result_b = b;
        result_c = c;
    } else if (a > b && a < c)
    {
        result_a = c;
        result_b = a;
        result_c = b;
    } else if (a > b && b < c)
    {
        result_a = a;
        result_b = c;
        result_c = b;
    } else if (a > b && a > c)
    {
        result_a = a;
        result_b = c;
        result_c = b;
    } else if (c > b && c > a)
    {
        result_a = c;
        result_b = a;
        result_c = b;
    } else if (b > a && b > c)
    {
        result_a = b;
        result_b = c;
        result_c = a;
    } else 
    {
        result_a = a;
        result_b = b;
        result_c = c;
    }
    printf("%d %d %d", result_a, result_b, result_c);
    return 0;
}