#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "vit";
    puts(str);
    char str2[20] = "HELLO";
    puts(str2);

    printf("converted to upper case:%s \n",strupr(str));
    printf("converted to lower case:%s \n",strlwr(str2));
}