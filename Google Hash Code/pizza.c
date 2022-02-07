#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data
{
    int like_num;
    int dislike_num;
};
typedef struct data client;
void arr_solver(int *total, char (*arr)[*total][1000])
{
    char temp[1000];
    int i, j, count, l, k;
    count = 0;
    for (i = 0; i < *total - 1; i++)
    {
        strcpy(temp, (*arr)[i]);
        for (j = i + 1; j < *total; j++)
        {
            if (strcmp((*arr)[j], (*arr)[i]) == 0)
            {
                count++;
            }
        }
    }
    for (l = 0; l < count; l++)
    {
        for (i = 0; i < *total - 1; i++)
        {
            strcpy(temp, (*arr)[i]);
            for (j = i + 1; j < *total; j++)
            {
                if (strcmp((*arr)[j], (*arr)[i]) == 0)
                {
                    if (j != ((*total) - 1))
                    {
                        for (k = j; k <= ((*total) - 1); k++)
                        {
                            strcpy((*arr)[k], (*arr)[k + 1]);
                        }
                        (*total)--;
                    }
                    else if (j == ((*total) - 1))
                    {
                        (*total)--;
                    }
                }
            }
        }
    }
}

int main()
{
    int client_num;
    scanf("%d", &client_num);
    client CLNT[client_num];
    char like_choice[client_num][100][100];
    char dislike_choice[client_num][100][100];
    int i, j;
    /*printf("%d", client_num);*/

    //Entry of like and dislike choice
    for (i = 0; i < client_num; i++)
    {
        scanf("%d", &(CLNT[i]).like_num);
        for (j = 0; j < (CLNT[i]).like_num; j++)
        {
            scanf("%s", like_choice[i][j]);
        }

        scanf("%d", &(CLNT[i]).dislike_num);
        for (j = 0; j < (CLNT[i]).dislike_num; j++)
        {
            scanf("%s", dislike_choice[i][j]);
        }
    }

    int total_like, total_dislike;
    total_like = 0;
    total_dislike = 0;
    //calculation total like && total dislike
    for (i = 0; i < client_num; i++)
    {
        total_like = total_like + ((CLNT[i]).like_num);
        total_dislike = total_dislike + ((CLNT[i]).dislike_num);
    }
    int k_L, k_D, sort_l_num, sort_d_num;
    k_L = 0;
    k_D = 0;
    char arr_like[total_like][1000], arr_dislike[total_dislike][1000];

    for (i = 0; i < client_num; i++)
    {
        if ((CLNT[i]).like_num != 0)
        {
            for (j = 0; j < (CLNT[i]).like_num; j++)
            {
                /*printf("\n%d.L-  %s", j + i, like_choice[i][j]);*/ //printing unsorted likes
                strcpy(arr_like[k_L], like_choice[i][j]);            //copying likes to array
                k_L++;
            }
        }
    }
    for (i = 0; i < client_num; i++)
    {
        if ((CLNT[i]).dislike_num != 0)
        {
            for (j = 0; j < (CLNT[i]).dislike_num; j++)
            {
                /*printf("\n%d.D-  %s", j + i, dislike_choice[i][j]);*/ //printing unsorted dislikes
                strcpy(arr_dislike[k_D], dislike_choice[i][j]);         //copying dislikes to array
                k_D++;
            }
        }
    }

    /*
    for (i = 0; i < client_num; i++)
    {
        for (j = 0; j < (CLNT[i]).like_num; j++)
        {
            strcpy(arr_like[i], like_choice[i][j]);
        }
        for (j = 0; j < (CLNT[i]).dislike_num; j++)
        {
            strcpy(arr_dislike[i], dislike_choice[i][j]);
        }
    }
    */

    sort_l_num = k_L;
    sort_d_num = k_D;
    /*
    printf("\nsort_l : %d", sort_l_num);
    printf("\nsort_d : %d", sort_d_num);
    printf("\nLiked items : ");
    for (i = 0; i < sort_l_num; i++)
    {
        printf("\n%d. %s  ", i + 1, arr_like[i]);
    }
    printf("\nDisliked items : ");
    for (i = 0; i < sort_d_num; i++)
    {
        printf("\n%d. %s  ", i + 1, arr_dislike[i]);
    }
    */
    arr_solver(&sort_l_num, &arr_like);
    arr_solver(&sort_d_num, &arr_dislike);
    /*
    printf("\nsort_l : %d", sort_l_num);
    printf("\nsort_d : %d", sort_d_num);
    printf("\nLiked items : ");
    for (i = 0; i < sort_l_num; i++)
    {
        printf("\n%d. %s  ", i + 1, arr_like[i]);
    }
    printf("\nLiked items : ");
    for (i = 0; i < sort_d_num; i++)
    {
        printf("\n%d. %s  ", i + 1, arr_dislike[i]);
    }
    */

    char arr_merge[sort_l_num + sort_d_num + 1][1000];

    for (i = 0; i < sort_l_num; i++)
    {
        strcpy(arr_merge[i], arr_like[i]);
    }

    int k_Merge;
    k_Merge = sort_l_num;

    for (i = 0; i < sort_d_num; i++)
    {
        for (j = 0; j < sort_l_num; j++)
        {
            if (strcmp(arr_dislike[i], arr_like[j]) == 0)
            {
                strcpy(arr_merge[k_Merge], arr_dislike[i]);
                k_Merge++;
            }
        }
    }
    int sort_OPD_num;
    sort_OPD_num = (k_Merge - 1);

    /*
    printf("\nTotal OPD items(unsorted) : ");
    for (i = 0; i < sort_OPD_num; i++)
    {
        printf("\n%d. %s", i + 1, arr_merge[i]);
    }
    */

    arr_solver(&sort_OPD_num, &arr_merge);

    /*
    printf("\nTotal OPD items(sorted) : ");
    for (i = 0; i < sort_OPD_num; i++)
    {
        printf("\n%d. %s", i + 1, arr_merge[i]);
    }
    */
    int k_Union;
    k_Union = 0;
    char arr_union[sort_l_num + sort_d_num + 1][1000];

    for (i = 0; i < sort_l_num; i++)
    {
        strcpy(arr_union[i], arr_like[i]);
    }

    int temp_sort_l_num;
    temp_sort_l_num = sort_l_num;
    for (j = 0; j < sort_d_num; j++)
    {
        /*printf("\n%d. %s", j + 1, arr_dislike[j]);*/
        for (i = 0; i < temp_sort_l_num; i++)
        {
            if (strcmp(arr_dislike[j], arr_union[i]) == 0)
            {
                if (i != (temp_sort_l_num - 1))
                {
                    int kl;
                    for (kl = i; kl < (temp_sort_l_num - 1); kl++)
                    {
                        strcpy(arr_union[kl], arr_union[kl + 1]);
                    }
                    temp_sort_l_num--;
                }
                else if (i == (temp_sort_l_num - 1))
                {
                    temp_sort_l_num--;
                }
            }
        }
    }

    int sort_UNION_num;
    sort_UNION_num = temp_sort_l_num;
    /*
    printf("\nTotal union items(unsorted) : ");
    for (i = 0; i < sort_UNION_num; i++)
    {
        printf("\n%d. %s", i + 1, arr_union[i]);
    }
    */
    arr_solver(&sort_UNION_num, &arr_union);
    /*
    printf("\nTotal union items(sorted) : ");
    for (i = 0; i < sort_UNION_num; i++)
    {
        printf("\n%d. %s", i + 1, arr_union[i]);
    }
    */
    printf("%d ", (sort_UNION_num));
    for (i = 0; i < sort_UNION_num; i++)
    {
        printf("%s ", arr_union[i]);
    }
    return 0;
}