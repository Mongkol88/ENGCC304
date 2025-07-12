### โจทย์ HW01-1
จงเขียนโปรแกรมภาษา C ที่มีโครงสร้างครบถ้วน โดยประกอบไปด้วยการ include และ main function (ชนิดข้อมูล int) เพื่อแสดงข้อความ `"Hello World."` บนหน้าจอ

## FIX CODE
```c
#include <stdio.h>

int main()
{
    printf("Hello world");
    return 0;
}
```

## TEST CASE
# Input
```bash
ไม่มี
```
# Output
```bash
Hello World
```



### โจทย์ HW01-2
จงแก้ Bug ของโปรแกรมดังต่อไปนี้ เพื่อให้โปรแกรมสามารถรันได้ตามปกติ

```c++
#include <studio .h>
int main() 
    printf( "Hello, I'm Javis (RMUTL-Version).\n" ) 
    printf( "This is my first time to coding with C language.\n" ) ;
    print( "Today is my birthday.\n" ) 
    return '0' ;
```

## FIX CODE
```c
#include <stdio.h>

int main(){
    printf( "Hello, I'm Javis (RMUTL-Version).\n" ) ;
    printf( "This is my first time to coding with C language.\n" ) ;
    printf( "Today is my birthday.\n" ) ;
    return 0 ;
}
```

## TEST CASE
# Input
```bash
ไม่มี
```
# Output
```bash
Hello, I'm Javis (RMUTL-Version).
This is my first time to coding with C language.
Today is my birthday.
```

### โจทย์ HW01-3
/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/

## คำตอบ 
```c
#include <stdio.h>

int main()
{
    char Firs_Name[50];
    char Last_Name[50];
    printf("Please fill your Firs Name :");
    scanf("%s", &Firs_Name);
    printf("Please fill your Last Name :");
    scanf("%s", &Last_Name);
    printf("%s %s TC, RMUTL, Chiang Mai, Thailand" , Firs_Name,Last_Name);
    return 0;
}

```
