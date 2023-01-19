#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Declared prototype
void rotate(string p, int key);

int main(int argc, string argv[])
{
    // Validating the use of command line argument
    if (argc != 2)
    {
        printf("Usage: ./caesar [key]\n");
        return 1;
    }

    // Converting the key to integer to be used in calculations
    int key = atoi(argv[1]);

    // Making sure the key is entirely composed of numbers
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar [key]\nKey must be a decimal number\n");
            return 1;
        }
    }

    // Prompting user for plain text
    string plain = get_string("plaintext: ");
    // Calling the function to print the cipher text
    rotate(plain, key);
}

// Function to encipher the text and print it
void rotate(string p, int key)
{
    char cipher, ctext[255];
    // Using a for loop to go through each character in plain text and encrypt it using the key
    for (int i = 0; i < strlen(p); i++)
    {
        if (isupper(p[i]))
        {
            cipher = (((p[i] - 65) + key) % 26) + 65;
        }
        else if (islower(p[i]))
        {
            cipher = (((p[i] - 97) + key) % 26) + 97;
        }
        else
        cipher = p[i];
        // Storing each encrypted character in an array
        ctext[i] = cipher;
    }
    // Printing out the cipher text
    printf("ciphertext: %s\n", ctext);
}