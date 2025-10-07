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
    printf("----\n");
    printf("Expected Output: \n");
    printf("Employees ID = %s\n", Employees_ID);
    printf("Salary = U$ %0.2f\n", cal);
    return 0;
}