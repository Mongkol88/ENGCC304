# โจทย์
เขียนโปรแกรมภาษาซีเพื่อรับข้อมูลพนักงานของบริษัทซอร์ฟแวร์ โดยรับข้อมูล รหัสประจำตัวพนักงาน , จำนวนชั่วโมงที่ทำงาน , รายได้ต่อชั่วโมง จากนั้นให้แสดงข้อมูลเลขประจำตัวพนักงาน พร้อมกับรายได้ทั้งหมดที่หนักงานจะได้รับทั้งหมด

## FIX CODE
```c
#include <stdio.h>

int main()
{
    char Employees_ID[10];
    float  working_hrs;
    float Salary;
    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", &Employees_ID);
    printf("Input the working hrs: ");
    scanf("%f", &working_hrs);
    printf("Salary amount/hr: ");
    scanf("%f", &Salary);
    float cal = working_hrs * Salary;
    printf("Expected Output: \n");
    printf("Employees ID = %s\n", Employees_ID);
    printf("Salary = U$ %0.2f\n", cal);
    return 0;
}
```

## TEST CASE 1
### Input
<img width="475" height="68" alt="Image" src="https://github.com/user-attachments/assets/551ddf6d-9018-4b43-9831-2f60a7e2d6fd" />

### Output
<img width="233" height="65" alt="Image" src="https://github.com/user-attachments/assets/39372f04-60d6-4503-b6bf-34cf885b92f6" />

## TEST CASE 2
### Input
<img width="494" height="65" alt="Image" src="https://github.com/user-attachments/assets/67bb9a46-aedd-48f2-bb89-fe3c823302ec" />

### Output
<img width="257" height="67" alt="Image" src="https://github.com/user-attachments/assets/ea4a58fa-c4c0-4425-a9f1-82dc7093d7ff" />