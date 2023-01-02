#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int letter_count(string s);
int word_count(string s);

int main(void)
{
    string input = get_string("Text: ");
    
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

int word_count(string s)
{
    int space = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (isspace(s[i]))
        {
            space++;
        }
    }
    int word = space + 1;
    return word;
}

int sentence_count(string s)
{
    int sentence = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '!' || s[i] == '.', || s[i] == '?')
        {
            sentence++;
        }
    }
    return sentence;
}