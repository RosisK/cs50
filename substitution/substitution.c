#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./substitution [key]\n");
        return 1;
    }
    string key = argv[1];

    if (strlen(key) != 26)
    {
        printf("Usage: ./substitution [key]\nKey should contain 26 letters\n");
        return 1;
    }

    for (int i = 0; i < strlen(key); i++)
    {
        if (isdigit(key[i]) != 0)
        {
            printf("Usage: ./substitution [key]\nKey should be a string\n");
            return 1;
        }
        for (int j = i + 1; j < strlen(key); j++)
        {
            if (key[i] == key[j])
            {
                printf("Usage: ./substitution[key]\nKey should not have repeated letters\n");
                return 1;
            }
        }
    }
}