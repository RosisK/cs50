#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int height, i , j;
    do
    {
        height = get_int("Height: ");
        if (height > 8 || height < 1)
        {
            printf("Enter Height Between 1 and 8");
        }
    }
    while (height > 8 || height < 1);

    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            printf("#");

        }
        printf("\n");
    }
}