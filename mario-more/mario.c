#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int new, height, o_height;
    do
    {
        o_height = get_int("Height: ");
        if (o_height < 1 || o_height > 8)
        {
            printf("Please Enter Numbers Between 1 and 8.\n");
        }
    }
    while (o_height < 1 || o_height > 8);

    new = 1;
    height = o_height + 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height - new; j++)
        {
            printf("#");
        }
        new++;
        printf("\n");
    }
}