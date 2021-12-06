#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{
    char text[5000];
    printf("\nEnter the text : ");
    scanf(" %[^\n]%*c", text);
    int len = strlen(text);
    int num_vowel = 0;
    int num_space = 0;
    for (int i = 0; i < len; i++)
    {
        if ((text[i] == 'a') || (text[i] == 'e') || (text[i] == 'i') || (text[i] == 'o') || (text[i] == 'u') || (text[i] == 'A') || (text[i] == 'E') || (text[i] == 'I') || (text[i] == 'O') || (text[i] == 'U'))
        {
            num_vowel++;
        }
        else if (text[i] == ' ')
        {
            num_space++;
        }
    }
    system("cls");
    printf("\nNumber of the vowel in the text     : %d", num_vowel);
    printf("\nNumber of the consonant in the text : %d\n\n", (len - num_vowel - num_space));
    
    return 0;
}