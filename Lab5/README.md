# โจทย์
ผู้ใช้กรอกค่า "คะแนนดิบ" เข้ามาในระบบเพื่อต้องการตรวจสอบเกรดในรายวิชา Programming ซึ่งมีเกณฑ์การให้คะแนนคือ 
<br />F อยู่ในช่วงคะแนนน้อยกว่า 50 , 
<br />D อยู่ในช่วงระหว่าง 50 ถึง 55 , 
<br />D+ อยู่ในช่วงระหว่าง 55 ถึง 60 , 
<br />C อยู่ในช่วงระหว่าง 60 ถึง 65 , 
<br />C+ อยู่ในช่วงระหว่าง 65 ถึง 70 , 
<br />B อยู่ในช่วงระหว่าง 70 ถึง 75 , 
<br />B+ อยู่ในช่วงระหว่าง 75 ถึง 80 , 
<br />A อยู่ในช่วงคะแนนมากกว่า 80 ขึ้นไป 
<br /><br />(กำหนดให้ข้อนี้ใช้คำสั่ง if else ได้เท่านั้น)

## FIX CODE
```c
#include <stdio.h>

int main()
{
    int score = 0;
    int check;
    printf("enter score :");
    check = scanf("%d", &score);
    
    if (check == 1) {
            if (score >= 80) {
                printf("A !");
            } else if (score >= 75 && score < 80)
            {
                printf("B+ !");
            } else if (score >= 70 && score < 75)
            {
                printf("B !");
            } else if (score >= 65 && score < 70)
            {
                printf("C+ !");
            } else if (score >= 60 && score < 65)
            {
                printf("C !");
            } else if (score >= 55 && score < 60)
            {
                printf("D+ !");
            } else if (score >= 50 && score < 55)
            {
                printf("D !");
            } else
            {
                printf("F !");
            }
    } else 
    {
        printf("please enter number only.");
    }

    return 0;
}//end function

```

## TEST CASE
### Input
<img width="132" height="20" alt="Image" src="https://github.com/user-attachments/assets/9630f178-aad5-4638-8d2a-1a8c9554c6ad" />

### Output
<img width="40" height="25" alt="Image" src="https://github.com/user-attachments/assets/e4079260-f9ee-433a-80e9-defe7c49265e" />

## TEST CASE
### Input
<img width="131" height="20" alt="Image" src="https://github.com/user-attachments/assets/a5b9e34c-cfc5-4f16-9506-29e4789f6ae6" />

### Output
<img width="45" height="22" alt="Image" src="https://github.com/user-attachments/assets/6599751d-527e-4f1d-bf42-f0bbb6e0a1f9" />

## TEST CASE
### Input
<img width="130" height="16" alt="Image" src="https://github.com/user-attachments/assets/39605b01-9125-4297-b8c5-a748dcaf2452" />

### Output
<img width="48" height="22" alt="Image" src="https://github.com/user-attachments/assets/7c8609ca-e9c1-4501-9fb1-36aa96f3cb90" />

## TEST CASE
### Input
<img width="135" height="22" alt="Image" src="https://github.com/user-attachments/assets/ca81a321-6e17-4374-895b-0c218d4c6745" />

### Output
<img width="40" height="23" alt="Image" src="https://github.com/user-attachments/assets/f02584e0-9426-49cd-b8a5-f57a55d8d651" />

## TEST CASE
### Input
<img width="202" height="19" alt="Image" src="https://github.com/user-attachments/assets/38e13f6b-abd2-408c-ac52-b0578e72b478" />

### Output
<img width="208" height="19" alt="Image" src="https://github.com/user-attachments/assets/b53b98a3-f152-4098-90ef-feadabbc6aeb" />