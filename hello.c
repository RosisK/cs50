#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n = get_int("How many subjects ?\n");
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average: %f\n", )
}