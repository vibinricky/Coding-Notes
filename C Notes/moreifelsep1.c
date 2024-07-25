#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number check for even or odd: ");
    scanf("%d", &a);

    if (a%2 == 0) 
    printf("%d is a even number",a);
    else 
    printf("%d is a odd number",a);
    printf("\nThe code is for even and odd number");
    return 0;
}

// input:
// case1:
// 8 > enter
//case 2:
// 17 > enter