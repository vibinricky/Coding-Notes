#include <stdio.h>

int f(int n)
{
    static int i = 1;
    if(n>=5) return n;
    else {
        n = n+i;
        i++;
        return f(n);
    }
}

void main()
{
    int n = 1;
    printf("%d",f(n));
}