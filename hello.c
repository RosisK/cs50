#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int count_letters(string s);

int main (void)
{
    string text = get_string ("Text: ");
    int letter = count_letters (text);

    printf ("No. of letters = %i\n", letter);
}

int count_letters(string s)
{
    int length = strlen (s);
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (isalpha(s[i]))
        {
            count++;
        }
    }
    return count;
}