#include <stdio.h>


struct stud
{
    int regno;
    char name[30];
    struct dob
    {
        int date,month,year;
    }d;
}s;


void main()
{
    printf("Enter the regno: ");
    scanf("%d",&s.regno);
    printf("enter the name: ");
    fflush(stdin);
    gets(s.name);
    printf("Enter the date of birth: ");
    scanf("%d %d %d",&s.d.date,&s.d.month,&s.d.year);

    printf("%d\n",s.regno);
    printf("%s\n",s.name);
    printf("%d%d%d",s.d.date,s.d.month,s.d.year);

}