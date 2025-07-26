/*
    จงเขียนโปรแกรมเพื่อแปลงหน่วยจาก "วัน" เป็น "วินาที"
    
    Test case:
        Input Days : 
            8
    Output:
        8 days = 691200 seconds

    Test case:
        Input Days : 
            27
    Output:
        27 days = 2332800 seconds
*/

#include <stdio.h>

int main()
{
    int Days;
    printf("Enter Days to Canvert Seconds : ");
    scanf("%d", &Days);
    float cal = Days * 24 * 3600;
    printf("%.0f", cal);
    return 0;
}
