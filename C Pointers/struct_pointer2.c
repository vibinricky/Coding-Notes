#include <stdio.h>

struct stud
{
    int regno;
    char name[20];
    float marks;
};

void main()
{
    struct stud s1 = {1,"Josh",95.56};
    struct stud *ptr = &s1;
    printf("%d %s %0.2f",ptr->regno,ptr->name,ptr->marks);
}