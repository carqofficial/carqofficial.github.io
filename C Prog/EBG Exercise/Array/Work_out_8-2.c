#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("\nEnter the number of students : ");
    scanf("%d", &n);
    double MARKS[n + 1];
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\nFor student no %d  : \nEnter the Marks : ", i);
        scanf("%lf", &MARKS[i]);
    }
    int count9, count19, count29, count39, count49, count59, count69, count79, count89, count99;
    count9 = count19 = count29 = count39 = count49 = count59 = count69 = count79 = count89 = count99 = 0;
    for (i = 1; i <= n; i++)
    {
        if (MARKS[i] <= 100)
        {
            if (MARKS[i] <= 89)
            {
                if (MARKS[i] <= 79)
                {
                    if (MARKS[i] <= 69)
                    {
                        if (MARKS[i] <= 59)
                        {
                            if (MARKS[i] <= 49)
                            {
                                if (MARKS[i] <= 39)
                                {
                                    if (MARKS[i] <= 29)
                                    {
                                        if (MARKS[i] <= 19)
                                        {
                                            if (MARKS[i] <= 9)
                                            {
                                                if (MARKS[i] < 0)
                                                {
                                                    printf("\nEntered wrong input for student no %d", i);
                                                }
                                                else
                                                {
                                                    count9++;
                                                }
                                            }
                                            else
                                            {
                                                count19++;
                                            }
                                        }
                                        else
                                        {
                                            count29++;
                                        }
                                    }
                                    else
                                    {
                                        count39++;
                                    }
                                }
                                else
                                {
                                    count49++;
                                }
                            }
                            else
                            {
                                count59++;
                            }
                        }
                        else
                        {
                            count69++;
                        }
                    }
                    else
                    {
                        count79++;
                    }
                }
                else
                {
                    count89++;
                }
            }
            else
            {
                count99++;
            }
        }
    }
    printf("\nNumber of students in the range of ");
    printf("\n 00 -- 09 --------> %d", count9);
    printf("\n 10 -- 19 --------> %d", count19);
    printf("\n 20 -- 29 --------> %d", count29);
    printf("\n 30 -- 39 --------> %d", count39);
    printf("\n 40 -- 49 --------> %d", count49);
    printf("\n 50 -- 59 --------> %d", count59);
    printf("\n 60 -- 69 --------> %d", count69);
    printf("\n 70 -- 79 --------> %d", count79);
    printf("\n 80 -- 89 --------> %d", count89);
    printf("\n90 -- 100 --------> %d", count99);
    printf("\n\nPress any key to exit...");
    getch();
    printf("\n\n");
    return 0;
}