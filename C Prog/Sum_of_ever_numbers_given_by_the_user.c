# include<stdio.h>

int main()
{
    int N, I, NUM, SUM, REM;
    I = 1;
    SUM = 0;
    printf("\nEnter the number of the elements = ");
    scanf("%d", &N);
    while( I <= N)
    {
        printf("\nEnter the data number %d = ", I);
        scanf("%d", &NUM);
        REM = NUM % 2;
        if( REM == 0)
            SUM = SUM + NUM;
        I = I + 1; 
    }
    printf("The sum is %d\n", SUM);
    return 0;
}
