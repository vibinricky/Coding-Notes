#include<stdio.h>

int add( int, int);

int main()
{
    int x, y, sum;

    printf("enter the first number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);

    sum = add(x, y);
    
    printf("sum is %d", sum);
    return 0;
}

int add(int n1, int n2)
{
    int z = n1+n2;
    return z;
}