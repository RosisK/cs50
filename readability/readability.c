#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int letter_count (string c);

int main(void)
{
    int i = 0;
    string text = get_string ("Text: ");

    int letter = letter_count (text);
    printf ("%i\n", letter);
}

int letter_count (string c)
{
    int n = 0;
    while (isalpha(c[n]) || c[n] == '\0')
    {
        if (c[n] == '\0')
        {
            
        }
        else
        {
            n++;
        }
    }
    return n;
}