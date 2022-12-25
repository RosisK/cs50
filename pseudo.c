// get key through command line argument
// make sure the key is valid
//   key is invalid if
//      the argument count is anything other than 2
//      the argv[1] doesn't contain exactly 26 characters
//      all 26 characters aren't letters
//      repeated letters are present
// the case of the letters in the key should not affect anything


#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    person one;
    one.name = "Rosis";
    one.number = "323";

    printf("%s and %s\n", one.name, one.number);
}