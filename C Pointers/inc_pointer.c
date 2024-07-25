#include <stdio.h>

int main()
{
    int a[] = {5,16,7,8,9,45,32,23,10};
    int *p = &a[0];
    printf("%d\n", *(p++));
    printf("%d",*p);
    return 0;
}