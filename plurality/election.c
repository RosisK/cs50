#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[4];

int main(int argc, string argv[])
{
    int voter_count, candidate_count;
    // check for invalid usage
    if (argc < 2)
    {
        printf("Usage: ./election [candidates]");
        return 1;
    }

    voter_count = get_int("Number of voters: ");
    candidate_count = argc - 1;

    string 
}

bool