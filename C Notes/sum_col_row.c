#include <stdio.h>

void main()
{
    int i,j,sum1 = 0,sum2 = 0;
    int arr[5][5] = 
    {{5,6,7,8,9},
    {10,11,12,13,14},
    {15,16,17,18,19},
    {20,21,22,23,24},
    {25,26,27,28,29}};

    for(i=0; i<5; i++){
        sum1 = 0;
        for(j=0; j<5; j++){
            sum1 += arr[i][j];
        }
        printf("%d ",sum1);
    }
    printf("\n");
    for(i=0; i<5; i++){
        sum2 = 0;
        for(j=0; j<5; j++){
            sum2 += arr[j][i];

        }
        printf("%d ",sum2);
    }

    
}