#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string name = get_string("Type Name: ");
    string names[] = {"Danny", "Charlie", "Bill", "Fred", "Ginny", "Percy", "Ron"};
    for (int i = 0; i < 7; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;

}