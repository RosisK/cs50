#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int i = 0;
    string text = get_string ("Text: ");

    int letter_count (text)
    {
        while (isalpha(text[i]) || text[i] == '\0')
        {
            if (text[i] == '\0')
            {
                break;
            }
            else
            {
                i++;
            }
        }
    }

}