#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
}
candidate;


int main(int argc, string argv[])
{
    candidate candidates[4];

    // check for invalid usage
    if (argc < 2)
    {
        printf("Usage: ./election [candidates]");
        return 1;
    }

    int 
}