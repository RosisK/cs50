#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int letter_count (text);

int main(void)
{
    int i = 0;
    string text = get_string ("Text: ");

    








    int letter_count (string c)
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
        return i;
    }

}