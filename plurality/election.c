#include <stdio.h>
#include <cs50.h>
#include <string.h>

bool vote(string name);
void print_winner(void);

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[4];
int voter_count, candidate_count;
string candy_name;

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

    for (int i = 0; i < voter_count; i++)
    {
        candy_name = get_string("Vote: ");
        bool whowin = vote(candy_name);
    }

    print_winner();
}

bool vote(string name)
{
    for (int i = 0; i <= voter_count; i++)
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
        if (candidates[0].votes > candidates[1].votes || candidates[0].votes > candidates[2].votes || candidates[0].votes > candidates[3].votes)
        {
            printf("%s\n", candidates[0].name);
        }

        else if (candidates[1].votes > candidates[0].votes || candidates[1].votes > candidates[2].votes || candidates[1].votes > candidates[3].votes)
        {
            printf("%s\n", candidates[1].name);
        }

        else if (candidates[2].votes > candidates[1].votes || candidates[2].votes > candidates[0].votes || candidates[2].votes > candidates[3].votes)
        {
            printf("%s\n", candidates[2].name);
        }

        else if (candidates[3].votes > candidates[1].votes || candidates[3].votes > candidates[2].votes || candidates[3].votes > candidates[0].votes)
        {
            printf("%s\n", candidates[3].name);
        }
        else
        return;
}