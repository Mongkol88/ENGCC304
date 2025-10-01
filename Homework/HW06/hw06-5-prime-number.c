/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ For Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/



#include <stdio.h>


int main()
{
    int num = 0, isPrime = 0;
    printf("Enter number : ");
    scanf("%d", &num);

    ///For Loop///
    for (int a = num; a >= 2; a--) {
        isPrime = 1;
        for (int b = 2; b < a; b++) {
            for ( ; a % b == 0; )
            {
                isPrime = 0;
                break;
            }
        }
        for ( ; isPrime == 1 ;)
        {
            printf("%d ", a);
            break;
        }
    }

    ///while do///
    // int a = num;
    // while (a >= 2)
    // {
    //     isPrime = 1;
    //     int b = 2;
    //     while (b < a)
    //     {
    //         while (a % b == 0)
    //         {
    //             isPrime = 0;
    //             break;
    //         }
    //         b++;
    //     }
    //     while (isPrime == 1)
    //     {
    //         printf("%d ", a);
    //         break;
    //     }
    //     a--;
    // }


    ///Do while///
    // int a = num;
    // do
    // {
    //     isPrime = 1;
    //     int b = 2;
    //     do
    //     {
    //         if (a % b == 0 && a != b || a <= 1)
    //         {
    //             isPrime = 0;
    //             break;
    //         }
    //         b++;
    //     } while (b < a);
    //     if ( isPrime == 1 )
    //     {
    //        printf("%d ", a);
    //     }
    //     a--;
    // } while (a >= 2);
    return 0;
}


//printf("i = %d j = %d IsPrime = %d Debug\n", a ,b, isPrime);