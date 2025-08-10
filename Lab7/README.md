# โจทย์
จงเขียนโปรแกรมทายตัวเลขซึ่งทำงานดังนี้
- ตอนเริ่มเกมผู้เล่นจะมีคะแนนเต็ม 100
- โปรแกรมจะสุ่มตัวเลขที่มีค่าตั้งแต่ 1 ถึง 100
- ให้ผู้เล่นทายว่าตัวเลขที่โปรแกรมสุ่มมามีค่าเป็นเท่าใด
- หากทายผิด โปรแกรมจะลบคะแนนของผู้เล่นไป 10 หน่วย พร้อมแจ้งคะแนนปัจจุบันให้ผู้เล่นทราบด้วย
- หากทายผิด โปรแกรมจะต้องบอกใบ้ว่าคำตอบที่ถูกมีค่า "มากกว่า" หรือ "น้อยกว่า" ตัวเลขที่ผู้ใช้ทาย
- หากทายผิด ให้โปรแกรมรอรับตัวเลขถัดไปได้เลย
- หากทายถูก ให้โปรแกรมแสดงความยินดีกับผู้ใช้ พร้อมแจ้งคะแนนปัจจุบันให้กับผู้เช่น
- เมื่อเล่นเสร็จโปรแกรมรอรับคำสั่งจากผู้ใช้ หากผู้ใช้กรอกเลข 1 จะเข้าสู่โหมดการเล่นเกมใหม่อีกครั้ง หากกด -1 ให้หยุดการทำงานของโปรแกรม

<br />หมายเหตุ : การสุ่มตัวเลขจะใช้คำสั่ง rand() ที่อยู่ใน stdlib.h หากต้องการสุ่มตัวเลข 0 ถึง 100 ต้องใช้คำสั่งดังนี้
```c++
rand() % 100 + 1
```
<br />หมายเหตุ : หากต้องการสุ่มตัวเลขที่เปลี่ยนแปลงตามเวลา ต้องใช้คำสั่ง srand( time( NULL ) ) ในตอนต้นของโปรแกรมด้วย
```c++
srand( time( NULL ) ) ;
```

## FIX CODE
```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand( time( NULL ) );
    int Plr_Starter_Point = 100, score = 100, random_Num = rand() % 100 + 1, scope_Min = 1, scope_Max =  100,input = 0, PlayOrExit = 0;
    printf("Do you want to play game (1=play,-1=exit) : ");
    scanf(" %d", &PlayOrExit);
    if (PlayOrExit == 1)
    {
        printf("(Score = %d)\n", score);    
        do
        {
            printf("Guess the winning number (%d-%d) : \n", scope_Min, scope_Max);
            int check = scanf(" %d", &input);
            if (input > 100 || input <= 0)
            {
                printf("ใส่เลข 1-100 อย่างเดียวครับพี่ :(\n");
            } else if (check == 0)
            {
                printf("Input ตัวเลข Only!!!!\n");
            } else if (input == random_Num)
            {
                printf("That is correct! The winning number is %d \n\n", random_Num);
                main();
                break;
            } else if (input >= random_Num)
            {
                score -= 10;
                printf("Sorry, the winning number is LOWER  than %d.  (Score = %d)\n\n", input, score);
                scope_Max = input - 1;
            } else if (input <= random_Num)
            {
                score -= 10;
                printf("Sorry, the winning number is HIGHER than %d.  (Score = %d)\n\n", input, score);
                scope_Min = input + 1;
            }
            if ( score == 0 )
            {
                printf("Game over! Score = %d \n", score);
                main();
                break;
            }
        } while ( 1 );

    } else if (PlayOrExit == -1)
    {
        printf("See you again.\n");
    } else
    {
        printf("Please enter only 1 or -1. \n");
        printf("Do you want to play game (1=play,-1=exit) : ");
        scanf(" %d", &PlayOrExit);
        if (PlayOrExit == 1)
        {
            main();
        } else if (PlayOrExit == -1)
        {
            printf("See you again.\n");
        } else
        {
            printf("Please enter only 1 or -1.\n\nRetrun to the game agin!\n\n");
            main();
        }
    }
    return 0;
}
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) : 1
(Score = 100)
Guess the winning number (1-100) :
50
Sorry, the winning number is LOWER  than 50.  (Score = 90)

Guess the winning number (1-49) :
20 
Sorry, the winning number is HIGHER than 20.  (Score = 80)

Guess the winning number (21-49) :
30
Sorry, the winning number is HIGHER than 30.  (Score = 70)

Guess the winning number (31-49) :
40
Sorry, the winning number is LOWER  than 40.  (Score = 60)

Guess the winning number (31-39) :
35
Sorry, the winning number is HIGHER than 35.  (Score = 50)

Guess the winning number (36-39) :
37
Sorry, the winning number is LOWER  than 37.  (Score = 40)

Guess the winning number (36-36) :
36
That is correct! The winning number is 36 

Do you want to play game (1=play,-1=exit) : -1
See you again.
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) : 2
Please enter only 1 or -1. 
Do you want to play game (1=play,-1=exit) : 2
Please enter only 1 or -1.

Retrun to the game agin!

Do you want to play game (1=play,-1=exit) : -1
See you again.
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) : 1
(Score = 100)
Guess the winning number (1-100) :
5
Sorry, the winning number is HIGHER than 5.  (Score = 90)

Guess the winning number (6-100) :
5
Sorry, the winning number is HIGHER than 5.  (Score = 80)

Guess the winning number (6-100) :
8
Sorry, the winning number is HIGHER than 8.  (Score = 70)

Guess the winning number (9-100) :
5
Sorry, the winning number is HIGHER than 5.  (Score = 60)

Guess the winning number (6-100) :
3
Sorry, the winning number is HIGHER than 3.  (Score = 50)

Guess the winning number (4-100) :
0
ใส่เลข 1-100 อย่างเดียวครับพี่ :(
Guess the winning number (4-100) :
87
Sorry, the winning number is LOWER  than 87.  (Score = 40)

Guess the winning number (4-86) :
69
Sorry, the winning number is LOWER  than 69.  (Score = 30)

Guess the winning number (4-68) :
56
Sorry, the winning number is LOWER  than 56.  (Score = 20)

Guess the winning number (4-55) :
35 
Sorry, the winning number is HIGHER than 35.  (Score = 10)

Guess the winning number (36-55) :
67
Sorry, the winning number is LOWER  than 67.  (Score = 0)

Game over! Score = 0
Do you want to play game (1=play,-1=exit) : -1
See you again.
```