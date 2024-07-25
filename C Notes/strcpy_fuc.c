#include <stdio.h>
#include <string.h>

void main()
{
    //strcpy()
    //strcpy( destination, source)
    char str[20] = "Vit Vellore";
    puts(str);

    char str2[20] = "Hello world";

    printf("%s \n", strcpy(str, str2));  // print str2
    puts(str);
    puts(str2);

}