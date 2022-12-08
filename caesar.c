#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int conv(string s);

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

    int key = conv(argv[1]);
    printf("%i\n", key);
    string plain = get_string ("Plain Text: ");

}

int conv(string s)
{
    int c;
    for(int i = 0; i < strlen(s); i++)
    {
        char input = s[i];
        c = input - 48;
    }
    return c;
}