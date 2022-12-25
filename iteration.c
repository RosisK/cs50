#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // prompting user for height of pyramid
    int height = get_int("Height: ");
    // initiating a loop to print the pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf("#");
        }

    }
    printf("\n");

}