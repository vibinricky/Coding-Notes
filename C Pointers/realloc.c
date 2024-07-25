#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *x, *y, *z;

    x = (int*) calloc(7, sizeof(int));
    y = x;
    z = x;

    if(x==NULL){
        printf("The meamory is not available\n");
    } else {
        printf("enter the 7 elments\n");
        for(i=0; i<7; i++){
            scanf("%d", x);
            x++;
        }
    }

    z = (int*) realloc(z,2*sizeof(int));

    printf("enter the 2 elments\n");
    for(i=0; i<2; i++){
            scanf("%d", x);
            x++;
        }

    printf("The elements in the memory are:\n");
    for(i=0; i<9; i++){
            printf("%d\n", *y);
            y++;
        }
}