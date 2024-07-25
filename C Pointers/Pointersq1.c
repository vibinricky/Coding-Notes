#include <stdio.h>

int main()
{
    int x = 10;
    int *y;
    y = &x;
    printf("the value of x is: %d\n", x);
    printf("the value of &x is: %d\n", &x);
    printf("the value of y is: %d\n",y);
    printf("the value of *y is: %d\n",*y);
    printf("the value of &y is: %d\n",&y);

    return 0;
}