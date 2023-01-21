#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

#define MAX 9;

typedef struct
{
    string name;
    int votes;
    bool eliminated;
}
candidate;

candidate candidates[MAX];

int main(int argc, string argv[])
{
    if (argc <= 2)
    {
        printf("Usage: ./election [candidates]");
        return 1;
    }
    for (int i = 0; i < strlen(argv[i]); i++)
    {
        if ()
    }
}