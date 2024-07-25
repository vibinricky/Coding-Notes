#include <stdio.h>

int main()
{
    int size = 3, i, sum = 0;
    int arr[10][10] = {{1,2,3},{4,5,6},{7,8,9}};

    for(i = 0; i<size; i++){
        printf("%d\n",arr[i][i]);
        sum += arr[i][i];
    }
    printf("sum of major diagonal :%d\n",sum);


    int j, sum2 =0;

    for(j = 0; j<size; j++){
        printf("%d\n",arr[j][(size-1)-j]);
        sum2 += arr[j][(size-1)-j];
    }
    printf("sum of minor diagonal :%d\n",sum2);
}