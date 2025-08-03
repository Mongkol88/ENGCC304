#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    srand( time( NULL ) );
    int Plr_Starter_Point = 100, PlayOrExit = 0, score = 100, input = 0, random_Num = rand() % 100 + 1;
    printf("Do you want to play game (1=play,-1=exit) : ");
    scanf("%d", &PlayOrExit);
    if (PlayOrExit == 1)
    {
        printf("(Score = %d)\n", score);
        do
        {
            printf("Guess the winning number (1-100) : \n");
            scanf("%d", &input);
            if (input == random_Num)
            {
                printf("That is correct! The winning number is %d \n\n", random_Num);        
                main();
                break;        
            } else
            {
                score -= 10;
                if (input >= random_Num)
                {
                    printf("Sorry, the winning number is LOWER  than %d.  (Score = %d)\n\n", input, score);
                } else if (input <= random_Num)
                {
                    printf("Sorry, the winning number is HIGHER than %d.  (Score = %d)\n\n", input, score);
                }
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
        while (getchar() != '\n');
        printf("Please enter only 1 or -1. \n");
        printf("Do you want to play game (1=play,-1=exit) : ");
        scanf("%d", &PlayOrExit);
        if (PlayOrExit == 1)
        {
            main();
        } else if (PlayOrExit == -1)
        {
            printf("See you again.\n");
        }
    }
    return 0;
}