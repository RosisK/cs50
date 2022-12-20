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
}

int valid_key(string s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(s[i]))
            return 1;
    }
    return 0;
}