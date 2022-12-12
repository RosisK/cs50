#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int length = strlen(argv[1]);
    if (argc != 2)
    {
        printf("Usage: ./substitution KEY\n");
        return 1;
    }
    else if (length != 26)
    {
        printf("Key must contain 26 characters\n");
        return 1;
    }
    for (int i = 0; i < length; i++)
    {
        if (isalpha(argv[1][i]) == 0)
        {
            printf("Usage: ./substitution KEY\nAll characters in the key must be letters.\n");
            return 1;
        }
    }
    printf("SHDH\n");
}
