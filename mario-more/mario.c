#include <cs50.h>
#include <stdio.h>

void hash(int n);

int main(void)
{
    int height = get_int("Height: ");
    hash(height);
}

void hash(int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        while (j < 3)
        {
            printf("#");
            j++;
        }
        printf("#\n");
    }
}