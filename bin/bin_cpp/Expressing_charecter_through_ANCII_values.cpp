#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void main()
{
    int i;
    /*for (i = 0; i <= 255; i++)
    {
        printf("\nASCII characters %c : code %d", i, i);
    }*/
    setlocale(LC_CTYPE, "");
    wchar_t star = 0x1F525;
    wprintf(L"%lc\n", star);
}