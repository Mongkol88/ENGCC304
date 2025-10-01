#include <stdio.h>
#include <string.h>
struct Student {
    int Student;
    char Name[20] ;
    char ID[5] ;
    int ScoreSub[5] ;
} typedef S ;

void GetGrades(int score) {
    if (score >= 80 && score <= 100) printf(" A ");
    else if (score >= 75 && score < 80)  printf("B+ "); 
    else if (score >= 70 && score < 75)  printf("B ");
    else if (score >= 65 && score < 70) printf("C+ ");
    else if (score >= 60 && score < 65) printf("C ");
    else if (score >= 55 && score < 60) printf("D+ ");
    else if (score >= 50 && score < 55) printf("D ");
    else if (score >= 0 && score < 50) printf("F ");
    else printf(" XX ");
}

void showStudentABC(int studentNum,char Name[20],char ID[5],int ScoreSub[5]) {
    float result = 0;
    printf("\n");
    printf("\nStudent %d:\n", studentNum);
    printf("Name:%s\n", Name);
    printf("ID:%s\n", ID);
    printf("Scores:");
    for (int i = 0; i < 5; i++)
    {
        printf(" %d", ScoreSub[i]);
    }
    printf("\nGrades: ");
    for (int i = 0; i < 5; i++)
    {
        GetGrades(ScoreSub[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        result += ScoreSub[i];
    }
    printf("\nAverage Scores: %.1f", result / 5);
}

int main()
{
    struct Student A;
    struct Student B;
    struct Student C;

    printf("Enter the details of 3 students : ");
    
    for (int i = 1; i <= 3; i++)
    {
        printf("\nStudent %d:", i);
        if ( i == 1)
        {
            A.Student = i;
            printf("\nName: ");
            scanf("%s", &A.Name);
            printf("ID: ");
            scanf("%s", &A.ID);
            for (int i = 1; i <= 5; i++)
            {
                printf("Scores in Subject %d:", i);
                scanf("%d", &A.ScoreSub[i - 1]);
            }
        } else if ( i == 2)
        {
            B.Student = i;
            printf("\nName: ");
            scanf("%s", &B.Name);
            printf("ID: ");
            scanf("%s", &B.ID);
            for (int i = 1; i <= 5; i++)
            {
                printf("Scores in Subject %d:", i);
                scanf("%d", &B.ScoreSub[i - 1]);
            }
        } else if ( i == 3)
        {
            C.Student = i;
            printf("\nName: ");
            scanf("%s", &C.Name);
            printf("ID: ");
            scanf("%s", &C.ID);
            for (int i = 1; i <= 5; i++)
            {
                printf("Scores in Subject %d:", i);
                scanf("%d", &C.ScoreSub[i - 1]);
            }
        }
    }

    printf("------------------result------------------");
    showStudentABC(A.Student,A.Name, A.ID, A.ScoreSub);
    showStudentABC(B.Student,B.Name, B.ID, B.ScoreSub);
    showStudentABC(C.Student,C.Name, C.ID, C.ScoreSub);
    return 0;
}