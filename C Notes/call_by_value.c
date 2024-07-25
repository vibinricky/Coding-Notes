#include <stdio.h>

void swap(int , int);

void main()
{
    int x=5, y=10;
    
    printf("Before swapping: %d %d\n", x, y);
    swap(x,y);
    printf("after swapping:%d %d\n", x, y);

}
void swap(int a, int b)
{
    int temp = a;
    a=b;
    b= temp;
    printf( "After swap:%d %d\n", a, b);
}