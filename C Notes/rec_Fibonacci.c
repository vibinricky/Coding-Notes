#include <stdio.h>

int fibo(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else {
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
    int i, n = 4;
    for(i = 0; i<n; i++ ){
        printf("%d\n",fibo(i));

    }
    return 0;
}