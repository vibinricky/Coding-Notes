#include <stdio.h>

int main()
{
    int num1, num2, num3;
    float avg;
    printf("Enter the number1: ");
    scanf("%d", &num1);
    printf("Enter the number2: ");
    scanf("%d", &num2);

    num3 = num2 + num1;
    avg = (float)num3 / 2;

    printf("Avg of the %d and %d is: %f\n",num1, num2, avg);

    printf("%.3f", avg);

    return 0;
}