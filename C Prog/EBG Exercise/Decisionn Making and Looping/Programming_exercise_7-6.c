#include <stdio.h>
#include <conio.h>

int main()
{
    int num, count, i;
    printf("\nEnter the number of persons : ");
    scanf("%d", &num);
    int age[num];
    char NAME[num][5000];
    for (i = 1; i <= num; i++)
    {
        printf("\n----------------------------");
        printf("\nFor Person %d : ", i);
        printf("\n----------------------------");
        printf("\nEnter name : ");
        scanf(" %[^\n]%*c", NAME[i]);
        printf("Enter the age : ");
        scanf("%d", &age[i]);
    }
    printf("\n\n---------------------------------------");
    printf("\nPersons aged between 55-60 : ");
    printf("\n---------------------------------------");
    for (i = 1; i <= num; i++)
    {
        if ((age[i] >= 55) && (age[i] <= 60))
        {
            printf("\n%d. %s (age --> %d)", i, NAME[i], age[i]);
        }
    }
    printf("\n---------------------------------------");
    printf("\n\nPress any key to exit........");
    getch();
    printf("\n\n");
    return 0;
}