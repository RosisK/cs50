#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// declare prototypes
int letter_count (string c);
int word_count (string s);
int sentence (string t);

int main (void)
{
    // prompt user for text
    string text = get_string ("Text: ");

    // count the number of letters and stores it in the variable
    int letters = letter_count (text);

    // count the number of words and stores it in the variable
    int words = word_count (text);

    int sent = sentence (text);
    printf ("%i", sent);

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

int word_count (string s)
{
    // measure the length of the string
    int length = strlen(s);

    // word count
    int m = 0;

    for (int i = 0; i < length; i++)
    {
        if (isspace(s[i]))
        {
            m++;
        }
    }
    return m + 1;
}

int sentence (string t)
{
    // measure the length of the string
    int length = strlen (t);

    // sentence count
    int p = 0;

    for (int i = 0; i < length; i++)
    {
        if (t[i] == '.' || t[i] == '!' || t[i] == '?')
        {
            p++;
        }
    }
    return p;
}