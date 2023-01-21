#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

#define MAX 9

typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

candidate candidates[MAX];
int candidate_count, voter_count;

int main(int argc, string argv[])
{
    if (argc <= 2)
    {
        printf("Usage: ./election [candidates]\n");
        return 1;
    }
    candidate_count = argc -1;
    if (candidate_count > MAX)
    {
        printf("Usage: ./election [candidates]\nMaximum number of candidates is %i\n", MAX);
        return 1;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
    }
    
}