#include <stdio.h>

int main()
{
    int arr[3][4] = {{10, 12, 15, 22}, {23, 55, 87, 67}, {11, 7, 45, 21}};
    int *ptr;
    ptr = &arr[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("\n%02d is the (%2d X %2d) element of the array and is stored at the address %d", *ptr, i, j, ptr);
            /*printf("\n%02d is the (%2d X %2d) element of the array and is stored at the address %d", arr[i][j], i, j, ptr);*/
            ptr++;
        }
    }
}