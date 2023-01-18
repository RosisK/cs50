#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar [key]\n");
        return 1;
    }

    int key = atoi(argv[1]);

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar [key]\nKey must be a decimal number\n");
            return 1;
        }
    }
    string plain = get_string("Plain Text: ");

}

char rotate(char p, int key)
{
    char cipher;
    if (isupper(c))
    {
        cipher = ()
    }
    cipher = (p + key) % 26;
}