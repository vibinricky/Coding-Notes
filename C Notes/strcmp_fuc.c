#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    printf("Enter string1: ");
    gets(str);
    puts(str);

    char str2[20];
    printf("Enter string2: ");
    gets(str2);
    puts(str2);

    printf("The compared string :%d \n",strcmp(str,str2));

    // 0 means Equal
    // positive means greater
    // Negative means smaller 
    // and the value is difference
}