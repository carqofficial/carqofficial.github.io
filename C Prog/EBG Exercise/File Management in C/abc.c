#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
double area(triangle *tr)
{
    double area, p, semi_area;
    p = (tr->a + tr->b + tr->c) / 2;
    semi_area = p * (p - tr->a) * (p - tr->b) * (p - tr->c);
    area = sqrt(semi_area);
    return (area);
}

void sort_by_area(triangle *tr, int n)
{
    double a[n], min_area;
    triangle temp;
    int i, j, pos_min;
    for (i = 0; i < n; i++)
    {
        a[i] = area(&(tr[i]));
        /*printf("%.2lf  ", a[i]);*/
    }
    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < (n - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = (tr[j]);
                (tr[j]) = (tr[j + 1]);
                (tr[j + 1]) = temp;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    /*for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }*/
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}