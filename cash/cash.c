#include <stdio.h>
#include <cs50.h>

int main (void)
{
    float cash;
    do
    {
        cash = get_float("Enter your change: ");
        if (cash < 0)
        {
            printf("Please enter a positive number!!\n");
        }
    }
    while (cash < 0);
}