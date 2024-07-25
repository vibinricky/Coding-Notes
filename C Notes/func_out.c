# include <stdio.h>

int fun(int num)
{
    int count =0;
    while (num){
        count ++;
        num>>=1;
    }
    return (count);
}

void main()
{
    printf("%d",fun(435));
}