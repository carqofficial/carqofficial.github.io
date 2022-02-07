#include <stdio.h>

int main()
{
    double Marks[20][5];
    printf("\nEnter the details : ");
    int i, j;
    for (i = 0; i < 20; i++)
    {
        printf("\nDetails of student %d : \n", i + 1);
        for (j = 0; j < 5; j++)
        {
            printf("Subject-%2d : ", j + 1);
            scanf("%lf", &Marks[i][j]);
        }
    }

    int avg_sub[5], avg_stu[20], count_50;
    count_50 = 0;

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 20; j++)
        {
            avg_sub[i] += Marks[j][i];
        }
        avg_sub[i] /= 20;
    }

    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 5; j++)
        {
            avg_stu[i] += Marks[i][j];
        }
        avg_sub[i] /= 5;
    }

    

    return 0;
}