#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void sort(int *num, char (*name)[*num + 2][1000])
{
    int k, l, pos_min;
    char min[1000], temp[1000];
    for (k = 0; k < *num - 1; k++)
    {
        strcpy(min, (*name)[k]);
        pos_min = k;
        for (l = k + 1; l < *num; l++)
        {
            if (strcmp((*name)[l], (*name)[k]) < 0)
            {
                pos_min = l;
            }
            strcpy(temp, (*name)[pos_min]);
            strcpy((*name)[pos_min], (*name)[k]);
            strcpy((*name)[k], temp);
        }
    }
}

int main()
{
    int num;
    printf("\nEnter the number of the inputs : ");
    scanf("%d", &num);
    char name[num + 2][1000];
    int i;
    printf("\n");
    for (i = 0; i < num; i++)
    {
        printf("Enter the name (in smallcase) : ");
        scanf(" %[^\n]%*c", name[i]);
    }
    sort(&num, &name);
    printf("\nNames in alphabetical order : ");
    for (i = 0; i < num; i++)
    {
        printf("\n%s", name[i]);
    }
    return 0;
}