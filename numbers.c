#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[] = {4, 7, 8, 9, 2, 1};
    for (int i = 0; i < sizeof(); i++)
    {
        if (numbers[i] == 0)
        {
            printf("Number '0' is in array index %i\n", i);
            return 0;
        }
    }
    printf("Number '0' not found\n");
    return 1;

}