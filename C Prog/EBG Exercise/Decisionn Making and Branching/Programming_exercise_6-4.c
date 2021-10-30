/*help --> 1. https://www.tutorialspoint.com/How-to-assign-multiple-values-to-same-variable-in-Chash
               2. https://www.w3schools.com/cs/cs_arrays.php
               3. https://stackoverflow.com/questions/18036620/how-to-give-a-variable-multiple-values
*/

#include <stdio.h>

int main()
{
    int STU_NUM, i, j;
    printf("\nEnter the number of students : ");
    scanf("%d", &STU_NUM);
    double MARKS[STU_NUM];
    int ROLL[STU_NUM];

    for (i = 1; i <= STU_NUM; i++)
    {
        switch (i)
        {
        case 1:
            printf("\nEnter %dst stdent roll & marks : ", i);
            scanf("%d %lf", &ROLL[i], &MARKS[i]);
            break;

        case 2:
            printf("Enter %dnd stdent roll & marks : ", i);
            scanf("%d %lf", &ROLL[i], &MARKS[i]);
            break;
        case 3:
            printf("Enter %drd stdent roll & marks : ", i);
            scanf("%d %lf", &ROLL[i], &MARKS[i]);
            break;
        default:
            printf("Enter %dth stdent roll & marks : ", i);
            scanf("%d %lf", &ROLL[i], &MARKS[i]);
            break;
        }
    }

    int count80, count60, count40, INCOUNT80, INCOUNT60, INCOUNT40, INCOUNT00;
    count80 = 0;
    count60 = 0;
    count40 = 0;
    INCOUNT00 = 0;
    INCOUNT40 = 0;
    INCOUNT60 = 0;
    INCOUNT80 = 0;
    for (j = 1; j <= STU_NUM; j++)
    {
        if (MARKS[j] > 80)
        {
            count80 += 1;
            switch (count80)
            {
            case 1:
                printf("\nRoll no. of students' obtained more than 80 marks : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
        /*printf("\nMarks : %lf, Roll : %d", MARKS[j], ROLL[j]);*/
    }
    if (count80 == 0)
    {
        printf("\nNo one get above 80 marks.");
    }
    for (j = 1; j <= STU_NUM; j++)
    {
        if (MARKS[j] > 60)
        {
            count60 += 1;
            switch (count60)
            {
            case 1:
                printf("\nRoll no. of students' obtained more than 60 marks : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
    }
    if (count60 == 0)
    {
        printf("\nNo one get above 60 marks.");
    }
    for (j = 1; j <= STU_NUM; j++)
    {
        if (MARKS[j] < 40)
        {
            count40 += 1;
            switch (count40)
            {
            case 1:
                printf("\nRoll no. of students' obtained less than 40 marks : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
        /*printf("\nMarks : %lf, Roll : %d", MARKS[j], ROLL[j]);*/
    }
    if (count40 == 0)
    {
        printf("\nNo one get less than 40 marks.");
    }
    printf("\n");
    for (j = 1; j <= STU_NUM; j++)
    {
        if ((MARKS[j] > 80) && (MARKS[j] <= 100))
        {
            INCOUNT80 += 1;
            switch (INCOUNT80)
            {
            case 1:
                printf("\nRoll no. of student's getting marks between 100 to 81 : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
    }
    if (INCOUNT80 == 0)
    {
        printf("\nNo one get marks between 100 to 81");
    }
    for (j = 1; j <= STU_NUM; j++)
    {
        if ((MARKS[j] > 60) && (MARKS[j] <= 80))
        {
            INCOUNT60 += 1;
            switch (INCOUNT60)
            {
            case 1:
                printf("\nRoll no. of student's getting marks between  80 to 61 : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
    }
    if (INCOUNT60 == 0)
    {
        printf("\nNo one get marks between  80 to 61");
    }
    for (j = 1; j <= STU_NUM; j++)
    {
        if ((MARKS[j] > 40) && (MARKS[j] <= 60))
        {
            INCOUNT40 += 1;
            switch (INCOUNT40)
            {
            case 1:
                printf("\nRoll no. of student's getting marks between  60 to 41 : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
    }
    if (INCOUNT40 == 0)
    {
        printf("\nNo one get marks between  60 to 41");
    }
    for (j = 1; j <= STU_NUM; j++)
    {
        if ((MARKS[j] > 0) && (MARKS[j] <= 40))
        {
            INCOUNT00 += 1;
            switch (INCOUNT00)
            {
            case 1:
                printf("\nRoll no. of student's getting marks between  40 to  0 : ");
                printf("%d", ROLL[j]);
                break;

            default:
                printf(", %d", ROLL[j]);
                break;
            }
        }
    }
    if (INCOUNT00 == 0)
    {
        printf("\nNo one get marks between  40 to  0");
    }
    printf("\n\n");

    return 0;
}