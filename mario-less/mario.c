#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = get_int("Height: ");

    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < height; i++)
        {
            printf("#");

        }
        printf("\n");
    }
}