#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int countDigit(int a)
{
    int count;
    char buff[500];
    int ml = snprintf(buff, 500, "%d", a);
    count = strlen(buff);
    return (count);
}

int main()
{
    char ISBN[11];
START:
    printf("\nEnter the ISBN Number : ");
    scanf("%s", &ISBN);
    int DIGIT[10];
    int len = strlen(ISBN);

    if (len > 10)
    {
        printf("\nWrong ISBN number : ");
        goto START;
    }

    for (int i = 0; i <= 9; i++)
    {
        DIGIT[i] = (ISBN[i] - '0');
    }
    /*for (int i = 0; i <= 9; i++)
    {
        printf("%d", DIGIT[i]);
    }*/
    int checker = 0;
    for (int i = 0; i <= 8; i++)
    {
        checker += i * DIGIT[i];
    }
    if (checker == DIGIT[9])
    {
        printf("\nYou have entered correct ISBN number\n\n");
    }
    else if (checker != DIGIT[9])
    {
        printf("\nYou have entered wrong ISBN number.\n\n");
    }
    return 0;
}