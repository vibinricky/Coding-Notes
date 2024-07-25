#include <stdio.h>

void main()
{
    int i, j, k, loc = 4;
    int arr1[20] = {11,12,13,14,15,16,17,18,19,20};
    int arr2[5] = {300, 400, 500};
    int a = 10, b = 3;
    // shifting
    for(i=a-1; i>=loc; i--){
        arr1[i+b] = arr1[i];
    }
    // inserting
    for(j=0; j<b; j++){
        arr1[j+loc] = arr2[j];
    }
    for(k=0; k<(a+b); k++){
        printf("%d ,",arr1[k]);
    }

}