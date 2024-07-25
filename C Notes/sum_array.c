#include <stdio.h>

void main()
{
    int i, arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (i = 0; i<5; i++){
        sum += arr[i];
    }
    printf("sum of array: %d", sum);

}