#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n_ques, n_stud;
    printf("\nEnter the number of questions : ");
    scanf("%d", &n_ques);
    printf("Enter the number of students : ");
    scanf("%d", &n_stud);
    char answer[n_ques + 1], responce[n_ques + 1][n_stud + 1], name[n_stud + 1][5000];
    int i;
    printf("\nEnter the answers : \n");
    for (i = 1; i <= n_ques; i++)
    {
        printf("Enter the answer key of question %d : ", i);
        scanf(" %c", &answer[i]);
    }
    system("cls");
    int k;
    for (k = 1; k <= n_stud; k++)
    {
        printf("\nEnter the your name : ");
        scanf(" %[^\n]%*c", &name[k]);
        printf("%s, Enter the answers accordingly the question order : \n", name[k]);
        for (i = 1; i <= n_ques; i++)
        {
            printf("Enter the answer of question %d : ", i);
            scanf(" %c", &responce[i][k]);
        }
        printf("\n");
    }

    system("cls");
    int score[n_stud];
    for (k = 1; k <= n_stud; k++)
    {
        score[k] = 0;
    }
    for (k = 1; k <= n_stud; k++)
    {
        for (i = 1; i <= n_ques; i++)
        {
            if (answer[i] == responce[i][k])
            {
                score[k]++;
            }
        }
    }
    for (k = 1; k <= n_stud; k++)
    {
        printf("\n%s scored : %d", name[k], score[k]);
    }
    printf("\n");
    for (k = 1; k <= n_stud; k++)
    {
        printf("\n%s has given wrong aswers of ", name[k]);
        for (i = 1; i <= n_ques; i++)
        {
            if (answer[i] != responce[i][k])
            {
                printf(" %d(%c) ", i, answer[i]);
            }
        }
    }
    printf("\n\nPress any key to exit.....");
    getch();
    printf("\n\n");
    return 0;
}