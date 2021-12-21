#include <stdio.h>
#include <math.h>

double factorial(int);
void calc(float, float *);

int main()
{
    int x;
    float radian, result = 0;

    printf("Enter value of x in degrees\n");
    scanf("%d", &x);

    radian = x * (3.14159 / 180.0); // Convert Degree To Radian

    calc(radian, &result);

    printf("Sin(%d) = %f\n", x, result);

    return 0;
}

void calc(float num, float *res)
{
    int count, n = 1, sign = 1;

    for (count = 1; (n <= 10); count += 2)
    {
        *res += sign * (pow(num, count) / factorial(count));
        n += 1;
        sign *= -1;
    }
}

double factorial(int num)
{
    int count;
    double sum = 1;

    for (count = 1; count <= num; count++)
    {
        sum *= count;
    }
    return (sum);
}