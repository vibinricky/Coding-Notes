#include <stdio.h>

int main()
{
    int *x;
    char *y;
    float *z;
    double *a;
    printf("The size of integer is:%d\n",sizeof(int));    
    printf("The size of character is:%d\n",sizeof(char));
    printf("The size of float is:%d\n",sizeof(float));
    printf("The size of double is:%d\n",sizeof(double));

    // Size of Pointers
    printf("The size of interger pointer is:%d\n",sizeof(x));   //64 bit compiler contains 8 bytes pointer
    printf("The size of char pointer is:%d\n",sizeof(y));
    printf("The size of float pointeris:%d\n",sizeof(z));
    printf("The size of double pointer is:%d\n",sizeof(a));
    return 0;
}