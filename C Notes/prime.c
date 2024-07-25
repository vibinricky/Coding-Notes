# include <stdio.h>
# include <math.h>

int main(){

    int a, i, flag = 1;

    printf("Enter the number to check prime: ");
    scanf("%d",&a);

    int b = sqrt(a);

    for (i=2; i<=b; i++){
        if (a%i == 0){
            flag = 0;
            break;
        } else {
            flag = 1;
        }
    }

    if (flag == 1){
        printf("Prime");
    } else {
        printf("Not Prime");
    }
    return 0;
}