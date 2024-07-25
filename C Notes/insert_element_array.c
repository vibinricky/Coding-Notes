#include <stdio.h>

void main()
{
    int i ,j , loc = 4, element = 100;
    int arr[20] = {11,12,13,14,15,16,17,18,19,20};
    int n = 10;
    // shifting
    for(i=n-1; i>=loc; i--){
        arr[i+1] = arr[i];
    }
    // inserting
    arr[loc] = element;
    
    for(j=0; j<=n; j++){
        printf("%d ,",arr[j]);
    }

}