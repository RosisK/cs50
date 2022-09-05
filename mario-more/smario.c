#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    int j = 0;
    int height = get_int("Height: ");
    while( i < 3)
    {

        while(j < 1)
        {
            printf("#");
            j++;
        }
        printf("#\n");
        i++;

    }
    printf("\n");

}