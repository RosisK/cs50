#include <cs50.h>
#include <stdio.h>

void hash(int n);

int main(void)
{
    int height = get_int("Height: ");
    hash(height);
    int j = 0;
}

void hash(int n)
{
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