# โจทย์
จงเขียนโปรแกรมรับค่าตัวเลขจากผู้ใช้ ใส่ไว้ในตัวแปร N และทำการแสดงข้อมูลดังเงื่อนไขต่อไปนี้
<br />- หากผู้ใช้กรอกเลขคี่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ 1 ถึง N และให้แสดงเฉพาะตัวเลขคี่เท่านั้น
<br />- หากผู้ใช้กรอกเลขคู่ ให้โปรแกรมแสดงลำดับตัวเลขตั้งแต่ N ถึง 0 และให้แสดงเฉพาะตัวเลขคู่เท่านั้น


## FIX CODE
```c
#include <stdio.h>

int main()
{
    int num, cal;
    printf("Enter value : ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("Series :");
        for (int i = num; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                printf(" %d ", i);
            }
            
        }
    } else {
        printf("Series :");
        for (int i = 1; i <= num; i++)
        {
            if (i % 2 == 1)
            {
                printf(" %d ", i);
            }
        }
    }
    return 0;
}
```

## TEST CASE
### Input
<img width="142" height="21" alt="Image" src="https://github.com/user-attachments/assets/9ee32556-303c-42a7-8da7-0a45ab2d0e05" />

### Output
<img width="223" height="20" alt="Image" src="https://github.com/user-attachments/assets/9d97a548-6772-4b86-bead-bb011c5111b9" />


## TEST CASE
### Input
<img width="143" height="19" alt="Image" src="https://github.com/user-attachments/assets/2e273043-c805-42f3-a746-a913df5817e9" />

### Output
<img width="316" height="19" alt="Image" src="https://github.com/user-attachments/assets/5f17ef28-c81f-4d96-ad77-092b0fc33eff" />
