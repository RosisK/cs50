#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool only_digits(string c);
int conv(string s);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar 'key'\n");
        exit(0);
    }
    if ()

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
    return is_digit;
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