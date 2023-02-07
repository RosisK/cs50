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
        return 1;
    }

    /*In order to access a field inside a node struct, we use syntax like this
        *(n).number = 1;
    What this is saying is
        Go to the pointer(dereferencing) and access the number field

    Since the syntax is a little cryptic and hard to understand, syntactic sugar is used like
        n->number

    This just says to go to to the number field of n */
    n->number = 1;
    n->next = NULL;

    // Update the list to point to new node
    list = n;
    free (n);

    // Add a number to the list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free (list);
        return 1;
    }

    n->number = 2;
    n->next = NULL;

    list->next = n;
    free (n);

    // Add a number to the list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        free (list->next);
        free (list);
        return 1;
    }

    n->number = 3;
    n->next = NULL;

    list->next->next = n;
    free (n);
    free (list);
}