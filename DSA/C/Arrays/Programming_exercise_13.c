#include <stdio.h>

double largest_val(int *num, double (*arr)[*num + 1])
{
    double max;
    max = (*arr)[0];
    int i;
    for (i = 1; i < *num; i++)
    {
        if ((*arr)[i] > max)
        {
            max = (*arr)[i];
        }
    }
    return (max);
}
double smallest_val(int *num, double (*arr)[*num + 1])
{
    double min;
    min = (*arr)[0];
    int i;
    for (i = 1; i < *num; i++)
    {
        if ((*arr)[i] < min)
        {
            min = (*arr)[i];
        }
    }
    return (min);
}
int sec_largest_pos(int *num, double (*arr)[*num + 1], double *large)
{
    double sec_large;
    int i, pos_sec;
    sec_large = (*arr)[*num + 1];
    for (i = 1; i < *num; i++)
    {
        if (((*arr)[i] > sec_large) && ((*arr)[i] < *large))
        {
            sec_large = (*arr)[i];
            pos_sec = i;
        }
        else if (sec_large == (*large))
        {
            sec_large = (*arr)[i];
            pos_sec = i;
        }
    }
    return (pos_sec);
}
int sec_smallest_pos(int *num, double (*arr)[*num + 1], double *small)
{
    double sec_small;
    int i, pos_sec;
    sec_small = (*arr)[0];
    for (i = 1; i < *num; i++)
    {
        if (sec_small == (*small))
        {
            sec_small = (*arr)[i];
            pos_sec = i;
        }
        else if (((*arr)[i] < sec_small) && ((*arr)[i] > (*small)))
        {
            sec_small = (*arr)[i];
            pos_sec = i;
        }
    }
    return (pos_sec);
}
void interchange(int *num, double (*arr)[*num + 1], int *pos_large, int *pos_small)
{
    double temp;
    temp = (*arr)[*pos_large];
    (*arr)[*pos_large] = (*arr)[*pos_small];
    (*arr)[*pos_small] = temp;
}

int main()
{
    int num;
    printf("\nEnter the size of the array : ");
    scanf("%d", &num);
    double arr[num + 1];

    printf("\nEnter the array : \n");
    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter the element %d : ", i + 1);
        scanf("%lf", &arr[i]);
    }
    double large, small;
    large = largest_val(&num, &arr);
    small = smallest_val(&num, &arr);
    int pos_sec_large, pos_sec_small;
    /*pos_sec_large = sec_largest_pos(&num, &arr, &large);*/
    /*pos_sec_small = sec_smallest_pos(&num, &arr, &small);*/
    printf("\nMax--> %.2lf, pos --> %d", large, pos_sec_large);
    printf("\nMin--> %.2lf, pos --> %d", small, pos_sec_small);
    interchange(&num, &arr, &pos_sec_large, &pos_sec_small);

    printf("\nArray after interchanging positions among second large and small numbers : ");
    for (i = 0; i < num; i++)
    {
        printf("%.2lf ", arr[i]);
    }
    printf("\n\n");
    return 0;
}