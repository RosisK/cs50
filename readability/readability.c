#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int letter_count (string c);

int main(void)
{
    int i = 0;
    string text = get_string ("Text: ");

    int letter = letter_count (text);
    printf ("%i", letter);
}

int letter_count (string c)
{
    while (isalpha(c[i]) || c[i] == '\0')
    {
        if (c[i] == '\0')
        {
            break;
        }
        else
        {
            i++;
        }
    }
    return i;
}