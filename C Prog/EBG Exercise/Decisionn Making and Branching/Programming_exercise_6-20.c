#include <stdio.h>
#include <string.h>
#include <conio.h>

/*help -->
1. https://www.geeksforgeeks.org/count-uppercase-lowercase-special-character-numeric-values/
*/

int main()
{
    char str[500];
    int len, upper, lower, special, number;
    upper = 0;
    lower = 0;
    special = 0;
    number = 0;
    printf("\nEnter a string : ");
    scanf("%[^\n]%*c", str);
    len = strlen(str);
    int i;
    for (i = 0; i <= (len - 1); i++)
    {
        if ((str[i] >= 'a') && (str[i] <= 'z'))
        {
            lower++;
        }
        else if ((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            upper++;
        }
        else if ((str[i] >= '0') && (str[i] <= '9'))
        {
            number++;
        }
        else
        {
            special++;
        }
    }
    printf("\nYou have entered  : ");
    printf("\nUppercase letters : %d", upper);
    printf("\nLowercase letters : %d", lower);
    printf("\nspecial charecter : %d", special);
    printf("\nNumbers           : %d\n", number);
    printf("\nPress any key to exit....");
    getch();
    printf("\n\n");
    return 0;
}