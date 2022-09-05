#include <cs50.h>
#include <stdio.h>
int main(void)
{
    string input = get_string("What is your name ?\n");
    int number = get_int("Please input a number.\n");
    printf("Hello %i \n", number);
}