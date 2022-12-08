#include <stdio.h>
#include <cs50.h>
#include <string.h>

int conv(string s);

int main(int argc, string argv[])
{
    int convert = conv(argv[1]);
    printf("%i\n", convert);

}

int conv(string s)
{
    for(int i = 0; i < strlen(s); i++)
    {
        char input = s[i];
        int c = input - 48;
        return c;
    }
}