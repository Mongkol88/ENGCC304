#include <stdio.h>

int main()
{
    int Days;
    printf("Input Days : ");
    scanf("%d", &Days);
    float cal = Days * 24 * 3600;
    printf("%d Days = %.0f seconds", Days,cal);
    return 0;
}