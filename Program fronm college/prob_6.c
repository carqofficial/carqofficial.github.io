#include <stdio.h>
#include <math.h>
int main()
{
    double sidea, sideb, h, area, a2, b4, h2;
    printf("\nMention the one of the equal side of the isosceles triangle (in cm.) : ");
    scanf("%lf", &sidea);
    printf("Mention the another side of the isosceles triangle (in cm.) : ");
    scanf("%lf", &sideb);

    if (sidea >= (sideb / 2))
    {
        a2 = pow(sidea, 2);
        b4 = (pow(sideb, 2)) / 4;
        h2 = a2 - b4;
        h = sqrt(h2);
        area = (h * sidea) / 2;
        printf("\nArea of the isosceles triangle : %lf sq.cm.\n\n", area);
    }
    else
    {
        printf("\nYou have entered wrong measurements of the sides\n\n");
    }

    return 0;
}