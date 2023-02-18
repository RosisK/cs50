#include <stdio.h>

typedef struct
{
    int x;
    int y;
}
point;

int main(void)
{
    point P = {1, 2};

    printf("(%i,%i)\n", P.x, P.y);
}