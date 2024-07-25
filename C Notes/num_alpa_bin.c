#include  <stdio.h>

int main()
{
    int x;
    printf("Enter 0 or 1: ");
    scanf("%d", &x);

    switch(x)
    {
        case 0:
        printf("Zero");
        break;
        case 1:
        printf("One");
        break;
        default:
        printf("it is not 1 or 0");
        
    }
    return 0;
}