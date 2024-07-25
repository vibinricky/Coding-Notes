#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Enter the arithematic opration: ");
    scanf("%c", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    

    switch(ch)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%f",(float)a/b);
        break;
    }
    return 0;
}