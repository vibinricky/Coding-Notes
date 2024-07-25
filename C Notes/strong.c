#include <stdio.h>

int main()
{
    int num, r, fact, j;
    printf("Enter the number to check strong: ");
    scanf("%d",&num);
    int num2 = num;
    int sum = 0;
    while (num != 0)
    {
        r = num%10;
        fact = 1;
        for(j = 1; j<=r; j++){
            fact = fact*j;
        }
        sum += fact;
        num = num/10;
    }

    if(sum == num2){
        printf("it is strong");
    } else{
        printf("Not strong");
    }

    return 0;
}



