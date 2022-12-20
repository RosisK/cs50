#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int valid_key(string s);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./sus key\n");
        return 1;
    }
    string key = argv[1];

    int is_valid = valid_key(key);
    if (is_valid == 1)
    {
        return 1;
    }

    printf("Bruh!!\n");
}

int valid_key(string s)
{
    int length = strlen(s);

    if (strlen(s) != 26)
    {
        printf("Usage: ./sus\nThe key must contain 26 letters.\n");
        return 1;
    }

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(s[i]))
        {
            printf("Usage: ./sus key\nThe key must only contain letters.\n");
            return 1;
        }
    }

    for (int i = 0; i < length; i++)
    {
        for (int j = 1; j < length; j++)
        {
            if (s[i] == s[j])
            {
                printf("Usage: ./sus\nRepeated letters should not be present in the key\n");
                return 1;
            }
        }
    }


    return 0;
}