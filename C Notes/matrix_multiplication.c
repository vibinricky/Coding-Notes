#include <stdio.h>

int result[50][50];

int main()
{
    int i, j, k;

    int matrix1[50][50],matrix2[50][50];

    int row1, col1;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&row1,&col1);
    for(i = 0; i<row1; i++){
        for(j = 0; j<col1; j++){
            printf("enter (%d, %d)", i+1, j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    int row2, col2;
    printf("Enter the no of rows and columns:");
    scanf("%d %d",&row2,&col2);
    for(i = 0; i<row2; i++){
        for(j = 0; j<col2; j++){
            printf("enter (%d, %d)", i+1, j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    

    for(i = 0; i<row1; i++){
        for(j = 0; j<col2; j++){
            for(k = 0; k<col1; k++){
                result[i][j] += matrix1[i][k]*matrix2[k][j];
            }
        }
    }
        

    for(i = 0; i<row1; i++){
        for(j = 0; j<col2; j++){
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
