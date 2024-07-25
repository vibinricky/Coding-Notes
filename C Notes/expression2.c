#include<stdio.h>

void main()
{
    int x = 10, y = 20, z;
    z= x++ * --y;
    printf("%d,%d,%d", x, y, z);
}