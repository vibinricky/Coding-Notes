#include <stdio.h>

void main() 
{
    int x, y, z, sum;
    printf("Enter any 3 numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    sum = x + y + z;

    printf("sum of %d, %d, %d is %d",x, y, z, sum);

}