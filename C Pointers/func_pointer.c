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

int div(int a, int b)
{
 return a/b;
}

int main()
{
    int x,a,b;
    

    int(*ptr2func[4]) (int, int) = {add, sub, mul, div};          // Syntax
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("Enter corresponding value for operation 0, 1, 2, 3:");
    scanf("%d",&x);
    printf("%d", ptr2func[x](a, b));                              // Syntax
    return 0;
    
}