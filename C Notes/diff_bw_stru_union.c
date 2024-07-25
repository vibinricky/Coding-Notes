#include <stdio.h>

union stu
{
    int x;
    float y;
    char z;
};

void main()
{
    union stu s;

    s.x = 80;
    s.y = 9.45;
    s.z = 'c';
    printf("\nThe value in x is:%d",s.x);         //Garbage value
    printf("\nThe value in y is:%0.2f",s.y);      //Garbage value 
    printf("\nThe value in z is:%c",s.z);         //only stored
    printf("\nsize of s:%d",sizeof(s.z));         
}