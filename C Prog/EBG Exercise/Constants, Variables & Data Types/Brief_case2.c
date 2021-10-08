#include<stdio.h>
#define F_MAX 250
#define F_MIN 0
#define STEP_UP 10

int main()
{
    /*declearing variables*/
    typedef float temp;
    temp faren, celsius;

    /*initializing variables*/
    printf("\n    Fahrenheit             Celsius     ");
    faren = F_MIN;
    

    /*establishing logics*/
    while(faren <= F_MAX)
    {
        celsius = (((faren -32)/9)*5);
        printf("\n      %5.1f               %7.2f     ", faren, celsius);
        faren = (faren + STEP_UP);
    }


    return 0;
}