#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // List of size zero
    node *list = NULL;

    // Add a number to the list
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        free (n);
        return 1;
    }
    
}