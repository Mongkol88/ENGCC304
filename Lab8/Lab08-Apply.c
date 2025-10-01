#include <stdio.h>


int main()
{
    int position = 0;
    float experience = 0;
    int projects = 0;
    int Base_Salary = 0, Experience_Bonus = 0, Special_Bonus = 0;
    printf("Position: ");
    scanf("%d", &position);
    printf("Years of Experience: ");
    scanf("%f", &experience);
    printf("Number of Projects Completed this Year: ");
    scanf("%d", &projects);
    switch (position)
    {
    case 1:
        Base_Salary = 20000;
        break;
    case 2:
        Base_Salary = 35000;
        break;
    case 3:
        Base_Salary = 50000;
        break;
    default:
        printf("\n\n** กรุณาใส่เลข 1-3 : ตำเเหน่งงานเลข 1 คือ Junior Programmer , ตำเเหน่งงานเลข 2 คือ Mid-Level Programmer เเละ ตำเเหน่งงานเลข 3 คือ Senior Programmer **\n\n");
        main();
        break;
    }
    if ( experience < 1 )
    {
        Experience_Bonus = 0;
    } else if ( experience > 1 && experience <= 3)
    {
        Experience_Bonus = Base_Salary * 0.10;
    } else if ( experience >= 4 && experience <= 5 )
    {
        Experience_Bonus = Base_Salary * 0.15;
    } else if ( experience > 5 )
    {
        Experience_Bonus = Base_Salary * 0.20;
    }
    if ( projects >= 5)
    {
        Special_Bonus = Base_Salary * 0.05;
    }
    
    printf("Base Salary: %d\nExperience Bonus: %d\nSpecial Bonus: %d\nNet Salary: %d\n", Base_Salary, Experience_Bonus, Special_Bonus, Base_Salary + Experience_Bonus + Special_Bonus);
    return 0;
}
