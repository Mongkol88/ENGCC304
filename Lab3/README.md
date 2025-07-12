### โจทย์
จงจัดโค้ดโปรแกรมต่อไปนี้ให้อยู่ในรูปแบบมาตรฐาน Codex และแก้ไข Bug ของโปรแกรม
```c++
#include <stduio.h>
#include <math.h>

int isPrime(int num) {if(num<2)return 0;
for (int i = 2; i <= sqrt(num); i++) {
if (num % i == 0)return 0;}return 1;}
  int main() {
 int n;
    printf("Enter N : ");scanf("%d",&n);
int arr[n]; for(int i=0;i<n;i++){
    printf("Enter value[%d] : ",i);
  scanf("%d",&arr[i]);
      }
    printf("Index:  ");
   for (int i = 0;i < n;i++){
 printf("%2d ", i);
}printf("\n");
         printf("Array:  ");
  for(int i=0;i<n;i++){if (isPrime(arr[i]))
printf("%2d ", arr[i]); 
    else
printf("%2s ", "#"); 
    }
    printf("\n");return 0;
        }
```

## FIX CODE
```c
#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if ( num < 2 )
    return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0)
        return 0;
    }
    return 1;
}//End IsPrime Function

int main() {
    int n;
    printf("Enter N : ");
    scanf("%d",&n); 
    int arr[n]; 
    for(int i=0;i<n;i++){
        printf("Enter value[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Index:  ");
    for (int i = 0;i < n;i++){
    printf("%2d ", i);
    }  
    printf("\n");
    printf("Array:  ");
    for (int i = 0 ; i < n ;i++ ) {
        if (isPrime(arr[i]))
            printf("%2d ", arr[i]); 
    else
        printf("%2s ", "#"); 
    }
    printf("\n");return 0;
}//End Main Function
```
## TEST CASE
### Input
<img width="253" height="115" alt="Image" src="https://github.com/user-attachments/assets/b07372f2-2dcd-409a-bc72-09ffe574f276" />

### Output
<img width="223" height="41" alt="Image" src="https://github.com/user-attachments/assets/6f38fb1b-0cee-466c-9b5a-cdcee9d1bb13" />