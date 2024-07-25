#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *x, *y;
    x = (int*) malloc(5*sizeof(int));
    y = x;
    if(x==NULL){
        printf("The meamory is not available\n");
    } else {
        printf("enter the five elments\n");
        for(i=0; i<5; i++){
            scanf("%d", x);
            x++;
        }
    }
    printf("The elements in the memory are:\n");
    for(i=0; i<5; i++){
            printf("%d\n", *y);
            y++;
        }
}