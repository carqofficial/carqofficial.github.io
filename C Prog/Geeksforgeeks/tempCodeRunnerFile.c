/*C
Language
Welcome To C!!*/

#include <stdio.h>

int main()
{
    int a,b, addint, subint;
    float c, d, addfloat, subfloat;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    addint = (a + b);
    subint = (a - b);

    addfloat = (c + d);
    subfloat = (c - d);

    printf("%d %d", addint, subint);
    printf("\n%.1f %.1f", addfloat, subfloat);

    return 0;
}

