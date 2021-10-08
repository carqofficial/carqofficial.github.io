#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*variable declearation*/
    int ASCII;

    /*variable initialization*/
    printf("\nEnter a number and charecter associated with the ASCII value will be shown : ");
    scanf("%d", &ASCII);

    /*logic*/
    if (0 <= ASCII && ASCII <= 128)
    {
        printf("\nCharecter associated with the ASCII value %d is : %c", ASCII, ASCII);
    }

    /*else if(ASCII<0)
    {
        printf("\nFor ASCII Value only 0 to 128 numbers are accepected");
        exit(0);
    }*/

    else
    {
        printf("\nFor ASCII Value only 0 to 128 numbers are accepected");
        exit(0);
    }

    return 0;
}