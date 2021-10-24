#include<stdio.h>


int main()
{
    /*declearing variable*/
    double NUM, SQUARE;

    /*declearing square function*/
    double square(double NUM);

    /*initializing variables*/
    printf("\nEnter a number and its square will be shown : ");
    scanf("%lf", &NUM);

    SQUARE = square(NUM);

    /*printing*/
    printf("\nSquare of the number you have entered : %lf", SQUARE);


    return 0;
}

/*square functions*/
    double square(double x)
    {
        double p;
        p = (x*x);
        return (p);
    }