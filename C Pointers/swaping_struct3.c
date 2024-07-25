#include <stdio.h>
struct elem     
{
    int a, b;
}y;

int swap(struct elem *x)
{
    int temp = x->a;
    x->a = x->b;
    x->b = temp;
}

void main()
{
    y.a = 2;
    y.b = 3;
    printf("before swap a = %d and b = %d\n",y.a,y.b);
    swap(&y);
    printf("after swap a = %d and b = %d\n",y.a,y.b);

}
