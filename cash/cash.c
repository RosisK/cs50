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
    for (int i = 0; i < cents; i++)
    {
        if (cents >= 25)
        {
            cents = cents - 25;
        }
        else if (cents < 25 && cents >= 10)
        {
            cents = cents - 10;
        }
        else if (cents < 10 && cents >= 5)
        {
            cents = cents - 5;
        }
        else
        {
            cents = cents - 1;
        }
        printf("%i", cents);
    }

}