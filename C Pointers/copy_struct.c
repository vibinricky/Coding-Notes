#include <stdio.h>

struct stud
{
    int regno;
    float mark;
}a, b;

void main(){
    a.regno = 12;
    a.mark = 57.6;
    b = a;
    printf("%d, %0.1f",b.regno,b.mark);
}
