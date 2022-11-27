#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declaring a prototype
int letter_count (string c);

int main(void)
{
    string text = get_string ("Text: ");
    int letters = letter_count (text);

    
}

int letter_count (string c)
{
    // length of the text
    int length = strlen(c);

    // letter count
    int n = 0;

    for (int i = 0; i < length; i++)
    {
        if (isalpha(c[i]))
        {
            n++;
        }
    }
    return n;
}
