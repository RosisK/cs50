// get key through command line argument
// make sure the key is valid
//   key is invalid if
//      the argument count is anything other than 2
//      the argv[1] doesn't contain exactly 26 characters
//      all 26 characters aren't letters
//      repeated letters are present
// the case of the letters in the key should not affect anything

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int only_letters(string s);

int main(void)
{
    string input = get_string("Type: ");
    int is_letter = only_letters(input);
    if (is_letter == 0)
        printf("This string has only letters\n");
    else
        printf("This string doesn't have only letters\n");
}

int only_letters(string s)
{
    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (!isalpha(s[i]))
        {
            return 1;
        }
    }
    return 0;
}