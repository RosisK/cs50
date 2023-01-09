#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    // Ensure that the correct number of command line arguments was provided
    if (argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

    // Get the key from the command line argument
    string key = argv[1];

    // Ensure that the key is the correct length
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // Check that all characters in the key are alphabetical
    for (int i = 0; i < 26; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must contain only alphabetical characters.\n");
            return 1;
        }
    }

    // Check that all characters in the key are unique
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (i != j && tolower(key[i]) == tolower(key[j]))
            {
                printf("Key must contain all unique characters.\n");
                return 1;
            }
        }
    }

    // Prompt the user for a plaintext message
    string message = get_string("plaintext: ");

    // Encrypt the message using the key
    printf("ciphertext: ");
    for (int i = 0, n = strlen(message); i < n; i++)
    {
        if (isalpha(message[i]))
        {
            if (isupper(message[i]))
            {
                // Encrypt uppercase letters
                int letter = message[i] - 'A';
                printf("%c", toupper(key[letter]));
            }
            else
            {
                // Encrypt lowercase letters
                int letter = message[i] - 'a';
                printf("%c", tolower(key[letter]));
            }
        }
        else
        {
            // Don't encrypt non-alphabetic characters
            printf("%c", message[i]);
        }
    }

    // Print a newline and exit
    printf("\n");
    return 0;
}
