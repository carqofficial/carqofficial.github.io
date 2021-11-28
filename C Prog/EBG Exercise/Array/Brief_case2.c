#include <stdio.h>
#include <math.h>
#include <conio.h>

int main()
{
    double n[10000], sum;
    int k;
    k = 0;
    sum = 0;
    printf("\n--------------------------------");
    printf("\nTo end input session, enter 0 : ");
    printf("\n--------------------------------\n\n");
    n[0] = 1;
    while (n[k] != 0)
    {
        k++;
        printf("Enter the number %d : ", k);
        scanf("%lf", &n[k]);
        sum += n[k];
    }
    /*printf("\nSum : %lf", sum);*/

    double mean;
    mean = sum / (k - 1);
    /*printf("\nMean : %lf", mean);*/

    int i;
    double term[k], variance;
    variance = 0;
    for (i = 1; i <= (k - 1); i++)
    {
        term[i] = pow((n[i] - mean), 2);
        variance += term[i];
    }
    /*printf("\nVariance : %lf", (variance / (k - 1)));*/

    double sd;
    sd = sqrt((variance / (k - 1)));
    printf("\nCalculated standard deviation from the given data : %.2lf", sd);
    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}