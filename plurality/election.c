#include <stdio.h>
#include <cs50.h>

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
int candidate_count;

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
        candidates[i].votes = 
    }
}