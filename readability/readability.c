#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int letter_count(string s);
int word_count(string s);
int sentence_count(string s);

int main(void)
{
    int letters, words, sentences, index;

    string input = get_string("Text: ");

    letters = letter_count(input);
    words = word_count(input);
    sentences = sentence_count(input);

    float L = (letters / words) * 100;
    float S = (sentences / words) * 100;

    index = 0.0588 * L - 0.296 * S - 15.8;

    printf("Grade %i\n", index);
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
        if (s[i] == '!' || s[i] == '.' || s[i] == '?')
        {
            sentence++;
        }
    }
    return sentence;
}