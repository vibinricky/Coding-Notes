# include <stdio.h>

int main()
{
    int a, b;
    char ch;


    printf("Enter the arithematic Operator: ");
    scanf("%c", &ch);
    printf("enter two number: ");
    scanf("%d %d", &a, &b);

    if (ch == '+') {
        printf("%d", a+b);
    }else if (ch == '-') {
        printf("%d", a-b);
    }else if (ch == '*') {
        printf("%d", a*b);
    }else if (ch == '/') {
        printf("%f", (float)a/b);
    } else {
        printf("It is not arithematic Operator");
    }
    return 0;
}