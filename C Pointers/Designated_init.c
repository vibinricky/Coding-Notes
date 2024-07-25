#include <stdio.h>

struct abc
{
    int x;
    int y;
    int z;
};

int main()
{
    struct abc i = {.y =20, .x=10, .z=30};
    printf("%d %d %d", i.x, i.y, i.z);
    return 0;
}