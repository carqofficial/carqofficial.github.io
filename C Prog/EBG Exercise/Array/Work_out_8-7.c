#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    int X, Y;

START:
    printf("\nEnter the dimension on the matrix (in (ixj) formate) : ");
    scanf("%dx%d", &X, &Y);
    double T[X][Y];
    printf("\nEnter the matrix : ");
    int i, j;
    int len;
    int k, l;
    int count;
    int MAX_INT;
    int MAX;
    char MAX_CHAR[5000];
    count = 0;
    MAX = 0;
    printf("\n");
    if ((X == 0) || (Y == 0))
    {
        printf("\nWrong Input!!\n");
        goto START;
    }
    for (i = 1; i <= X; i++)
    {
        for (j = 1; j <= Y; j++)
        {
            printf("Enter the element a(%dx%d) : ", i, j);
            scanf("%lf", &T[i][j]);
            MAX_INT = (int)T[i][j];
            /*printf(" %d", MAX_INT);*/
            int j = snprintf(MAX_CHAR, 5000, "%d", MAX_INT);
            len = strlen(MAX_CHAR);
            MAX = (MAX >= len) ? MAX : len;
        }
    }
    count = MAX;
    /*printf("%d", MAX);*/
    /*int MAX_INT;
    MAX_INT = (int)MAX;
    int count;
    count = 0;
    while (MAX_INT != 0)
    {
        count++;
        MAX_INT /= 10;
    }*/
    /*printf("\n%d", count);*/
    /*printf("\nThe Matrix is : :' %lf  %lf  %lf ':", T[1][1], T[1][2], T[1][3]);*/
    //for Matrix
    if ((X > 1) && (Y > 1))
    {
        for (i = 1; i <= X; i++)
        {
            if (i == 1)
            {
                printf("\n                %c  ", 218);
                for (l = 1; l <= Y; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("%c", 191);
                printf("\nThe Matrix is : |  ");
                for (j = 1; j <= (Y - 1); j++)
                {
                    /*printf("\n                :  %lf  %lf  %lf  :", );*/
                    printf("%*.2lf  ", (count + 4), T[i][j]);
                }
                printf("%*.2lf  |", (count + 4), T[i][Y]);
                printf("\n                |  ");
                for (l = 1; l <= Y; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("|");
            }
            else if (i == X)
            {
                printf("\n                |  ");
                for (j = 1; j <= (Y - 1); j++)
                {
                    /*printf("\n                :  %lf  %lf  %lf  :", );*/
                    printf("%*.2lf  ", (count + 4), T[i][j]);
                }
                printf("%*.2lf  |", (count + 4), T[i][Y]);
                printf("\n                %c  ", 192);
                for (l = 1; l <= Y; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("%c", 217);
            }
            else
            {
                printf("\n                |  ");
                for (j = 1; j <= Y; j++)
                {
                    /*printf("\n                :  %lf  %lf  %lf  :", );*/
                    printf("%*.2lf  ", (count + 4), T[i][j]);
                }
                printf("|");
                printf("\n                |  ");
                for (l = 1; l <= Y; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("|");
            }
        }
        printf("\n\n");

        //For transpose matrix
        for (i = 1; i <= Y; i++)
        {
            if (i == 1)
            {
                printf("\n                              %c  ", 218);
                for (l = 1; l <= X; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("%c", 191);
                printf("\nTranspose of that matrix is : |  ");
                /*printf("\n                              |  ");*/
                for (j = 1; j <= (X - 1); j++)
                {
                    /*printf("\n                :  %lf  %lf  %lf  :", );*/
                    printf("%*.2lf  ", (count + 4), T[j][i]);
                }
                printf("%*.2lf  |", (count + 4), T[X][i]);
                printf("\n                              |  ");
                for (l = 1; l <= X; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("|");
            }
            else if (i == Y)
            {
                printf("\n                              |  ");
                for (j = 1; j <= (X - 1); j++)
                {
                    /*printf("\n                :  %lf  %lf  %lf  :", );*/
                    printf("%*.2lf  ", (count + 4), T[j][i]);
                }
                printf("%*.2lf  |", (count + 4), T[X][i]);
                printf("\n                              %c  ", 192);
                for (l = 1; l <= X; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("%c", 217);
            }
            else
            {
                printf("\n                              |  ");
                for (j = 1; j <= X; j++)
                {
                    /*printf("\n                :  %lf  %lf  %lf  :", );*/
                    printf("%*.2lf  ", (count + 4), T[j][i]);
                }
                printf("|");
                printf("\n                              |  ");
                for (l = 1; l <= X; l++)
                {
                    for (k = 1; k <= (count + 4); k++)
                    {
                        printf(" ");
                    }
                    printf("  ");
                }
                printf("|");
            }
        }
    }
    else if ((X == 1) || (Y == 1))
    {
        if (X == 1)
        {
            for (i = 1; i <= X; i++)
            {
                if (i == 1)
                {
                    printf("\n                %c  ", 218);
                    for (l = 1; l <= Y; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 191);
                    printf("\nThe Matrix is : |  ");
                    for (j = 1; j <= (Y - 1); j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[i][j]);
                    }
                    printf("%*.2lf  |", (count + 4), T[i][Y]);
                    printf("\n                %c  ", 192);
                    for (l = 1; l <= Y; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 217);
                }
            }
            printf("\n\n");

            //For transpose matrix
            for (i = 1; i <= Y; i++)
            {
                if (i == 1)
                {
                    printf("\n                              %c  ", 218);
                    for (l = 1; l <= X; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 191);
                    printf("\nTranspose of that matrix is : |  ");
                    /*printf("\n                              |  ");*/
                    for (j = 1; j <= (X - 1); j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[j][i]);
                    }
                    printf("%*.2lf  |", (count + 4), T[X][i]);
                    printf("\n                              |  ");
                    for (l = 1; l <= X; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("|");
                }
                else if (i == Y)
                {
                    printf("\n                              |  ");
                    for (j = 1; j <= (X - 1); j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[j][i]);
                    }
                    printf("%*.2lf  |", (count + 4), T[X][i]);
                    printf("\n                              %c  ", 192);
                    for (l = 1; l <= X; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 217);
                }
                else
                {
                    printf("\n                              |  ");
                    for (j = 1; j <= X; j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[j][i]);
                    }
                    printf("|");
                    printf("\n                              |  ");
                    for (l = 1; l <= X; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("|");
                }
            }
        }

        else if (Y == 1)
        {
            for (i = 1; i <= X; i++)
            {
                if (i == 1)
                {
                    printf("\n                %c  ", 218);
                    for (l = 1; l <= Y; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 191);
                    printf("\nThe Matrix is : |  ");
                    for (j = 1; j <= (Y - 1); j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[i][j]);
                    }
                    printf("%*.2lf  |", (count + 4), T[i][Y]);
                    printf("\n                |  ");
                    for (l = 1; l <= Y; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("|");
                }
                else if (i == X)
                {
                    printf("\n                |  ");
                    for (j = 1; j <= (Y - 1); j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[i][j]);
                    }
                    printf("%*.2lf  |", (count + 4), T[i][Y]);
                    printf("\n                %c  ", 192);
                    for (l = 1; l <= Y; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 217);
                }
                else
                {
                    printf("\n                |  ");
                    for (j = 1; j <= Y; j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[i][j]);
                    }
                    printf("|");
                    printf("\n                |  ");
                    for (l = 1; l <= Y; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("|");
                }
            }
            printf("\n\n");

            //For transpose matrix
            for (i = 1; i <= Y; i++)
            {
                if (i == 1)
                {
                    printf("\n                              %c  ", 218);
                    for (l = 1; l <= X; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 191);
                    printf("\nTranspose of that matrix is : |  ");
                    /*printf("\n                              |  ");*/
                    for (j = 1; j <= (X - 1); j++)
                    {
                        /*printf("\n                :  %lf  %lf  %lf  :", );*/
                        printf("%*.2lf  ", (count + 4), T[j][i]);
                    }
                    printf("%*.2lf  |", (count + 4), T[X][i]);
                    printf("\n                              %c  ", 192);
                    for (l = 1; l <= X; l++)
                    {
                        for (k = 1; k <= (count + 4); k++)
                        {
                            printf(" ");
                        }
                        printf("  ");
                    }
                    printf("%c", 217);
                }
            }
        }
    }
    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}