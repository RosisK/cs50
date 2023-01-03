#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar [key]\n");
        return 1;
    }
    if (!isdigit(argv[1]))
    {
        printf("Usage: ./caesar [key]\nKey must be a decimal number\n");
        return 1;
    }
    string plain = get_string("Plain Text: ");

}