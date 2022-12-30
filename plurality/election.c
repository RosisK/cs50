#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool vote(name);
void printwinner(void);

// set limit for maximum candidate number
#define MAX 9

// define a data type containing candidate name and no. of vote
typedef struct
{
    string name;
    int votes;
}
candidate;

// define array of candidates
candidate candidates[MAX];
int candidate_count, voter_count;
string name;

int main(int argc, string argv[])
{
    // check for invalid usage
    if (argc < 2)
    {
        printf("Usage: ./election [candidates]\n");
        return 1;
    }

    // check for max no of candidates
    candidate_count = argc -1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 1;
    }

    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    voter_count = get_int("Number of votes: ");

    for (int i = 0; i < voter_count; i++)
    {
        name = get_string("Vote: ");

        if (vote(name) == false)
        {
            printf("Invalid Vote\n");
        }
    }

    printwinner();
}

bool vote(name)
{
    for (int i = 0; i < voter_count; i++)
    {
        if (strcmp(name, candidates[i]) == 0)
        {
            candidates[i].votes++;
            return true;
        }
        else
        return false;
    }
    return false;
}

void printwinner(void)
{
    return;
}