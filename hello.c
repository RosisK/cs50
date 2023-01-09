#include <stdio.h>
#include "rosis.h"

int main(void)
{
    string name = get_string("What is your name ?\n");
    printf("Oh hey %s!! It's nice to meet you!\n", name);
}