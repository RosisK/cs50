#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float dollar;
    do
    {
        dollar = get_float("Enter your change: ");
        if (dollar < 0)
        {
            printf("Please enter a positive number!!\n");
        }
    }
    while (dollar < 0);
    int cents = round (dollar * 100);
    int coins = 0;
}