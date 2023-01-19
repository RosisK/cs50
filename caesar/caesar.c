#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10;

void rotate(string p, int key);

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
    rotate(plain, key);
}

void rotate(string p, int key)
{
    char cipher;
    char ctext[255];
    for (int i = 0; i < strlen(p); i++)
    {
        if (isupper(p[i]))
        {
            cipher = (((p[i] - 65) + key) % 26) + 65;
        }
        else if (islower(p[i]))
        {
            cipher = (((p[i] - 97) + key) % 26) + 97;
        }
        else
        cipher = p[i];

        ctext[i] = cipher;
    }
    printf("Cipher Text: %s\n", ctext);
}