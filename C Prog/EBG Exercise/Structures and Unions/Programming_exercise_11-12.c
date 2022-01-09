#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

/*
***Array are not pointers***
help --> 1. https://stackoverflow.com/questions/20297594/warning-expected-int-but-argument-is-of-type-int-sizetypen

***we can not use "void LITERACY_SORT(int *num_temp, CENS *city_temp[*num_temp])"***
***we have to use "void LITERACY_SORT(int *num_temp, CENS (*city_temp)[*num_temp])"***

 */

struct CENSUS
{
    char city[1000];
    int population_city;
    double literacy_level;
};
typedef struct CENSUS CENS;
void DATA_ENTRY(CENS *city_temp)
{
    printf("\nEnter the city name : ");
    scanf(" %[^\n]%*c", city_temp->city);
    printf("Enter the city population : ");
    scanf("%d", &city_temp->population_city);
    printf("Enter the literacy level of the city (in percentage): ");
    scanf("%lf", &city_temp->literacy_level);
}
/*
void LITERACY_SORT(int *num_temp, CENS (*city_temp)[*num_temp])
{
    int i, j, pos_min;
    CENS city_min;
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
        if (pos_min != i)
        {
            city_temp[pos_min]->literacy_level = city_temp[i]->literacy_level;
            city_temp[pos_min]->population_city = city_temp[i]->population_city;
            strcpy(city_temp[pos_min]->city, city_temp[i]->city);
            city_temp[i]->literacy_level = city_min.literacy_level;
            city_temp[i]->population_city = city_min.population_city;
            strcpy(city_temp[i]->city, city_min.city);
        }
    }
}
void POPULATION_SORT(int *num_temp, CENS (*city_temp)[*num_temp])
{
    int i, j, pos_min;
    CENS city_min;
    for (i = 0; i < (*num_temp - 1); i++)
    {
        city_min.population_city = city_temp[i]->population_city;
        pos_min = i;
        for (j = i; j < *num_temp; j++)
        {
            if (city_temp[j]->population_city < city_min.population_city)
            {
                city_min.literacy_level = city_temp[j]->literacy_level;
                city_min.population_city = city_temp[j]->population_city;
                strcpy(city_min.city, city_temp[j]->city);
                pos_min = j;
            }
        }
        if (pos_min != i)
        {
            city_temp[pos_min]->literacy_level = city_temp[i]->literacy_level;
            city_temp[pos_min]->population_city = city_temp[i]->population_city;
            strcpy(city_temp[pos_min]->city, city_temp[i]->city);
            city_temp[i]->literacy_level = city_min.literacy_level;
            city_temp[i]->population_city = city_min.population_city;
            strcpy(city_temp[i]->city, city_min.city);
        }
    }
}
void CITY_NAME_SORT(int *num_temp, CENS (*city_temp)[*num_temp])
{
    int i, j, pos_min;
    CENS city_min;
    for (i = 0; i < (*num_temp - 1); i++)
    {
        strcpy(city_min.city, city_temp[i]->city);
        pos_min = i;
        for (j = i; j < *num_temp; j++)
        {
            if (strcmp(city_temp[j]->city, city_min.city) < 0)
            {
                city_min.literacy_level = city_temp[j]->literacy_level;
                city_min.population_city = city_temp[j]->population_city;
                strcpy(city_min.city, city_temp[j]->city);
                pos_min = j;
            }
        }
        if (pos_min != i)
        {
            city_temp[pos_min]->literacy_level = city_temp[i]->literacy_level;
            city_temp[pos_min]->population_city = city_temp[i]->population_city;
            strcpy(city_temp[pos_min]->city, city_temp[i]->city);
            city_temp[i]->literacy_level = city_min.literacy_level;
            city_temp[i]->population_city = city_min.population_city;
            strcpy(city_temp[i]->city, city_min.city);
        }
    }
}
*/
void LITERACY_SORT(int *num_temp, CENS (*city_temp)[], int (*num_array_temp)[])
{
    int i, j, pos_min, temp;
    double new_temp_lit;
    CENS city_min;
    double literacy_temp[*num_temp];
    for (i = 0; i < (*num_temp); i++)
    {
        literacy_temp[i] = (*city_temp)[i].literacy_level;
    }
    for (i = 0; i < *num_temp; i++)
    {
        (*num_array_temp)[i] = i;
    }
    for (i = 0; i < (*num_temp - 1); i++)
    {
        city_min.literacy_level = (*city_temp)[i].literacy_level;
        pos_min = i;
        for (j = i + 1; j < *num_temp; j++)
        {
            if (literacy_temp[j] < city_min.literacy_level)
            {
                pos_min = j;
            }
        }
        new_temp_lit = literacy_temp[pos_min];
        literacy_temp[pos_min] = literacy_temp[i];
        literacy_temp[i] = new_temp_lit;
        temp = (*num_array_temp)[pos_min];
        (*num_array_temp)[pos_min] = (*num_array_temp)[i];
        (*num_array_temp)[i] = temp;
    }
    /*for (i = 0; i < *num_temp; i++)
    {
        printf("%d  ", (*num_array_temp)[i]);
    }*/
}
void POPULATION_SORT(int *num_temp, CENS (*city_temp)[], int (*num_array_temp)[])
{
    int i, j, pos_min, temp, new_temp_pop;
    CENS city_min;
    int population_temp[*num_temp];
    for (i = 0; i < (*num_temp); i++)
    {
        population_temp[i] = (*city_temp)[i].population_city;
    }
    for (i = 0; i < *num_temp; i++)
    {
        (*num_array_temp)[i] = i;
    }
    for (i = 0; i < (*num_temp - 1); i++)
    {
        city_min.population_city = (*city_temp)[i].population_city;
        pos_min = i;
        for (j = i + 1; j < *num_temp; j++)
        {
            if (population_temp[j] < city_min.population_city)
            {
                pos_min = j;
            }
        }
        new_temp_pop = population_temp[pos_min];
        population_temp[pos_min] = population_temp[i];
        population_temp[i] = new_temp_pop;
        temp = (*num_array_temp)[pos_min];
        (*num_array_temp)[pos_min] = (*num_array_temp)[i];
        (*num_array_temp)[i] = temp;
    }
    /*for (i = 0; i < *num_temp; i++)
    {
        printf("%d  ", (*num_array_temp)[i]);
    }*/
}
void CITY_NAME_SORT(int *num_temp, CENS (*city_temp)[], int (*num_array_temp)[])
{
    int i, j, pos_min, temp;
    char new_temp_city[1000];
    CENS city_min;
    char city_name_temp[*num_temp][1000];
    for (i = 0; i < (*num_temp); i++)
    {
        strcpy(city_name_temp[i], (*city_temp)[i].city);
    }
    for (i = 0; i < *num_temp; i++)
    {
        (*num_array_temp)[i] = i;
    }
    for (i = 0; i < (*num_temp - 1); i++)
    {
        strcpy(city_min.city, (*city_temp)[i].city);
        pos_min = i;
        for (j = i + 1; j < *num_temp; j++)
        {
            if (strcmp(city_name_temp[j], city_min.city) < 0)
            {
                pos_min = j;
            }
        }
        strcpy(new_temp_city, city_name_temp[pos_min]);
        strcpy(city_name_temp[pos_min], city_name_temp[i]);
        strcpy(city_name_temp[i], new_temp_city);
        temp = (*num_array_temp)[pos_min];
        (*num_array_temp)[pos_min] = (*num_array_temp)[i];
        (*num_array_temp)[i] = temp;
    }
    /*for (i = 0; i < *num_temp; i++)
    {
        printf("%d  ", (*num_array_temp)[i]);
    }*/
}
void MAX(int *num_temp, CENS (*city_temp)[], int(*max_city), int *max_population, int *max_literacy)
{
    int MAX_LIT, MAX_POP, i;
    MAX_LIT = 0;
    MAX_POP = 0;
    for (i = 0; i < *num_temp; i++)
    {
        MAX_POP = (MAX_POP >= (*city_temp)[i].population_city) ? MAX_POP : (*city_temp)[i].population_city;
    }
    for (i = 0; i < *num_temp; i++)
    {
        MAX_LIT = (MAX_LIT >= (*city_temp)[i].literacy_level) ? MAX_LIT : (int)((*city_temp)[i].literacy_level);
    }
    for (i = 0; i < *num_temp; i++)
    {
        (*max_city) = ((*max_city) >= strlen((*city_temp)[i].city)) ? (*max_city) : strlen((*city_temp)[i].city);
    }
    while (MAX_POP != 0)
    {
        MAX_POP /= 10;
        (*max_population)++;
    }
    while (MAX_LIT != 0)
    {
        MAX_LIT /= 10;
        (*max_literacy)++;
    }
    /*printf("\n%d--", *max_population);
    printf("%d--", *max_literacy);
    printf("%d", *max_city);*/
}
void PRINT(CENS *city_temp)
{
    printf("\nName : %s", city_temp->city);
    printf("\nLiteracy Level : %.2lf", city_temp->literacy_level);
    printf("\nName : %d", city_temp->population_city);
}

int main()
{
    int city_num, max_city, max_population, max_literacy;
    max_city = 0;
    max_literacy = 0;
    max_population = 0;
    printf("\nEnter the number of the citys : ");
    scanf("%d", &city_num);
    int num_array[city_num + 1];
    CENS city[city_num];

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
    scanf("%d", &choice);
    /*PRINT(&city[0]);*/
    MAX(&city_num, &city, &max_city, &max_population, &max_literacy);
    /*printf("\n-------");*/
    if (choice == 1)
    {
        printf("\ncity");
        CITY_NAME_SORT(&city_num, &city, &num_array);
        printf("\n----------------------------------------");
        printf("\nAfter sorting the datas alphabetically : ");
        printf("\n----------------------------------------");
    }
    else if (choice == 2)
    {
        printf("\nliteracy");
        LITERACY_SORT(&city_num, &city, &num_array);
        printf("\n----------------------------------------------------------");
        printf("\nAfter sorting the datas alphabetically based on literacy : ");
        printf("\n----------------------------------------------------------");
    }
    else if (choice == 3)
    {
        printf("\npopulation");
        POPULATION_SORT(&city_num, &city, &num_array);
        printf("\n------------------------------------------------------------");
        printf("\nAfter sorting the datas alphabetically based on population : ");
        printf("\n------------------------------------------------------------");
    }
    char Header_city[1000], Header_Lit[1000];
    printf("\n");
    strcpy(Header_city, "City Name");
    printf("\n%-*s", 2 * max_city, Header_city);
    for (i = 0; i < max_city; i++)
    {
        printf(" ");
    }
    strcpy(Header_Lit, "Literacy Rate(%)");
    printf("%-*s ", 2 * max_city - 1, Header_Lit);
    for (i = 0; i < max_city; i++)
    {
        printf(" ");
    }
    printf("Population");
    for (i = 0; i < city_num; i++)
    {
        /*printf("\n%-*s%-*.2lf%*d", 2 * (max_city), city->city, 2 * max_literacy, city->literacy_level, 2 * max_population, city->population_city);*/
        printf("\n%-*s%-*.2lf%-*d", 3 * (max_city), city[num_array[i]].city, 3 * (max_city), city[num_array[i]].literacy_level, 3 * max_population, city[num_array[i]].population_city);
    }
    printf("\n\n");
    printf("press any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}