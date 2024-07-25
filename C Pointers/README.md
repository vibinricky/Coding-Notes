# Pointers

**What is pointer?**

It point to a memory location

**Declaration of Pointer**
`data type * Identifier;`
`int* a;`  
`int *a;`
both works

**Two types of Pointers**

Two types 1) typed and 2) untyped.

**Typed:** points to specific type of data
e.g: int\* -------intdata

**Untyped:** points to any type of data
void\* -----generic pointer

**We use two operator:**

1. `&` (address)
2. `*` (pointer)

`&` returns the address of the variable.
`*` returns the value in the address.

[pointer example](Pointersq1.c)

```c
#include <stdio.h>

int main()
{
    int x = 10;
    int *y;
    y = &x;
    printf("the value of x is: %d\n", x);
    printf("the value of &x is: %d\n", &x);
    printf("the value of y is: %d\n",y);
    printf("the value of *y is: %d\n",*y);
    printf("the value of &y is: %d\n",&y);

    return 0;
}
```

Output

```
the value of x is: 10
the value of &x is: 6618652
the value of y is: 6618652
the value of *y is: 10
the value of &y is: 6618640
```

**size of pointers**

![pointer table](https://i.imgur.com/JnZ4Hhz.jpg[/img])

[pointer size example](size_pointer.c)

```c
#include <stdio.h>

int main()
{
    int *x;
    char *y;
    float *z;
    double *a;
    printf("The size of integer is:%d\n",sizeof(int));
    printf("The size of character is:%d\n",sizeof(char));
    printf("The size of float is:%d\n",sizeof(float));
    printf("The size of double is:%d\n",sizeof(double));

    // Size of Pointers
    printf("The size of interger pointer is:%d\n",sizeof(x));   //64 bit compiler contains 8 bytes pointer
    printf("The size of char pointer is:%d\n",sizeof(y));
    printf("The size of float pointeris:%d\n",sizeof(z));
    printf("The size of double pointer is:%d\n",sizeof(a));
    return 0;
}
```

```
The size of integer is:4The size of character is:1
The size of float is:4
The size of double is:8
The size of interger pointer is:8
The size of char pointer is:8
The size of float pointeris:8
The size of double pointer is:8
```

[array Pointer](array_pointers.c)

```c
#include <stdio.h>

int main()
{
    int a[2][2] = {{10,20},{30,40}};
    int i, j;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("%d\n",*(*(a+i)+j));
        }
    }
    return 0;
}
```

Output

```
10
20
30
40
```

![pointer_arraypt1](https://i.imgur.com/pITdOtQ.jpg[/img])

![pointer_arraypt2](https://i.imgur.com/HaZikzy.jpg[/img])

![increment_pointer](https://i.imgur.com/tSo8zOC.jpg[/img])
[increment pointer](inc_pointer.c)

![decrement_pointer](https://i.imgur.com/uZvWzGL.jpg[/img])
[decrement pointer](dec_pointer.c)

[Implement pointer for finding the largest and smallest element in the one dimensional array given below: ](max_min_pointer.c)
a [ ] = {13, 35, 6, 88}
Output –
The smallest value in the array is 6
The largest value in the array is 88

```c
#include <stdio.h>

void main()
{
    int i,j;
    int arr[] = {13,35,6,88};
    int *max = &arr[0];

    for(i = 1;i<4; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
    }
    printf("%d\n",*max);

    int *min = &arr[0];

    for(j = 1;j<4; j++){
        if(arr[j] < *min){
            *max = arr[j];
        }
    }
    printf("%d\n",*max);
}
```

Output

```
88
6
```

# Dynamic Memory Allocation

**Static Allocation**

FIXED SIZE –MEMORY
e.g primitive variables -after declaration of variable, size of the memory block is not changeable.
int a[10] –fixed size, can store only 10 elements

![Dynamic memory](https://i.imgur.com/UcvucUj.jpg[/img])

**Malloc**
To allocate memory of single block and returns base address

Syntax:

```c
Pointer variable = (void *) malloc(size in bytes);
```

![malloc](https://i.imgur.com/WxleR2V.jpg[/img])

example
![malloc pt2](https://i.imgur.com/GhUhFb4.jpg[/img])

[Malloc](Malloc.c)

```c
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *x, *y;
    x = (int*) malloc(5*sizeof(int));
    y = x;
    if(x==NULL){
        printf("The meamory is not available\n");
    } else {
        printf("enter the five elments\n");
        for(i=0; i<5; i++){
            scanf("%d", x);
            x++;
        }
    }
    printf("The elements in the memory are:\n");
    for(i=0; i<5; i++){
            printf("%d\n", *y);
            y++;
        }
}
```

```
enter the five elments
1
2
3
4
5
The elements in the memory are:
1
2
3
4
5
```

**Calloc**

- Continuous Memory allocation.
- Used to allocate memory for arrays. It creates multiple blocks.

Syntax:

```c
Pointer variable = (void*) Calloc( n, size(bytes));
```

n (number of blocks)
size (size of each block in array)

![calloc](https://i.imgur.com/o617hoW.jpg[/img])

[calloc](calloc.c)

```c
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i, block;
    int *x, *y;

    printf("Enter the no of blocks");
    scanf("%d",&block);
    x = (int*) calloc(block, sizeof(int));
    y = x;
    if(x==NULL){
        printf("The meamory is not available\n");
    } else {
        printf("enter the %d elments\n",block);
        for(i=0; i<block; i++){
            scanf("%d", x);
            x++;
        }
    }
    printf("The elements in the memory are:\n");
    for(i=0; i<block; i++){
            printf("%d\n", *y);
            y++;
        }
}
```

Ouptut

```
Enter the no of blocks3
enter the 3 elments
1
2
3
The elements in the memory are:
1
2
3
```

**Realloc**

Increase or decrease the size of array

syntax:

```c
Pointer variable = void* realloc(void* ptr, size_tsize)
```

size_tsize - size of the new block

ex:

```c
x = (int*) realloc(x, 2*sizeof(int));
```

[Create a memory block which can store of x bytes (integer), store the elements in the memory.Allocate extra memory for the same block to store additional elements.](realloc.c)

1)Creation of block using (calloc). Let say we have 7 blocks, each block of 2 bytes
2)Allocate extra two blocks using realloc
3)Print all the elements in the block?

```c
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i;
    int *x, *y, *z;

    x = (int*) calloc(7, sizeof(int));
    y = x;
    z = x;

    if(x==NULL){
        printf("The meamory is not available\n");
    } else {
        printf("enter the 7 elments\n");
        for(i=0; i<7; i++){
            scanf("%d", x);
            x++;
        }
    }

    z = (int*) realloc(z,2*sizeof(int));

    printf("enter the 2 elments\n");
    for(i=0; i<2; i++){
            scanf("%d", x);
            x++;
        }

    printf("The elements in the memory are:\n");
    for(i=0; i<9; i++){
            printf("%d\n", *y);
            y++;
        }
}
```

Output

```
enter the 7 elments
1
2
3
4
5
6
7
enter the 2 elments
8
9
The elements in the memory are:
1
2
3
4
5
6
7
8
9
```

# **Problems**

![patterns1](https://i.imgur.com/9oXRD03.jpg[/img])

![patterns2](https://i.imgur.com/XCUdmYC.jpg[/img])

[patterns ans](patternqn1.c)

```c
#include <stdio.h>

void main()
{
    int i, j;

    for(i =1; i<=5; i++){
        for(j = 1; j<=i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }


    for(i =1; i<=5; i++){
        for(j = 1; j<=i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }


    for(i =1; i<=5; i++){
        for(j = 1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for(i =1; i<=5; i++){
        for(j = 5; j>=i; j--){
            printf("%d ",j);
        }
        printf("\n");
    }

    for(i =5; i>=1; i--){
        for(j = i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }
}
```

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*
* *
* * *
* * * *
* * * * *
5 4 3 2 1
5 4 3 2
5 4 3
5 4
5
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
```

## Find the Output?

[question 1](ques1.c)

```c
#include <stdio.h>

void main()
{
    char c[] = "GATE2011";
    char *p = c;
    printf("%d\n",p+p[3]-p[1]);  // p[3] = *(p+3)
}
```

Output

```
2011
```

[question 2](ques2.c)

```c
#include <stdio.h>

int f(int n)
{
    static int i = 1;
    if(n>=5) return n;
    else {
        n = n+i;
        i++;
        return f(n);
    }
}

void main()
{
    int n = 1;
    printf("%d",f(n));
}
```

Output

```
7
```

[question 3](ques3.c)

```c
#include <stdio.h>

int main()
{
    int i, j;
    int a[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    for(i=0; i<3; i++){
        a[i] = a[i]+1;
        i++;
    }
    i--;
    for(j=7; j>4; j--)
    {
        int i = j/2;
        a[i] = a[i]-1;
    }
    printf("%d %d", i, a[i]);
}
```

Output

```
3 2
```

# **Structrure and Union**

## Structrure

**What is Structure ?**

Structure is user defined data type and this data type can hold number of element of differnet datatype.

![Structure table](https://i.imgur.com/uQi4nL5.jpg[/img])

**Define structure**

![define structure](https://i.imgur.com/FxXayAF.jpg[/img])

**Declaration of structure variable**

![structure variable](https://i.imgur.com/TPdwgvo.jpg[/img])

**Acessor Operator**

![Acessor operator](https://i.imgur.com/QH9vAn0.jpg[/img])

[example for understanding](struct.c)

```c
#include <stdio.h>

struct stud
{
    int regno;          // 4 size
    char name[20];      // 20
    float marks;        // 4
};

void main()
{
    struct stud s = {2020, "India", 99.99};
        //OR
    // struct stud s;
    // s.regno = 2020;
    // s.name[6] = "India";
    // s.marks = 99.99;

    printf("The student\n regno:%d\n name:%s\n marks:%0.2f\n"
    ,s.regno, s.name, s.marks);

    printf("size of struc datatype:%d", sizeof(s));

}

```

Output

```
The student
 regno:2020
 name:India
 marks:99.99
size of struc datatype:28
```

## Union

what is Union?

Union is user defined datatype, can hold number of elements of different data type.

![declaration of union](https://i.imgur.com/i4A1epJ.jpg[/img])

**difference b/w structure and Union**

![diff bw struct and union](https://i.imgur.com/ZuI6cfx.jpg[/img])

here **x** is replaced by **y** and **y** is replaced by **z**
so, place of **x** and **y** are garbage value
and only **z** value is stored and displayed

[example to understand difference between structure and Union]()

```c
#include <stdio.h>

union stu
{
    int x;
    float y;
    char z;
};

void main()
{
    union stu s;

    s.x = 80;
    s.y = 9.45;
    s.z = 'c';
    printf("\nThe value in x is:%d",s.x);         //Garbage value
    printf("\nThe value in y is:%0.2f",s.y);      //Garbage value
    printf("\nThe value in z is:%c",s.z);         //only stored
    printf("\nsize of s:%d",sizeof(s.z));
}
```

Output

```
The value in x is:1092039523
The value in y is:9.45
The value in z is:c
size of s:1
```

## Scope Structure

### Global Scope Struct

```c
#include <stdio.h>

struct stud
{
int regno;
char studname;
} s1, s2;         // Declared globally

int main()
{
    s1.regno= 2022;
    s1.studname= 'C';
    printf("%d\n", s1.regno);
    printf("%c", s1.studname);
}
```

Output

```
2022
C
```

### Local scope Struct

```c
#include <stdio.h>

struct stud
{
int regno;
char studname;
};

int main()
{
    struct stud s1, s2;           // local declaration

    s1.regno= 2022;
    s1.studname= 'C';
    printf("%d\n", s1.regno);
    printf("%c", s1.studname);
}
```

Output

```
2022
C
```

[Example redundancy Problem](struct_problem.c)

```c
#include <stdio.h>

struct                // It is possible to write a struct without name
{
    int salary;
} emp1, emp2;         // Declared globally

int manager()
{
    struct                     // redudancy
    {
        int salary;            // repetation of these lines
        int age;
    } manager;

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
```

Output

```
Enter the salary of employee one:30000
Enter the salary of employee two:40000
The salary of the first employeee is: 30000
The salary of the second employeee is: 40000
The mananger salary is 55000
```

**Problem is redundancy**

If the variable is decalredin the in the local scope, then need to re-declare the whole structure.
Instead of writing the structure again, use type of the structure.

[Solution of redundancy Problem](struct_problem2.c)

```c
#include <stdio.h>

struct employee              // It is possible to write a struct without name
{
    int salary;
    int age;
} emp1, emp2;         // Declared globally

int manager()
{
    struct employee manager;        // No redundancy

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
```

Output

```
Enter the salary of employee one:30000
Enter the salary of employee two:40000
The salary of the first employeee is: 30000
The salary of the second employeee is: 40000
The mananger salary is 55000
```

## Typedef

One more way of declaring the type of the structure.

Syntax:

```c
typedef (existing data type) (new data type)
```

Example:

```c
#include <stdio.h>

typedef int INTEGER;

int main()
{
    INTEGER var = 10;
    printf("%d",var);
    return 0;
}
```

Output

```
10
```

![typedef](https://i.imgur.com/5fhlfKa.jpg[/img])

[2nd one](typedef_2ndone.c)

```c
#include<stdio.h>
typedef struct stud
{
int regno;
char name;
} stud;

int main()
{
    stud s2;
}
```

Output

```

```

**Designated initialization**

[Exampe](Designated_init.c)

```c
#include <stdio.h>

struct abc
{
    int x;
    int y;
    int z;
};

int main()
{
    struct abc i = {.y =20, .x=10, .z=30};
    printf("%d %d %d", i.x, i.y, i.z);
    return 0;
}
```

Output

```
10 20 30
```

# **Function Pointer**

```c
int func(int a, int b)
{
    return a+b;
}
int main ()
{
    printf("%d", func(2, 5));             // function is executed in the compile time
    return 0;                             // we are not calling function in run time (black screen we give input)
}
```

**How this is executed?**
func is called when the printf statement is executed
Calling the function is not decided at the run time.

**Problem**

Consider the scenario were user wants to select the function for execution at the run time of the program

You have a project for designing the calculator,which has capability to perform the arithmetic operation(addition,subtraction, multiplication and division).User need to decide which operation to be performed at the runtime.

You asked to design calculator using a separate function for addition, subtraction, multiplication and division.The user will select the choice of function at the runtime for the arithmetic operation.

provide a solution to the problem using two different mechanism

1. [switch case expression]()

```c
#include <stdio.h>

int add(int a, int b)
{
 return a+b;
}

int sub(int a, int b)
{
 return a-b;
}

int mul(int a, int b)
{
 return a*b;
}

float div(int a, int b)
{
 return (float)a/b;
}

int main()
{
    int x,a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("Enter corresponding value for operation");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("%d",add(a,b));
        break;
    case 2:
        printf("%d",sub(a,b));
        break;
    case 3:
        printf("%d",mul(a,b));
        break;
    case 4:
        printf("%f",div(a,b));
        break;
    default:
        printf("wrong number");
    }
}
```

```
enter a and b:3
4
Enter corresponding value for operation4
0.750000
```

2. [function pointers](func_pointer.c)

```c
#include <stdio.h>

int add(int a, int b)
{
 return a+b;
}

int sub(int a, int b)
{
 return a-b;
}

int mul(int a, int b)
{
 return a*b;
}

int div(int a, int b)
{
 return a/b;
}

int main()
{
    int x,a,b;


    int(*ptr2func[4]) (int, int) = {add, sub, mul, div};          // Syntax
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("Enter corresponding value for operation 0, 1, 2, 3:");
    scanf("%d",&x);
    printf("%d", ptr2func[x](a, b));                              // Syntax
    return 0;

}
```

Output

```c
enter a and b:3
4
Enter corresponding value for operation 0, 1, 2, 3:0
7
```

# **Problems**

[Program to find the sum of major and minor diagonal in a matrix? for square matrix](sum_diagonal.c)

![ans](https://i.imgur.com/WG50IBx.jpg[/img])

```c
#include <stdio.h>

int main()
{
    int size = 3, i, sum = 0;
    int arr[10][10] = {{1,2,3},{4,5,6},{7,8,9}};

    for(i = 0; i<size; i++){
        printf("%d\n",arr[i][i]);
        sum += arr[i][i];
    }
    printf("sum of major diagonal :%d\n",sum);


    int j, sum2 =0;

    for(j = 0; j<size; j++){
        printf("%d\n",arr[j][(size-1)-j]);
        sum2 += arr[j][(size-1)-j];
    }
    printf("sum of minor diagonal :%d\n",sum2);
}
```

Output

```
1
5
9
sum of major diagonal :15
3
5
7
sum of minor diagonal :15
```

[Floyd triangle problem If the input is 5, then the output is the following](floyd_triange.c)

```c
#include <stdio.h>

int main()
{
    int i, num = 5;

    printf("Enter number: ");
    scanf("%d",&num);
    int j,k = 1;
    for (i=1; i<=num; i++){
        for(j = 1; j<=i; j++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
}
```

Output

```
Enter number: 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

```
Enter number: 4
1
2 3
4 5 6
7 8 9 10
```

# Array Structure

Instead of declaring multiple variables

declare array of structure (element of array represent the structure of variable)

![diff array struct](https://i.imgur.com/WTTrfqZ.jpg[/img])

[Using arrays of structure, write a program to calculate total marks of students](array_struct.c)

Read regno, name and marks of the students

To calculate total mark of each student

to display the result

```c
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
```

Output

```
enter the number of students: 2
Enter the details of the student 1:
Enter the regno of student: 1
Enter the name of the student: josh
Enter the marks of 3 subject: 10
20
30
Enter the details of the student 2:
Enter the regno of student: 2
Enter the name of the student: rodk
Enter the marks of 3 subject: 1
2
3
1
josh
60
2
rodk
6
```

# Nested Structure

Nested structure in two ways

1. Define on structure inside another structure
2. Declare one structure variable as a member to another structure

### Struct inside struct

example

```c
struct stud
{
    int regno;
    char name[20];
    struct dob
    {
        int date,month,year;
    }d;
}s;
```

dob structure variable is d

stud structure variable is s.

Structure dob is defined inside the struct called stud

To access the member of struct stud (using variable s, s.regno, s.name)

<u>To access the member of dob (struct)</u>
**(s.d.day, s.d.month, s.d.year)**

### Declare one structure variable as a member to another

```c
struct dob
{
    int date,month,year;
};
struct stud
{
    int regno;
    char name[20];
    struct dob d;
}s;
```

d is the structure variable of dob

struct dob d as a member of struct stud

To access the stud struct member (s.regno, s.name.

To access the dob struct member (s.d.day, s.d.month, s.d.year)

[Read regno, name and dob from the user and the print the same.](nested_struct.c)

```c
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
```

Output

```
Enter the regno: 1
enter the name: josh
Enter the date of birth: 12-23-34
1
josh
12-23-34
```

## Coping Structure variable

[coping struct variable](copy_struct.c)

```c
#include <stdio.h>

struct stud
{
    int regno;
    float mark;
}a, b;

void main(){
    a.regno = 12;
    a.mark = 57.6;
    b = a;
    printf("%d, %0.1f",b.regno,b.mark);
}
```

Output

```
12, 57.6
```

# Structure Pointer

Pointer stores the address of integer variable

[example](struct_pointer.c)

```c
#include <stdio.h>

struct abc
{
    int x;
    int y;
};

int main()
{
    struct abc a = {0,1};
    struct abc *ptr = &a;
    printf("%d %d",ptr->x,ptr->y);
    return 0;
}
```

Output

```
0 1
```

[example 2](struct_pointer2.c)

```c
#include <stdio.h>

struct stud
{
    int regno;
    char name[20];
    float marks;
};

void main()
{
    struct stud s1 = {1,"Josh",95.56};
    struct stud *ptr = &s1;
    printf("%d %s %0.2f",ptr->regno,ptr->name,ptr->marks);
}
```

Output

```
1 Josh 95.56
```

## Structure Function

Passing structure as a arguments to the function.

**Can be done in three ways**

1. Passing members of the structure as a argument to the function
2. Passing entire structure as argument to the function
3. Passing address of structure variable as a argument to the function.

[1](swaping_struct1.c)

```c
#include <stdio.h>
struct elem
{
    int a, b;
}x;

int swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void main()
{
    x.a = 2;
    x.b = 3;
    printf("before swap a = %d and b = %d\n",x.a,x.b);
    swap(x.a, x.b);
    printf("after swap a = %d and b = %d\n",x.a,x.b);

}


```

Output

```
before swap a = 2 and b = 3
after swap a = 2 and b = 3
```

[2](swaping_struct2.c)

```c
#include <stdio.h>
struct elem
{
    int a, b;
}y;

int swap(struct elem x)
{
    int temp = x.a;
    x.a = x.b;
    x.b = temp;
}

void main()
{
    y.a = 2;
    y.b = 3;
    printf("before swap a = %d and b = %d\n",y.a,y.b);
    swap(y);
    printf("after swap a = %d and b = %d\n",y.a,y.b);

}

```

Output

```
before swap a = 2 and b = 3
after swap a = 2 and b = 3
```

[3](swaping_struct3.c)

```c
#include <stdio.h>
struct elem
{
    int a, b;
}y;

int swap(struct elem *x)
{
    int temp = x->a;
    x->a = x->b;
    x->b = temp;
}

void main()
{
    y.a = 2;
    y.b = 3;
    printf("before swap a = %d and b = %d\n",y.a,y.b);
    swap(&y);
    printf("after swap a = %d and b = %d\n",y.a,y.b);

}
```

Output

```
before swap a = 2 and b = 3
after swap a = 3 and b = 2
```
