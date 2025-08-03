/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{   
    char Hex[50];
    printf("User input :");
    scanf("%s", &Hex);
    long Cal = strtol(Hex, NULL, 16);
    
    return 0;
}