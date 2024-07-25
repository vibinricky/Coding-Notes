#include <stdio.h>
#include <string.h>
struct stud
{
    int regno;
    char name[20];
    int mark[3];
    int total;
};

void main()
{
    struct stud s[60];
    int n,i,j;
    printf("enter the number of students: ");
    scanf("%d",&n);
    for(i = 0; i<n; i++){

        printf("Enter the details of the student %d:\n", i+1);
        printf("Enter the regno of student: ");
        scanf("%d",&s[i].regno);
        printf("Enter the name of the student: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter the marks of 3 subject: ");
        for(j =0; j<3; j++){
            scanf("%d",&s[i].mark[j]);
            

        }

    }

    for(i=0; i<n; i++){
        s[i].total = 0;
        for(j = 0; j<3; j++){
            s[i].total += s[i].mark[j];
        }
    }
    for(i=0; i<n; i++){
        printf("%d\n",s[i].regno);
        puts(s[i].name);
        printf("%d\n",s[i].total);
    }
}
