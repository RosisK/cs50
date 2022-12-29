#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool vote(string name);

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[4];
int voter_count, candidate_count;

int main(int argc, string argv[])
{
    for (int i = 0; i < 5; i++)
    {
        candidates[i].name = argv[i + 1];
    }
    // check for invalid usage
    if (argc < 2)
    {
        printf("Usage: ./election [candidates]\n");
        return 1;
    }

    voter_count = get_int("Number of voters: ");
    candidate_count = argc - 1;

    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = get_string("Vote: ");
    }
    printf("%s\n", candidates[0].name);
}

bool vote(string name)
{
    for (int i = 0; i < 4; i++)
    {
        if (name == candidates[i].name)
        {
            candidates[i].votes++;
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

void print_winner(void)
{
    for (int i = 0; i < 4; i++)
    {
        if ()
        {

        }
    }
}