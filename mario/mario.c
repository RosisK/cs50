#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height, i , j, k;
    do
    {
        height = get_int("Height: ");
        if (height > 8 || height < 1)
        {
            printf("Enter Height Between 1 and 8\n");
        }
    }
    while (height > 8 || height < 1);

    for (i = 0; i < height; i++)
    {
        for (k = 0; k < height - i - 1; k++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");

        }
        printf("  ");

         for (j = 0; j <= i; j++)
        {
            printf("#");

        }
        printf("\n");

    }
}