#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    int N;
    printf("\nEnter the number of the customers : ");
    scanf("%d", &N);
    char F_NAME[N + 1][1000], M_NAME[N + 1][1000], L_NAME[N + 1][1000], TELEPHONE[N + 1][1000], check_middle[N + 1], NAME[N + 1][1000], temp[1000];
    int i;
    system("cls");
    for (i = 0; i < N; i++)
    {
        if (i == 0)
        {
            printf("\nFor 1st customer : ");
        }
        if (i == 1)
        {
            printf("\nFor 2nd customer : ");
        }
        if (i == 2)
        {
            printf("\nFor 3rd customer : ");
        }
        else if (i >= 3)
        {
            printf("\nFor %dth customer : ", (i + 1));
        }
        printf("\nEnter the first name       : ");
        scanf("%s", &F_NAME[i]);
        printf("Middle name ? (y/n)");
        scanf("%s", &check_middle[i]);
        if ((check_middle[i] == 'y') || (check_middle[i] == 'Y'))
        {
            printf("Enter the middle name      : ");
            scanf("%s", &M_NAME[i]);
        }
        else if ((check_middle[i] == 'n') || (check_middle[i] == 'N'))
        {
            goto NEXT;
        }
    NEXT:
        printf("Enter the last name        : ");
        scanf("%s", &L_NAME[i]);
        printf("Enter the telephone number : ");
        scanf("%s", &TELEPHONE[i]);
        printf("\n");
    }

    printf("\nFULL NAME            TELEPHONE NUMBER");
    for (i = 0; i < N; i++)
    {

        strcat(NAME[i], L_NAME[i]);
        strcat(NAME[i], ",");
        strcat(NAME[i], " ");
        temp[0] = F_NAME[i][0];
        temp[1] = '\0';
        strcat(NAME[i], temp);
        if (check_middle[i] == 'y')
        {
            temp[0] = M_NAME[i][0];
            temp[1] = '\0';
            strcat(NAME[i], ".");
            strcat(NAME[i], temp);
        }
    }
    system("cls");
    for (i = 0; i < N; i++)
    {
        if ((check_middle[i] == 'y') || (check_middle[i] == 'Y'))
        {
            printf("\n%-20s  %-12s", NAME[i], TELEPHONE[i]);
        }
        else if ((check_middle[i] == 'n') || (check_middle[i] == 'N'))
        {
            printf("\n%-20s  %-12s", NAME[i], TELEPHONE[i]);
        }
    }
    printf("\n\n");
    return 0;
}