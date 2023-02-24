#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void encipher(string plain, string key);

int main(int argc, string argv[])
{
    // Check for invalid usage

    // Make sure user types 1 command-line argument
    if (argc != 2)
    {
        printf("Usage: ./substitution [key]\n");
        return 1;
    }

    // Assign the argument to a string variable
    string key = argv[1];

    // Make sure the key has exactly 26 characters
    if (strlen(key) != 26)
    {
        printf("Usage: ./substitution [key]\nKey should contain 26 characters\n");
        return 1;
    }

    for (int i = 0; i < strlen(key); i++)
    {
        // Make sure the key is entirely a string
        if (isdigit(key[i]) != 0)
        {
            printf("Usage: ./substitution [key]\nKey contain only alphabetic characters\n");
            return 1;
        }

        // Make sure the characters in the key aren't repeated
        for (int j = 0; j < i; j++)
        {
            if (key[i] == key[j])
            {
                printf("Usage: ./substitution[key]\nKey should not contain repeated characters\n");
                return 1;
            }
        }
    }

    // Prompt user to type plaintext
    string plain = get_string("plaintext: ");

    encipher(plain, key);
}

void encipher(string plain, string key)
{
    string cipher = malloc(26 * sizeof(char));

    for (int i = 0; i < strlen(plain); i++)
    {
        if (isupper(plain[i]))
        {
            plain[i] = plain[i] - 65;

            for (int j = 0; j < strlen(plain); j++)
            {
                if ((int) plain[i] == j)
                {
                    printf("%i\n", plain[i]);
                    cipher[i] = key[i];
                }
            }
        }
        else if (islower(plain[i]))
        {
            plain[i] = plain[i] - 97;

            for (int j = 0; j < i; j++)
            {
                if ((int) plain[i] == j)
                {
                    cipher[i] = key[i];
                }
            }
        }
    }
    printf("ciphertext: %s\n", cipher);
    free(cipher);
}