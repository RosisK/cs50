#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}