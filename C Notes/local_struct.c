#include <stdio.h>

struct stud
{
int regno;
char studname;
};          

int main()
{
    struct stud s1, s2;           // local declaration

    s1.regno= 2022;
    s1.studname= 'C';
    printf("%d\n", s1.regno);
    printf("%c", s1.studname);
}