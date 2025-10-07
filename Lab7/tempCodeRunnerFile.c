#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand( time( NULL ) );
    int Plr_Starter_Point = 100, score = 100, random_Num = rand() % 100 + 1, scope_Min = 1, scope_Max =  100,input = 0, PlayOrExit = 0;
    printf("Do you want to play game (1=play,-1=exit) : ");
    scanf(" %d", &PlayOrExit);
    if (PlayOrExit == 1)
    {
        printf("(Score = %d)\n", score);    
        do
        {
            printf("Guess the winning number (%d-%d) : \n", scope_Min, scope_Max);
            int check = scanf(" %d", &input);
            if (input > 100 || input <= 0)
            {
                printf("ใส่เลข 1-100 อย่างเดียวครับพี่ :(\n");
            } else if (check == 0)
            {
                printf("Input ตัวเลข Only!!!!\n");
            } else if (input == random_Num)
            {
                printf("That is correct! The winning number is %d \n\n", random_Num);
                main();
                break;
            } else if (input >= random_Num)
            {
                score -= 10;
                printf("Sorry, the winning number is LOWER  than %d.  (Score = %d)\n\n", input, score);
                scope_Max = input - 1;
            } else if (input <= random_Num)
            {
                score -= 10;
                printf("Sorry, the winning number is HIGHER than %d.  (Score = %d)\n\n", input, score);
                scope_Min = input + 1;
            }
            if ( score == 0 )
            {
                printf("Game over! Score = %d \n", score);
                main();
                break;
            }
        } while ( 1 );

    } else if (PlayOrExit == -1)
    {
        printf("See you again.\n");
    } else
    {
        printf("Please enter only 1 or -1. \n");
        printf("Do you want to play game (1=play,-1=exit) : ");
        scanf(" %d", &PlayOrExit);
        if (PlayOrExit == 1)
        {
            main();
        } else if (PlayOrExit == -1)
        {
            printf("See you again.\n");
        } else
        {
            printf("Please enter only 1 or -1.\n\nRetrun to the game agin!\n\n");
            main();
        }
    }
    return 0;
}