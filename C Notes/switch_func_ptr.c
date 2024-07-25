#include <stdio.h>

int add(int a, int b)
{
 return a+b;
}

int sub(int a, int b)
{
 return a-b;
}

int mul(int a, int b)
{
 return a*b;
}

float div(int a, int b)
{
 return (float)a/b;
}

int main()
{
    int x,a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("Enter corresponding value for operation");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("%d",add(a,b));
        break;
    case 2:
        printf("%d",sub(a,b));
        break;
    case 3:
        printf("%d",mul(a,b));
        break;
    case 4:
        printf("%f",div(a,b));
        break;
    default:
        printf("wrong number");
    }
}