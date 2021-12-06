#include <stdio.h>

int main()
{
    char ch[3];
    printf("\nEnter a charecter : ");
    scanf("%c", &ch);
    if (((ch[0] >= 'a') && (ch[0] <= 'z')) || ((ch[0] >= 'A') && (ch[0] <= 'B')))
        printf("\nYou have entered a alphabet.\n\n");
    else if ((ch[0] >= '0') && (ch[0] <= '9'))
        printf("\nYou have entered a number.\n\n");

    return 0;
}