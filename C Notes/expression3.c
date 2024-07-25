#include<stdio.h>

void main()
{
    int a = 2, b = 3;
    b= a++ + b--;
    printf("%d,%d\n", a, b);
    a = a-- + ++b;
    printf("%d,%d\n", a, b);
    b = ++a + --b;
    printf("%d,%d", a, b);
}