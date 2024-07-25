#include <stdio.h>

void main()
{
    int i, length = 0;
    char str[20];
    printf("Enter the string: ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        length += 1;

    }
    printf("%d",length);   
    
}