#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;


int main(void)
{
    string names[] = {"Carter", "David"};
    string numbers[] = {"33433848", "38492023"};

    string input = get_string("Who do you want to find: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(input, names[i]) == 0)
        {
            printf("%s\n", numbers[i]);
        }
    }
}