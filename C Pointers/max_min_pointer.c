#include <stdio.h>

void main()
{
    int i,j;
    int arr[] = {13,35,6,88};
    int *max = &arr[0];

    for(i = 1;i<4; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
    printf("%d\n",*max);

    int *min = &arr[0];

    for(j = 1;j<4; j++){
        if(arr[j] < *min){
            *max = arr[j];
        }
    }
    printf("%d\n",*max);
}