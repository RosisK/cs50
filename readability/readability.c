#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int letter_count(string s);

int main(void)
{
    string input = get_string("Text: ");
    printf("%i\n", letter_count(input));
}

int letter_count(string s)
{
    int letter = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]))
        {
            letter++;
        }
    }
    return letter;
}