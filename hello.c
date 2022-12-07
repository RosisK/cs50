#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    int length = strlen(argv[1]);
    for (int i = 0; i < length; i++)
    {
        char letter = argv[1][i];
        printf("%c", letter);
    }
    printf("\n");
}
