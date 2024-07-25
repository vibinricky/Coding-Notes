#include<stdio.h>

int add();

int main()
{
    int y = add();
    printf("sum is %d\n", y);
    return 0;
}

int add()
{
    int x1, x2, sum;

    printf("enter the first number: ");
    scanf("%d", &x1);
    printf("Enter the second number: ");
    scanf("%d", &x2);

    sum = x1+x2;
    return sum;
}

