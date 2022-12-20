#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int only_letters(string s);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./sus key\n");
        return 1;
    }

    else if (strlen(argv[1]) != 26)
    {
        printf("Usage: ./sus key\nThe key should be 26 characters long\n");
        return 1;
    }

    else if (only_letters(argv[1]) != 0)
    {
        printf("Usage: ./sus key\nThe key should contain letters only\n");
        return 1;
    }

    printf("Bruh\n");
}

int only_letters(string s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(s[i]))
            return 1;
    }
    return 0;
}