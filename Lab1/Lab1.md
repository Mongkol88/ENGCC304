## โจทย์
จงแก้ไขโค้ดต่อไปนี้ ให้สามารถรับค่าจากผู้ใช้ เพื่อแสดงผลบนหน้าจอคอมพิวเตอร์ให้ได้ พร้อมทั้งจัดรูปแบบให้ตรงตาม Syntax ที่เรียนมาในห้องเรียน

```c++
#include <stduio.h>

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) 
    scanf( "%s", Name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", Age ) ;
    print( "- - - - - -\n" ) ;
    printf( "Hello %s \n", ___ ) ; 
    printf( "Age = %d\n", ___ ) ; 
    
}//end main function
```


## FIX CODE
```c++
#include <stdio.h>

int main() {
    char Name[50] ;
    int  Age = 0 ;
    printf( "Enter your name: " ) ;
    scanf( "%s", Name ) ;
    printf( "Enter your age:  " ) ;
    scanf( "%d", &Age ) ;
    printf( "- - - - - -\n" ) ;
    printf( "Hello %s\n", Name ) ; 
    printf( "age = %d\n", Age ) ; 
    return 0 ;
}//end main function
```

## TEST CASE
### Input
```bash
<img width="665" height="152" alt="Image" src="https://github.com/user-attachments/assets/0393dd79-debf-4f8e-9a0a-efd9651cdd9f" />
```
### Output
```bash
<img width="201" height="64" alt="Image" src="https://github.com/user-attachments/assets/4e35b3b0-f2eb-4734-b9d9-aef930e166ae" />
```
