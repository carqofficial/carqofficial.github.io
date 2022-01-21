#include <stdio.h>

int main()
{
    FILE *f1, *f2, *f3;
    int num_num, i, num;
    printf("\nHow many number will you enter : ");
    scanf("%d", &num_num);

    f1 = fopen("main", "w");
    for (i = 0; i < num_num; i++)
    {
        printf("Enter the number %d : ", i + 1);
        scanf("%d", &num);
        putw(num, f1);
    }
    fclose(f1);

    f1 = fopen("main", "r");
    f2 = fopen("EVEN.txt", "w");
    f3 = fopen("ODD.txt", "w");

    while ((num = getw(f1)) != EOF)
    {
        if ((num % 2) == 0)
        {
            putw(num, f2);
        }
        else
        {
            putw(num, f3);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
startover:
    printf("\nwhich type of numbers do you want to print : ");
    printf("\n1. even\n2. odd\n3. both");
    printf("\nEnter your chocie : ");
    int choice;
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("\nEven numbers are : ");
        f2 = fopen("EVEN.txt", "r");
        while ((num = getw(f2)) != EOF)
        {
            printf("%d ", num);
        }
        fclose(f2);
    }
    else if (choice == 2)
    {
        printf("\nOdd numbers are : ");
        f3 = fopen("ODD.txt", "r");
        while ((num = getw(f3)) != EOF)
        {
            printf("%d ", num);
        }
        fclose(f3);
    }
    else if (choice == 3)
    {
        printf("\nEven numbers are : ");
        f2 = fopen("EVEN.txt", "r");
        f3 = fopen("ODD.txt", "r");
        while ((num = getw(f2)) != EOF)
        {
            printf("%d ", num);
        }
        fclose(f2);
        printf("\nOdd  numbers are : ");

        while ((num = getw(f3)) != EOF)
        {
            printf("%d ", num);
        }
        fclose(f3);
    }
    else if ((choice != 1) && (choice != 2) && (choice != 3))
    {
        printf("\nEnter the correct choice!!");
        goto startover;
    }
    printf("\n\n");
    return 0;
}