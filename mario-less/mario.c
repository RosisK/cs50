#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)
    {
        for (int k = 0; k < (height - i) - 1; i++)
        {
            printf(" ");
        }
        for (int j = 0; j <= height - (height - i); j++)
        {
            printf("#");
        }
        printf("\n");
    }
}