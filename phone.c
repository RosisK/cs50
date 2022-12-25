#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person people[2];

    people[0].name = "carter";
    people[0].number = "123";

    people[1].name = "david";
    people[1].name = "321";

    string input = get_string("Who do you want to find: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(tolower(input), people[i].name) == 0)
        {
            printf("%s\n", people[i].number);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}