#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    while(++i <= 5)
    {
        while(++j <= 5)
        {
            printf("%d\n", j);
        }
        printf("%d\n",j);
    }
    return 0;
}