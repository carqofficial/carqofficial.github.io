#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    printf("\nTo terminate the process 9999 must be entered.\n");
    int negative, i;
    double num, ROOT;
    negative = 0;
    i = 0;
    while (i <= 100)
    {
        i++;
        printf("\n%*d. Enter number : ", 3, i);
        scanf("%lf", &num);
        if (num == 9999)
        {
            goto exit;
        }
        if (num < 0)
        {
            printf("     Entered negative number.");
            negative++;
            continue;
        }
        ROOT = sqrt(num);
        printf("     Number : %.2lf && Square-root : %.2lf", (num + 0.0045), (ROOT + 0.0045));
    }

exit:
    printf("\nNumber entered %d times.", i);
    printf("\nNegative number entered %d times.\n\n", negative);
    return 0;
}