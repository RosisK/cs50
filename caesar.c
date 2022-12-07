#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    atoi(argv[1]);
    if (argc > 2 || argc < 2)
    {
        printf("Usage: ./caesar 'key'\n");
        exit(0);
    }
    string plain = get_string ("Plain Text: ");
    printf("%s\n", argv[1]);

}