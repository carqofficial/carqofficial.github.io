#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    double a, b, c, DINO, ROOT_DINO, X1, X2, img_DINO;
START:
    printf("\nFor the equation ax^2+bx=c = 0 : ");
    printf("\nEnter the value of a : ");
    scanf(" %lf", &a);
    printf("Enter the value of b : ");
    scanf(" %lf", &b);
    printf("Enter the value of c : ");
    scanf(" %lf", &c);

    DINO = (pow(b, 2) - (4 * a * c));
    /*printf("\nDINO = %lf", DINO);*/
    if (DINO > 0)
    {
        if (a != 0)
        {
            ROOT_DINO = sqrt(DINO);
            X1 = ((ROOT_DINO - b) / (a * 2));
            X2 = ((-ROOT_DINO - b) / (a * 2));
            printf("\nRoots of the equation : ");
            printf("\n------------------------");
            int bfr_deml1, bfr_deml2, X2pstv;
            X2pstv = (X2) * (-1);
            bfr_deml1 = (int)X1;
            bfr_deml2 = (int)X2pstv;
            int count;
            count = 0;
            if (bfr_deml1 >= bfr_deml2)
            {
                while (bfr_deml1 != 0)
                {
                    count++;
                    bfr_deml1 = bfr_deml1 / 10;
                }
            }
            else if (bfr_deml2 > bfr_deml1)
            {
                while (bfr_deml2 != 0)
                {
                    count++;
                    bfr_deml2 = bfr_deml2 / 10;
                }
            }
            int j;
            for (j = 1; j <= count; j++)
            {
                printf("-");
            }
            printf("\nx1 = %*.2lf", (count + 3), X1);
            printf("\nx2 = %*.2lf", (count + 3), X2);
            printf("\n------------------------");
            for (j = 1; j <= count; j++)
            {
                printf("-");
            }
        }
        else
        {
            printf("\nPlease enter the correct data!");
            goto START;
        }
    }
    else if (DINO == 0)
    {
        if (a != 0)
        {
            ROOT_DINO = 0;
            X1 = X2 = ((-b) / (2 * a));
            printf("\nRoots of the equation : ");
            printf("\n------------------------");
            int bfr_deml;
            bfr_deml = (int)X1;
            int count;
            count = 0;

            while (bfr_deml != 0)
            {
                count++;
                bfr_deml = bfr_deml / 10;
            }

            int j;
            for (j = 1; j <= count; j++)
            {
                printf("-");
            }
            printf("\nx1 = %*.2lf", (count + 3), X1);
            printf("\nx1 = %*.2lf", (count + 3), X2);
            printf("\n------------------------");
            for (j = 1; j <= count; j++)
            {
                printf("-");
            }
        }
        else
        {
            printf("\nPlease enter the correct data!");
            goto START;
        }
    }

    else if (DINO < 0)
    {
        if (a != 0)
        {
            img_DINO = ((DINO) * (-1));
            ROOT_DINO = sqrt(img_DINO);
            X1 = X2 = ((-b) / (2 * a));
            printf("\nRoots of the equation : ");
            printf("\n------------------------");
            int bfr_deml;
            bfr_deml = (int)X1;
            int count;
            count = 0;
            int j;
            for (j = 1; j <= count; j++)
            {
                printf("-");
            }
            printf("\nx1 = %*.2lf + %*.2lfi", (count + 3), X1, (count + 3), ROOT_DINO);
            printf("\nx1 = %*.2lf - %*.2lfi", (count + 3), X2, (count + 3), ROOT_DINO);
            printf("\n------------------------");
            for (j = 1; j <= count; j++)
            {
                printf("-");
            }
        }
        else
        {
            printf("\nPlease enter the correct data!");
            goto START;
        }
    }
    else if ((a == 0) && (b == 0))
    {
        printf("\nThe equation has no solution.");
    }

    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");

    return 0;
}