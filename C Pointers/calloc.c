#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, block;
    int *x;

    printf("Enter the no of blocks");
    scanf("%d",&block);
    x = (int*) calloc(block, sizeof(int));

    if(x==NULL){
        printf("The meamory is not available\n");
    } else {
        printf("enter the %d elments\n",block);
        for(i=0; i<block; i++){
            scanf("%d", (x+i));
            
        }
    }
    printf("The elements in the memory are:\n");
    for(i=0; i<block; i++){
            printf("%d\n", *(x+i));
        }
}