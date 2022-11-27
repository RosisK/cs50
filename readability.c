#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

//declaring a prototype
int letter_count (string c);

int main(void)
{
    int i = 0;
    //prompting user for input
    string text = get_string ("Text: ");

    //using a user defined function
    int letter = letter_count (text);

    //printing for debugging purpose
    printf ("%i\n", letter);
}

int letter_count (string c)
{
    int n = 0;
    //
    while (isalpha(c[n]) || c[n] == '\0')
    {
        
    }
    return n;
}