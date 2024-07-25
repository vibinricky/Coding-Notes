#include <stdio.h>

struct employee              // It is possible to write a struct without name
{
    int salary;
    int age;
} emp1, emp2;         // Declared globally 

int manager()
{
    struct employee manager; 
    
    manager.age = 27;

    if (manager.age > 30)
        manager.salary = 65000;
    else
        manager.salary = 55000;
    return manager.salary;
}

int main()
{
    printf("Enter the salary of employee one:");
    scanf("%d", &emp1.salary);
    printf("Enter the salary of employee two:");
    scanf("%d", &emp2.salary);

    printf("The salary of the first employeee is: %d\n",emp1.salary);
    printf("The salary of the second employeee is: %d\n",emp2.salary);

    printf("The mananger salary is %d", manager());
    return 0;
}