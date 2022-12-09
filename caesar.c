#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// prototypes 
bool only_digits(string c);
int conv(string s);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar 'key'\n");
        exit(0);
    }
    if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar 'key'\n The key must only contain integer\n");
        exit(0);
    }

    int key = conv(argv[1]);

    string plain = get_string ("Plain Text: ");

}

bool only_digits(string c)
{
     bool is_digit;
    int length = strlen(c);
    for (int i = 0; i < length; i++)
    {
        is_digit = isdigit(c[i]);
    }
    if (is_digit == 0)
        return false;
    else
        return true;
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