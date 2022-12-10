#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// prototypes
bool only_digits(string c);
int conv(string s);

int main(int argc, string argv[])
{
    // exiting the program if command line doesn't have two arguments
    if (argc != 2)
    {
        printf("Usage: ./caesar 'key'\n");
        exit(0);
    }
    // exiting the program if the key has characters other than digits
    if (only_digits(argv[1]) == false)
    {
        printf("Usage: ./caesar 'key'\n The key must only contain integer\n");
        exit(0);
    }

    // converting the string to integer
    int key = conv(argv[1]);

    // prompting user for plain text
    string plain = get_string ("Plain Text: ");

}


// function to determine whether a string has only digits
bool only_digits(string c)
{
     bool is_digit;
    int length = strlen(c);
    // loop to reiterate over the string to check for digits
    for (int i = 0; i < length; i++)
    {
        is_digit = isdigit(c[i]);
        if (is_digit == 0)
        {
            break;
        }
    }
    if (is_digit == 0)
        return false;
    else
        return true;
}

// funtion to convert string to integer
int conv(string s)
{
    int c;
    for(int i = 0; i < strlen(s); i++)
    {
        char input = s[i];
        // converting strings to integer using ascii
        c = input - 48;
    }
    return c;
}

