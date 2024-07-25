#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "Vit";
    puts(str);
    char str2[20] = "Hello";
    puts(str2);

    printf("The cat string is:%s \n",strcat(str,str2));
    puts(str);
    puts(str2);

}