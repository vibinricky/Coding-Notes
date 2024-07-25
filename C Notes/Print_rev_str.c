#include <stdio.h>
#include <string.h>

void main()
{
    int i, x, length = 0;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    x = strlen(str);
    for(i = x-1; i>= 0; i--){
        printf("%c",str[i]);

    } 

    
}