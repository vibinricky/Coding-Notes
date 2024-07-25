#include <stdio.h>
struct elem     
{
    int a, b;
}x;

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void main()
{
    x.a = 2;
    x.b = 3;
    printf("before swap a = %d and b = %d\n",x.a,x.b);
    swap(x.a, x.b);
    printf("after swap a = %d and b = %d\n",x.a,x.b);

}

