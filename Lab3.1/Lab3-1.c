#include <stdio.h>

int main()
{
    float Hights = 0, Base = 0;
    float result = 0;
    printf("H = ");
    scanf("%f", &Hights);
    printf("W = ");
    scanf("%f", &Base);
    result = (Hights * Base) / 2;
    printf("%.1f", result);
    return 0;
}
