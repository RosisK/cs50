#include <stdio.h>

typedef char *string;

string get_string(string s)
{
    string input = "";
    printf("%s", s);
    scanf("%s", input);

    return input;
}