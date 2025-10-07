#include <stdio.h>

int main()
{
    int Days;
    printf("Input Days : ");
    scanf("%d", &Days);
    float cal = Days * 24 * 3600;
    printf("%.0f", cal);
    return 0;
}