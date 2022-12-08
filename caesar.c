#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar 'key'\n");
        exit(0);
    }
    int length = strlen(argv[1]);

    for (int i = 0; i < length; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar 'key'\n *The key must only be digits*\n");
        }
    }
    string plain = get_string ("Plain Text: ");

}