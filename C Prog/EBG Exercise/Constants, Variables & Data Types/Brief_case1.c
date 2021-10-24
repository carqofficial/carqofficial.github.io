#include<stdio.h>
/*#define Num 10*/

void main()
{
    /*declearing variables*/
    int Num, count;
    /*int count;*/
    float ENnum, SUM, AVG;

    /*initialization of variables*/
    printf("\nHow many numbers you want to input : ");
    scanf("%d", &Num);
    count = 0;
    SUM = 0;

    /*logic establishing*/
    while(count < Num)
    {
        printf("Enter Number %d : ", (count+1));
        scanf("%f", &ENnum);
        SUM = ( SUM + ENnum);
        count = (count + 1);

    }
    AVG = (SUM / Num);
    printf("\nTotal numbers input : %d\nSum = %f\nAverage = %f", Num, SUM, AVG);
}