#include <stdio.h>

void DIGIT_FORM(int *num, int (*arr)[*num + 1], int *DIGIT)
{
    int i;
    *DIGIT = 0;
    for (i = *num - 1; i >= 0; i--)
    {
        *DIGIT = (((*DIGIT) * 10) + (*arr)[i]);
    }
}

int main()
{
    int num;
    printf("\nEnter the number of digits : ");
    scanf("%d", &num);
    int arr[num + 1];

    int i;
    for (i = 0; i < num; i++)
    {
        printf("Enter the digit %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int DIGIT;
    DIGIT_FORM(&num, &arr, &DIGIT);

    printf("\nThe digit fromed by the given digit : %d\n\n", DIGIT);
    return 0;
}