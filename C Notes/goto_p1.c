#include <stdio.h>

int main()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);
    if (x%2 == 0){
        goto even;
    } else {
        goto odd;
    }
    
    odd:
    printf("Odd");
    return 0;           // code goes to end
    even:
    printf("Even");
    return 0;          // code goes to end
}