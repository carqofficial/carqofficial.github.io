#include <stdio.h>

struct demo
{
    int num;
    struct demo *other;
};

int main()
{
    struct demo first, second;
    first.num = 25;
    first.other = &second;
    second.num = 35;
    second.other = &first;
    printf("\nFirst Number  = %d", first.num);
    printf("\nFirst Number  = %d", (second.other)->num);
    printf("\n\nSecond Number = %d", second.num);
    printf("\nSecond Number = %d", (first.other)->num);
    printf("\n\nAddress of first  = %u", &first);
    printf("\nAddress of first  = %u", second.other);
    printf("\nAddress of second = %u", &second);
    printf("\nAddress of second = %u", first.other);
    return 0;
}