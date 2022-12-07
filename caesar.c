#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != '0')
    {
        printf("Usage: ./caesar 'key'\n");
        exit(0);
    }
    int length = strlen(argv[1]);

    for (int i = 0; i < length; i++)
    {
        if (isdigit(char argv[1][i]) == '0')
        {
            printf("Usage: ./caesar 'key'\n *The key must only be digits*\n");
        }
    }
    string plain = get_string ("Plain Text: ");

}