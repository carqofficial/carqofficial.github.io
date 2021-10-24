#include <stdio.h>

int main()
{
    char letter;
    int vowel;

    printf("\nEnter a letter : ");
    scanf("%c", &letter);
    vowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U');

    if (vowel)
    {
        printf("\nYou have entered a vowel.\n\n");
    }

    else
    {
        printf("\nYou have entered a consonant.\n\n");
    }

    return 0;
}