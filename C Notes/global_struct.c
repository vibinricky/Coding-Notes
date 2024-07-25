#include <stdio.h>

struct stud
{
int regno;
char studname;
} s1, s2;         // Declared globally 

int main()
{
    s1.regno= 2022;
    s1.studname= 'C';
    printf("%d\n", s1.regno);
    printf("%c", s1.studname);
}