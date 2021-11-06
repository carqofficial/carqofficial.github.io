#include <stdio.h>

int main()
{
    int NUM_STUD, NUM_SUB;
    printf("\nEnter the number of students : ");
    scanf("%d", &NUM_STUD);
    printf("Enter the number of subjects : ");
    scanf("%d", &NUM_SUB);
    double SCORE, SUM[NUM_STUD];
    char ROLL_NUM[NUM_STUD][500];
    int i, j, k;
    for (i = 1; i <= NUM_STUD; i++)
    {
        printf("\nFor student %d : ", i);
        printf("\nEnter the roll number : ");
        scanf(" %[^\n]%*c", &ROLL_NUM[i]);
        for (j = 1; j <= NUM_SUB; j++)
        {
            printf("Enter the score in subject %d : ", j);
            scanf("%lf", &SCORE);
            SUM[i] += SCORE;
        }
    }
    printf("\n---------------------------------------------------------------------------------");
    printf("\n     Students Roll No.                          Students Marks in Percentage");
    printf("\n---------------------------------------------------------------------------------");
    for (k = 1; k <= NUM_STUD; k++)
    {
        printf("\n         %s                                             %.2lf", ROLL_NUM[k], (((SUM[k]) / 100) * (NUM_SUB * 100)));
    }
    printf("\n---------------------------------------------------------------------------------\n\n");
    return 0;
}