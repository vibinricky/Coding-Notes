#include<stdio.h>

void add(); 

int main()
{
    add(); 
    printf("END\n");
    return 0;
}

void add()  
{
    int n1, n2, sum;
    printf("enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);
    sum= n1+n2;
    printf("sum of %d and %d is %d \n", n1, n2, sum);
}

