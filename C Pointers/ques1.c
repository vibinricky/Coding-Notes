#include <stdio.h>

void main()
{
    char c[] = "GATE2011"; 
    char *p = c;
    printf("%d\n",p+p[3]-p[1]);  // p[3] = *(p+3)
}