#include <stdio.h>

int main()
{
    int i, num = 5;

    printf("Enter number: ");
    scanf("%d",&num);
    int j,k = 1;
    for (i=1; i<=num; i++){
        for(j = 1; j<=i; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}