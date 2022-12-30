#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < (height - i) - 1; k++)
        {
            printf(" ");
        }
        for (int j = 0; j <= height - (height - i); j++)
        {
            printf("#");
        }
        printf("  ");
        for (int l = 0; l <= height - (height - i); l++)
        {
            printf("#");
        }
        printf("\n");
    }
}