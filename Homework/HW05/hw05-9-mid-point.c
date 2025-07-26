/*
    ผู้ใช้กรอกพิกัดจำนวน 2 จุดลงในโปรแกรม ให้คุณเขียนโปรแกรมคำนวณหาจุดกึ่งกลางของ 2 จุดนี้

    Test case:
        Input A Point :
            2 2
        Input B Point :
            4 4

    Output:
        Mid Point of A and B is ( 3.0, 3.0 )

    Test case:
        Input A Point :
            -3 9
        Input B Point :
            4 -19

    Output:
        Mid Point of A and B is ( 0.5, -5.0 )

    Test case:
        Input A Point :
            6 -8
        Input B Point :
            3 3

    Output:
        Mid Point of A and B is ( 4.5, -2.5 )
*/

#include <stdio.h>


int main()
{
    int Num1_A, Num1_B, Num2_A, Num2_B;
    printf("Input A Point : ");
    scanf("%d %d", &Num1_A, &Num1_B);
    printf("Input B Point : ");
    scanf("%d %d", &Num2_A, &Num2_B);
    float cal_A = Num1_A + Num2_A;
    float cal_B = Num1_B + Num2_B;
    printf("Mid Point of A and B is ( %.1f %.1f)", cal_A /2, cal_B /2);
    return 0;
}
