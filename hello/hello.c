#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //prompt user for name
    string name = get_string("What is your name ?\n");
    //prints the statement including user's name
    printf("Hello, %s \n", name);
}