/*
    ผู้ใช้กรอกปี ค.ศ. เข้ามาให้ระบบ ให้คุณแสดงผลลัพธ์ว่าในปีนั้น (ปีอธิกสุรทิน) เดือนกุมภาพันธ์จะมีจำนวน 29 วันใช่หรือไม่? 
    ซึ่งการกำหนดปีอธิกสุรทินให้เป็นไปตามหลักการดังนี้ 
      1.ถ้าปี ค.ศ. ใดหารด้วย 4 ไม่ลงตัวจะ ไม่เป็นปีอธิกสุรทิน 
      2.ถ้าปีใดหารด้วย 4 ลงตัวและหารด้วย 100 ลงตัว แต่หารด้วย 400 ไม่ลงตัว ปี ค.ศ. นั้นจะ ไม่เป็นปีอธิกสุรทิน 
      3.ถ้าปี ค.ศ. ใด หารด้วย 4 ลงตัว แต่หารด้วย 100 ไม่ลงตัว ค.ศ.นั้นจะ เป็นปีอธิกสุรทิน 
      4.ถ้าปี ค.ศ. ใด หารด้วย 4 ลงตัว และหารด้วย 400 ลงตัว ปี ค.ศ.นั้นจะ เป็นปีอธิกสุรทิน
    
    Test case:
        Year(s) :
            1989

    Output:
        February has 28 days

    Test case:
        Year(s) :
            2000

    Output:
        February has 29 days

*/

#include <stdio.h>


int main()
{
    int year;
    printf("Year(s) : ");
    scanf("%d", &year);
    if (year%4 != 0) 
    {
        printf("February has 28 days");
    } else if (year % 4 == 0 && year % 100 == 0 && year % 400 != 0)
    {
        printf("February has 28 days");
    } else if (year % 4 == 0 && year % 100 != 0)
    {
        printf("February has 29 days");
    } else if (year % 4 == 0 && year % 400 == 0)
    {
        printf("February has 29 days");
    }
    
    
    return 0;
}
