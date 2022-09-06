#include <stdio.h>
#include <cs50.h>

void meow(int n);

int main(void)
{
    int num = get_int ("meow number: ");
    meow(num);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }

}