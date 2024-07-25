#include <stdio.h>

int main()
{
    int n = 1;
    vit:
    printf("%d\n", n);
    n++;
    if(n <= 10){
        goto vit;
    }
    return 0;
}