#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height, i, j;
    do
    {
        height = get_int ("Height: ");
        if (height < 1 || height > 8)
        {
            printf("Please Enter Height Between 1 and 8.\n");
        }
    }
    while (height < 1 || height > 8);
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height - (height - i); j++)
        {
             printf("#");
        }
        printf(" ");
        printf("\n");
    }
}