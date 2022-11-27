#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{
    string c = "My name is Rosis Kharel.";

    for (int i = 0; i <= strlen(c); i++)
    {
        if (c[i] == '\0')
        {
            printf ("Done!\n");
        }
    }
}