#include <stdio.h>
#include <cs50.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

int main(int argc, string argv[])
{
    // int voters = get_int("Number of votes: ");
    candidate candidates[] = {argv[1], argv[2], argv[3]};

    printf("%s\n", candidates[0].name)
}