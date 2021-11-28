#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    printf("\nEnter 99 to stop the vote counting\n\n");
    int candidate[5], ballot_num, num_on_paper, spoilt_ballot, i, WINNER_VOTE;

    for (i = 1; i <= 5; i++)
    {
        candidate[i] = 0;
    }

    spoilt_ballot = 0;
    WINNER_VOTE = 0;

    while (num_on_paper != 99)
    {
        ballot_num++;
        printf("Enter the number on ballot paper : ");
        scanf("%d", &num_on_paper);
        switch (num_on_paper)
        {
        case 1:
            candidate[1]++;
            break;
        case 2:
            candidate[2]++;
            break;
        case 3:
            candidate[3]++;
            break;
        case 4:
            candidate[4]++;
            break;
        case 5:
            candidate[5]++;
            break;
        default:
            spoilt_ballot++;
            break;
        }
    }

    system("cls");

    for (i = 1; i <= 5; i++)
    {
        WINNER_VOTE = (WINNER_VOTE >= candidate[i]) ? WINNER_VOTE : candidate[i];
    }
    printf("\nTotal numbers of ballot paper counted : %d", (ballot_num - 1));
    printf("\nTotal numbers of spoilt ballot paper : %d", (spoilt_ballot - 1));
    for (i = 1; i <= 5; i++)
    {
        if (candidate[i] == WINNER_VOTE)
        {
            printf("\nWinner in the election is candidate-%d with %d votes", i, WINNER_VOTE);
        }
    }
    for (i = 1; i <= 5; i++)
    {
        if (candidate[i] != WINNER_VOTE)
        {
            printf("\ncandidate-%d got %d votes", i, candidate[i]);
        }
    }
    return 0;
}