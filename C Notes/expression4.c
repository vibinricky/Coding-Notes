#include<stdio.h>

void main()
{
    int x = 10, y;
    y = ++x + ++x + ++x;
    printf("%d", y);
}