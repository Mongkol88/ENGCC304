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
    int Plr_Starter_Point = 100, PlayOrExit = 0, score = 100, input = 0, random_Num = rand() % 100 + 1;
    printf("Do you want to play game (1=play,-1=exit) : ");
    scanf("%d", &PlayOrExit);
    if (PlayOrExit == 1)
    {
        printf("(Score = %d)\n", score);
        do
        {
            while (getchar() != '\n');
            printf("Guess the winning number (1-100) : \n");
            int check = scanf("%d", &input);
            if (input > 100)
            {
                printf("ใส่เลข 1-100 อย่างเดียวครับพี่ :) %d\n", input);
            } else if (check == 0)
            {
                printf("Input ตัวเลข Only!!!!\n");
            }
            if (input == random_Num)
            {
                printf("That is correct! The winning number is %d \n\n", random_Num);        
                main();
                break;
            } else
            {
                score -= 10;
                if (input >= random_Num)
                {
                    printf("Sorry, the winning number is LOWER  than %d.  (Score = %d)\n\n", input, score);
                } else if (input <= random_Num)
                {
                    printf("Sorry, the winning number is HIGHER than %d.  (Score = %d)\n\n", input, score);
                }
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
        while (getchar() != '\n');
        printf("Please enter only 1 or -1. \n");
        printf("Do you want to play game (1=play,-1=exit) : ");
        scanf("%d", &PlayOrExit);
        if (PlayOrExit == 1)
        {
            main();
        } else if (PlayOrExit == -1)
        {
            printf("See you again.\n");
        } else
        {
            printf("Please enter only 1 or -1.       Retrun to the game agin!\n");
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
Sorry, the winning number is HIGHER than 50.  (Score = 90)

Guess the winning number (1-100) :
56
Sorry, the winning number is HIGHER than 56.  (Score = 80)

Guess the winning number (1-100) :
60
Sorry, the winning number is HIGHER than 60.  (Score = 70)

Guess the winning number (1-100) :
70
Sorry, the winning number is HIGHER than 70.  (Score = 60)

Guess the winning number (1-100) :
80
Sorry, the winning number is HIGHER than 80.  (Score = 50)

Guess the winning number (1-100) :
90
Sorry, the winning number is LOWER  than 90.  (Score = 40)

Guess the winning number (1-100) :
88
Sorry, the winning number is LOWER  than 88.  (Score = 30)

Guess the winning number (1-100) :
85
Sorry, the winning number is LOWER  than 85.  (Score = 20)

Guess the winning number (1-100) :
82
Sorry, the winning number is LOWER  than 82.  (Score = 10)

Guess the winning number (1-100) :
84
Sorry, the winning number is LOWER  than 84.  (Score = 0)

Game over! Score = 0
Do you want to play game (1=play,-1=exit) : -1
See you again.
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) : tse
Please enter only 1 or -1. 
Do you want to play game (1=play,-1=exit) : e
Please enter only 1 or -1.

Retrun to the game agin!

Do you want to play game (1=play,-1=exit) : Please enter only 1 or -1.
Do you want to play game (1=play,-1=exit) : -1
See you again.
```

## TEST CASE
### Input & Output
```bash
Do you want to play game (1=play,-1=exit) : 1
(Score = 100)
Guess the winning number (1-100) :
Test case
Input ตัวเลข Only!!!!
Sorry, the winning number is HIGHER than 0.  (Score = 90)

Guess the winning number (1-100) :
101
ใส่เลข 1-100 อย่างเดียวครับพี่ :) 101
Sorry, the winning number is LOWER  than 101.  (Score = 80)

Guess the winning number (1-100) :
56
Sorry, the winning number is HIGHER than 56.  (Score = 70)

Guess the winning number (1-100) :
70
Sorry, the winning number is HIGHER than 70.  (Score = 60)

Guess the winning number (1-100) :
80
That is correct! The winning number is 80 

Do you want to play game (1=play,-1=exit) : -1
See you again.
```