#include <stdio.h>

void main()
{
    int i, arr[6] = {5,20,12,30,5,9};
    int large = arr[0];
    for(i = 1; i<6; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    printf("%d",large);
}