#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct CENSUS
{
    char city[1000];
    long long int population_city;
    float literacy_level;
};
void DATA_ENTRY(struct CENSUS *city_temp)
{
    printf("\nEnter the city name : ");
    gets(city_temp->city);
    city_temp->city[strlen(city_temp->city)] = '\0';
    printf("Enter the city population : ");
    scanf("%lld", &city_temp->population_city);
    printf("Enter the literacy level of the city : ");
    scanf("%lf", &city_temp->literacy_level);
}
void LITERACY_SORT(int *num_temp, struct CENSUS *city_temp[])
{
    int i, j, pos_min;
    CENS *city_min;
    for (i = 0; i < (*num_temp - 1); i++)
    {
        city_min.literacy_level = city_temp[i]->literacy_level;
        pos_min = i;
        for (j = i; j < *num_temp; j++)
        {
            if (city_temp[j]->literacy_level < city_min.literacy_level)
            {
                city_min.literacy_level = city_temp[j]->literacy_level;
                city_min.population_city = city_temp[j]->population_city;
                strcpy(city_min.city, city_temp[j]->city);
                pos_min = j;
            }
        }
        city_temp[pos_min]->literacy_level = city_temp[i]->literacy_level;
        city_temp[pos_min]->population_city = city_temp[i]->population_city;
        strcpy(city_temp[pos_min]->city, city_temp[i]->city);
        city_temp[i]->literacy_level = city_min.literacy_level;
        city_temp[i]->population_city = city_min.population_city;
        strcpy(city_temp[i]->city, city_min.city);
    }
}
void POPULATION_SORT(int *num_temp, struct CENSUS *city_temp[])
{
    int i, j, pos_min;
    CENS *city_min;
    for (i = 0; i < (*num_temp - 1); i++)
    {
        city_min->population_city = city_temp[i]->population_city;
        pos_min = i;
        for (j = i; j < *num_temp; j++)
        {
            if (city_temp[j]->population_city < city_min->population_city)
            {
                city_min->literacy_level = city_temp[j]->literacy_level;
                city_min->population_city = city_temp[j]->population_city;
                strcpy(city_min->city, city_temp[j]->city);
                pos_min = j;
            }
        }
        city_temp[pos_min]->literacy_level = city_temp[i]->literacy_level;
        city_temp[pos_min]->population_city = city_temp[i]->population_city;
        strcpy(city_temp[pos_min]->city, city_temp[i]->city);
        city_temp[i]->literacy_level = city_min->literacy_level;
        city_temp[i]->population_city = city_min->population_city;
        strcpy(city_temp[i]->city, city_min->city);
    }
}
void CITY_NAME_SORT(int *num_temp, struct CENSUS *city_temp[])
{
    int i, j, pos_min;
    CENS *city_min;
    for (i = 0; i < (*num_temp - 1); i++)
    {
        strcpy(city_min->city, city_temp[i]->city);
        pos_min = i;
        for (j = i; j < *num_temp; j++)
        {
            if (strcmp(city_temp[j]->city, city_min->city) < 0)
            {
                city_min->literacy_level = city_temp[j]->literacy_level;
                city_min->population_city = city_temp[j]->population_city;
                strcpy(city_min->city, city_temp[j]->city);
                pos_min = j;
            }
        }
        city_temp[pos_min]->literacy_level = city_temp[i]->literacy_level;
        city_temp[pos_min]->population_city = city_temp[i]->population_city;
        strcpy(city_temp[pos_min]->city, city_temp[i]->city);
        city_temp[i]->literacy_level = city_min->literacy_level;
        city_temp[i]->population_city = city_min->population_city;
        strcpy(city_temp[i]->city, city_min->city);
    }
}

void MAX(int *num_temp, CENS *city_temp[*num_temp], int *max_city, int *max_population, int *max_literacy)
{
    int MAX_LIT, MAX_POP, i;
    MAX_LIT = 0;
    MAX_POP = 0;
    for (i = 0; i < *num_temp; i++)
    {
        MAX_POP = (MAX_POP > city_temp[i]->population_city);
    }
}

int main()
{
    int city_num, max_city, max_population, max_literacy;
    printf("\nEnter the number fo the citys : ");
    scanf("%d", &city_num);
    struct CENSUS city[city_num];
    int i;
    for (i = 0; i < city_num; i++)
    {
        DATA_ENTRY(&city[i]);
    }
    int choice;
    printf("\n-------------------------------");
    printf("\n1. Sort alphabetically");
    printf("\n2. Sort based on literacy level");
    printf("\n3. Sort based on population");
    printf("\n-------------------------------");
    printf("\nEnter your choice : ");
    scanf("\n%d", &choice);
    if (choice == 1)
    {
        CITY_NAME_SORT(&city_num, &city);
        printf("\n----------------------------------------");
        printf("\nAfter sorting the datas alphabetically : ");
        printf("\n----------------------------------------");
    }
    else if (choice == 2)
    {
        LITERACY_SORT(&city_num, &city);
        printf("\n----------------------------------------------------------");
        printf("\nAfter sorting the datas alphabetically based on literacy : ");
        printf("\n----------------------------------------------------------");
    }
    else if (choice == 3)
    {
        POPULATION_SORT(&city_num, &city);
        printf("\n------------------------------------------------------------");
        printf("\nAfter sorting the datas alphabetically based on population : ");
        printf("\n------------------------------------------------------------");
    }
    return 0;
}