#include <stdio.h>
int x = 5;
void fuc1();

void main()
{
    int x = 7;
    printf("The value of x is:%d\n", x); // prints 7 because it intially checks inside the local and go out for global 
    fuc1();
}

void fuc1()
{
    printf("The value of x is:%d", x);  // prints 5 because there is no local variable
}
