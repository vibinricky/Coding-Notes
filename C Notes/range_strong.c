#include <stdio.h>

void main()
{
    int min, max, n, r, fact, sum, i, j, strong;

    printf("Enter the min and max values:");
    scanf("%d %d", &min, &max);
    
    for(i = min; i = max; i++){
        n = i;
        strong = n;
        sum = 0;
        while (n != 0)
        {
            r = n%10;
            fact = 1;
            for(j = 1; j<=r; j++){
                fact = fact*j;
            }
            sum += fact;
            n = n/10;
        }
        if (strong == sum){
            printf("%d",strong);
        }
        
    }
}