# **Variables**

**What is varaiables ?**

Container used to hold the data in the memory location and it represents the memory location.

## Rules for naming the variable

- Cannot create a variable name with space inbetween
  int vit first = 1
- Cannot start a variable name with a number
  int 1vit = 22
- Cannot use certain words as a variable name.
  if, while, for (key words cannot be used, because it as a special meaning in the C)

## Keywords

- Keywords are predefined
- Reserved word –special meaning to the complier
- Keywords -part of the syntax cannot be used for the identifier (variable)

Keywords

- C is case sensitive
- Keywords need to be write in lowercase.

# **Data Types**

**Data types represent two things (about the variable)**
1)What type of data is allowed to store.
2)How much memory is required to store the data.

### Data types Available

Three types of datatypes

| PRIMITIVE | DERIVED  | User-defined |
| --------- | -------- | ------------ |
| Integer   | Array    | Structure    |
| Char      | String   | Union        |
| Float     | Pointer  | Type def     |
| void      | Function | enum         |

### Data types Primitive

![Primitive Datatype flowchart](https://i.imgur.com/8FUyBHt.jpg[/img])

**What is signed?** - can store both +veand –ve
**What is unsigned** – it accepts only +ve

### Fomat Specifier

![format specifier](https://i.imgur.com/Qw9I3Rf.png[/img])

---

#### CASE Example

(for understanding the concept)

![img](https://i.imgur.com/0wIDWk8.jpg[/img])

**Unsigned** (2 bytes)

- 2^16 = 65536 = **0 to 65535**

**Signed** (Supports (+ve) and (-ve))

- 65536/2 = 32768

- **For (–ve)** = -1, -2, -3 ….. To -32768
- **For (+ve)** = 0, 1, 2, 3……to 32767

---

**Ways to declare a short**

_In the declaration of variable_

`short a;`
`short int a;`

_We can also write_

`signed short a;`
`unsigned short a;`

**Format Specifier for integer**

For signed declaration - `%d`

For unsigned declaration - `%u`

---

[ex1 using short](/C%20in%20detial/ex1_shortdata.c)

```c
# include <stdio.h>

int main()
{
    short a = 10;
    printf("%d",a);
    return 0;
}
```

Output

```
10
```

[ex2 circle short](/C%20in%20detial/ex2_shortdata.c)

```c
#include <stdio.h>

int main ()
{
    short a = 32769;
    printf("%d", a);
    return 0;
}
```

Output

```
-32767
```

![signed circle](https://i.imgur.com/bk15Bwo.jpg[/img])

In the above problem we have to rotate clockwise the for num **32769** we reach **-32767**

[Ex3 Unsigned Circle](/C%20in%20detial/ex3_unsigned.c)

```c
#include <stdio.h>

int main()

{
    unsigned short a = -4;
    printf("%u", a);
    return 0;
}
```

Output

```
65532
```

![unsigned circle](https://i.imgur.com/Wi3eJYY.jpg[/img])

# **_Char_**

**Char two types**

- signed and unsigned
- It occupies 1 byte.
- **For 1 byte -what is minimum and maximum?**
  One byte - 2^8 = 256
  **Unsigned (+ve)** – 0 to 255

**Signed (+veand –ve)** - Range is -128 to 127
For (–ve) = -128, -127, -126……….-1
For (+ve) = 0,1,2, 3,4,5…………….127

---

**Why character represent in integer?**

The character data type is often said to be an integer type since all the characters are represented in memory by their associated ASCII Codes. If a variable is declared as char, C allows storing either a character or an integer value.

**How can we store a character in a 1 Byte?**

One byte character sets can contain 256 characters. The current standard, though, is Unicode which uses two bytes to represent all characters in all writing systems in the world in a single set. The original ASCII was a 7 bit character set (128 possible characters) with no accented letters.

_0-127 characters 128 in total_
![img](https://i.stack.imgur.com/KbZvG.gif)

[char and ASCII](/C%20in%20detial/char_ex1.c)

```c
#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("%d\n", ch);
    printf("%c", ch);
    return 0;
}
```

Output

```
65
A
```

[circle in char](/C%20in%20detial/char_ex2.c)

```c
#include <stdio.h>

int main()
{
    unsigned char ch = 258; // (or u can use this) unsigned char ch = 2;
    printf("%d\n", ch);  // you will get same output
    printf("%c", ch);
    return 0;
}

// use the circle to find the output
```

Output

```
2
☻
```

## **Practice Problem ???**

1. **Write a C program to get a input character from the user and print its corresponding ASCII value.**

[1_Ans](/C%20in%20detial/char_to_ascii.c)

```c
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("%d", ch);
    return 0;
}

// input:
// any char
// ex
// A ... Enter
```

Output

```
65
```

2. **Using the size of () function, write a C program to identify the size of the data type by** 1)**passing the variable.** 2)**passing the data-type.**

3. **What do you mean by limits.h? Write a C program to print the limits of the each data type using the header file limits.h**

# **_Operators and Expressions_**

## Types of Operator

1. Arithmetic Operators
2. Assignment Operators
3. Comparison Operators
4. Logical Operators
5. Bitwise Operators

### 1.Arithemetic Operators

![Arithemetic Operators](https://i.imgur.com/jgxi1ck.jpg[/img])

Ignore the **(// floor Division)** it is not applicable for C and C++

### 2.Assignment Operators

![Assignment Operators](https://i.imgur.com/uOu6mda.jpg[/img])

### 3.Comparison Operators (Relational)

![Comparison Operators](https://i.imgur.com/TGfP42G.jpg[/img])

### 4.Logical Operators

![img](https://i.imgur.com/YhfceZ2.jpg[/img])

### 5.Bitwise Operators

- bitwise calculations on integers
- Integers into binary
- Bit by bit operation
- Result –decimal format
- work only on integers

![Bitwise Operators p1](https://i.imgur.com/sTjWkGf.jpg[/img])

![Bitwise Operators p2](https://i.imgur.com/d7KZwrN.jpg[/img])

## Operator precedence

![Operator precedence](https://i.imgur.com/Ch8FqB0.jpg[/img])

## modify Operator

**Unary operator** – operation can be performed on single operand

Operand is (x, y…….) & operator (+, -……..)

![modify Operator flow chart](https://i.imgur.com/PFIlMcp.jpg[/img])

### Steps to Solve expression (INCOMPLETE)

pre and post mixed (turbo c++)

![img](https://i.imgur.com/O9pgUF2.jpg[/img])

[expression 1](/C%20in%20detial/expression1.c)

```c
#include<stdio.h>

void main()
{
    int x = 10, y;
    y = ++x;
    printf("%d,%d", x, y);
}
```

Output

```
11,11
```

[expression 2](/C%20in%20detial/expression2.c)

```c
#include<stdio.h>

void main()
{
    int x = 10, y = 20, z;
    z= x++ * --y;
    printf("%d,%d,%d", x, y, z);
}
```

Output

```
11,19,190
```

[expression 3](/C%20in%20detial/expression3.c)

```c
#include<stdio.h>

void main()
{
    int a = 2, b = 3;
    b= a++ + b--;
    printf("%d,%d\n", a, b);
    a = a-- + ++b;
    printf("%d,%d\n", a, b);
    b = ++a + --b;
    printf("%d,%d", a, b);
}
```

Output

```
3,5
9,6
10,15
```

[Expression 4](/C%20in%20detial/expression4.c)

```c
#include<stdio.h>

void main()
{
    int x = 10, y;
    y = ++x + ++x + ++x;
    printf("%d", y);
}
```

Output

```
37
```

# **_Control Statements_**

## if - else

![if-else flowchart](https://i.imgur.com/h7fa7as.jpg[/img])

Syntax

```c
if (condition){

Statements;

} else {

Statements;

}
```

[Write a code to check the number is even or odd.](/C%20in%20detial/even_or_odd.c)

```c
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number check for even or odd: ");
    scanf("%d", &a);

    if (a%2 == 0) {
        printf("%d is a even number",a);
    } else {
        printf("%d is a odd number",a);
    }
    return 0;
}

// input:
// case1:
// 8 > enter
//case 2:
// 17 > enter
```

Output
case1

```
Enter a number check for even or odd: 8
8 is a even number
```

case2

```
Enter a number check for even or odd: 17
17 is a odd number
```

[if else without curly braces pt 1]()

```c
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number check for even or odd: ");
    scanf("%d", &a);

    if (a%2 == 0)
    printf("%d is a even number",a);
    else
    printf("%d is a odd number",a);
    printf("\nThe code is for even and odd number");
    return 0;
}

// input:
// case1:
// 4 > enter
//case 2:
// 7 > enter
```

Output
case 1

```
4 is a even number
The code is for even and odd number
```

case2

```
7 is a odd number
The code is for even and odd number
```

> This code work without curly braces becase it take only one line as block for if and else

[if else without curly braces pt 2]()

```c
#include <stdio.h>

int main()
{
    int a;
    printf("Enter a number check for even or odd: ");
    scanf("%d", &a);

    if (a%2 == 0)
    printf("%d is a even number",a);
    printf("\nThe code is for even and odd number");
    else
    printf("%d is a odd number",a);

    return 0;
}
```

Output

```
YOU WILL GET A ERROR
```

> **Understand why you get an error for this code:**
>
> because **else** dosen't related to **if** there are two lines after if statement

## Nested if

![Nested if flowchart](https://i.imgur.com/0QUCMtf.jpg[/img])

Syntax

```c
if (cond) {
    if (cond) {
        statement;
    } else {
        statement;
    }

} else {
    if (cond) {
        statement;
    } else {
        statement;
    }
}

```

[Write a C program to find Largest of three numbers using nested if.](/C%20in%20detial/greater_3num.c)

```c
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d is greater", a);
        } else {
            printf("%d is greater", c);
        }

    } else {
        if (b > c) {
            printf("%d is greater", b);
        } else {
            printf("%d is greater",c);
        }
    }

    return 0;
}
```

Output
case1

```
Enter the three numbers: 1
2
3
3 is greater
```

case2

```
Enter the three numbers: 3
2
1
3 is greater
```

case3

```
Enter the three numbers: 4
7
1
7 is greater
```

## if else Ladder (else if)

![if else ladder](https://i.imgur.com/BHVgiE0.png[/img])

Syntax

```c
Syntax:
if (condition){
    statements;
} else if (condition) {
    statements;
} else if (condition) {
    statements;
} else {
    statements;
}
```

[Write a C program to perform arithematic operation using if else ladder](/C%20in%20detial/calc_else_if.c)

```c
# include <stdio.h>

int main()
{
    int a, b;
    char ch;


    printf("Enter the arithematic Operator: ");
    scanf("%c", &ch);
    printf("enter two number: ");
    scanf("%d %d", &a, &b);

    if (ch == '+') {
        printf("%d", a+b);
    }else if (ch == '-') {
        printf("%d", a-b);
    }else if (ch == '*') {
        printf("%d", a*b);
    }else if (ch == '/') {
        printf("%f", (float)a/b);
    } else {
        printf("It is not arithematic Operator");
    }
    return 0;
}
```

Output
case1

```
Enter the arithematic Operator: +
enter two number: 5
6
11
```

case2

```
Enter the arithematic Operator: /
enter two number: 5
6
0.833333
```

## switch

![switch - flowchart](https://i.imgur.com/q5nSjcJ.jpg[/img])

syntax

```c
switch (expression)
{
    case constant1:
    statements
    break;
    case constant2:
    statements
    break;
    ……..
    ……..
    Default:
    statements
}
```

[Write a C program to print character ZERO if the user enter number 0 and print character ONE if the user enter number 1 using SWITCH CASE.](/C%20in%20detial/num_alpa_bin.c)

```c
#include  <stdio.h>

int main()
{
    int x;
    printf("Enter 0 or 1: ");
    scanf("%d", &x);

    switch(x)
    {
        case 0:
        printf("Zero");
        break;
        case 1:
        printf("One");
        break;
        default:
        printf("it is not 1 or 0");

    }
    return 0;
}
```

Output
case1

```
Enter 0 or 1: 1
One
```

case2

```
Enter 0 or 1: 0
Zero
```

case3

```
Enter 0 or 1: 7
it is not 1 or 0
```

[Write a C program to perform the arithmetic operation (+, -, \*, /) by taking the input (two numbers from the user) using SWITCH CASE.](/C%20in%20detial/calc_switch.c)

```c
#include <stdio.h>

int main()
{
    int a, b;
    char ch;
    printf("Enter the arithematic opration: ");
    scanf("%c", &ch);
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    switch(ch)
    {
        case '+':
        printf("%d",a+b);
        break;
        case '-':
        printf("%d",a-b);
        break;
        case '*':
        printf("%d",a*b);
        break;
        case '/':
        printf("%f",(float)a/b);
        break;
    }
    return 0;
}
```

Output

```
Enter the arithematic opration: +
Enter two numbers: 2
3
5
```

# **_Loop_**

## While Loop

![while loop flowchart](https://i.imgur.com/8U6WIm0.png[/img])

Syntax

```c
while(cond)
{
    statements;
}
```

## Break

**What is Break?**
Break is used to terminate loops and to exit from the switch statement

Break statement used in while, do while, for, switch

example

```c
int main()

{
    int x;

    for(x=1; x<10; x++){
        if (x>6){
            break;
        }else {
            printf("%d", x);
        }

    }
}
```

example 2

```c
int main()
{
    while(1){
        printf("vit\n");
        break;
    }
}
```

for switch statements also we use break statement

## continue

**what is continue?**
continue to used to skip the iteration

**Example**

[skip number in iteration](/C%20in%20detial/skip_continue.c)

```c
#include <stdio.h>

int main()
{
    int i;

    for(i=1; i<=10; i++ ){
        if (i==5){
            printf("---");
            continue;
        }
        printf("%d", i);
    }
    return 0;
}
```

output

```
1234---678910
```

# **_Goto Statement_**

**What is goto statement ?**

Is a jump statement, used to transfer the program control from one location to the another location.

**Goto statement is represented in two ways:**

1. **Forward jump**
   some set of instructions get ignored.
2. **Backward jump**
   some instructions is repeated for the execution.

## goto forward jump

Syntax

```c
goto label;
statements;
label:
Statements
```

- some set of instructions get ignored.
  goto is reserved keyword (lowercase)
- label (is identifier (or) place holder) -to which location in the code the control to transfer.
- label matches the word in the code and move to that.
- The colon ( : ) in the label indicates that the statement after the label belongs to the label
- Goto label in this statement –we call the label , then the control move to the label:
  The statement inside the label: is executed.

[goto forward example](/C%20in%20detial/goto_forward.c)

```c
#include <stdio.h>

int main()
{
   int sum=0;
   for(int i = 0; i<=10; i++){
	sum = sum+i;
	if(i==5){
	   goto addition;
	}
   }

   addition:
   printf("%d", sum);

   return 0;
}
```

Output

```
15
```

## goto backward jump

Syntax

```c
label:
statements;
goto label;
statements;
```

- Execution start from the first (label: get executed)
- goto statements –calling the label: the control goes to the label: the statement inside is executed.
- The execution get repeated based on the condition.

[goto backward example](/C%20in%20detial/goto_backwards.c)

```c
#include <stdio.h>

int main()
{
    int n = 1;
    vit:
    printf("%d\n", n);
    n++;
    if(n <= 10){
        goto vit;
    }
    return 0;
}
```

Output

```
1
2
3
4
5
6
7
8
9
10
```

[goto example](/C%20in%20detial/goto_p1.c)

```c
#include <stdio.h>

int main()
{
    int x;

    printf("Enter the number: ");
    scanf("%d", &x);
    if (x%2 == 0){
        goto even;
    } else {
        goto odd;
    }

    odd:
    printf("Odd");
    return 0;           // code goes to end
    even:
    printf("Even");
    return 0;          // code goes to end
}
```

Output

```
Enter the number: 4
Even
```

# **Practice problem**

1. Determine the given number is prime or not.

[1_Ans](/C%20in%20detial/prime.c)

```c
# include <stdio.h>
# include <math.h>

int main(){

    int a, i, flag;

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
```

Output

```
Enter the number to check prime: 3
Prime
Enter the number to check prime: 135
Not Prime
```

2.

3.

# **_Array_**

## 1-D array

**What is Array ?**
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

condition –elements should be in the same data type

```c
Data type  identity[size]

int a[5];
```

![initalisation Local array](https://i.imgur.com/pRcRrpP.jpg[/img])

![initalisation Global array](https://i.imgur.com/2a7cTzb.jpg[/img])

How to read the element Array

```c
for (i=0; i<5; i++){
    scanf("%d", &arr[i]);
}
```

printing the elements of Array

```c
for (i=0; i<5; i++){
    printf("%d", arr[i]);
}
```

## Array problems

[Sum of array elements](/C%20in%20detial/sum_array.c)

```c
#include <stdio.h>

void main()
{
    int i, arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (i = 0; i<5; i++){
        sum += arr[i];
    }
    printf("sum of array: %d", sum);

}
```

Output

```
sum of array: 150
```

[How to identify the LARGEST ELEMENT IN THE ARRAY](/C%20in%20detial/array_Largest.c)

```c
#include <stdio.h>

void main()
{
    int i, arr[6] = {5,20,12,30,5,9};
    int large = arr[0];
    for(i = 1; i<6; i++){
        if(arr[i] > large){
            large = arr[i];
        }
    }
    printf("%d",large);
}
```

Output

```
30
```

[How to insert a single element in a ARRAY](insert_element_array.c)

```c
#include <stdio.h>

void main()
{
    int i ,j , loc = 4, element = 100;
    int arr[20] = {11,12,13,14,15,16,17,18,19,20};
    int n = 10;
    // shifting
    for(i=n-1; i>=loc; i--){
        arr[i+1] = arr[i];
    }
    // inserting
    arr[loc] = element;

    for(j=0; j<=n; j++){
        printf("%d ,",arr[j]);
    }

}
```

Output

```
11 ,12 ,13 ,14 ,100 ,15 ,16 ,17 ,18 ,19 ,20 ,
```

[How to insert a array in another ARRAY](insert_arrayin_array.c)

```c
#include <stdio.h>

void main()
{
    int i, j, k, loc = 4;
    int arr1[20] = {11,12,13,14,15,16,17,18,19,20};
    int arr2[5] = {300, 400, 500};
    int a = 10, b = 3;
    // shifting
    for(i=a-1; i>=loc; i--){
        arr1[i+b] = arr1[i];
    }
    // inserting
    for(j=0; j<b; j++){
        arr1[j+loc] = arr2[j];
    }
    for(k=0; k<(a+b); k++){
        printf("%d ,",arr1[k]);
    }

}
```

Output

```
11 ,12 ,13 ,14 ,300 ,400 ,500 ,15 ,16 ,17 ,18 ,19 ,20 ,
```

## Multi-Dimentional Array

**What is Multi-Dimentional Array?**

Multidimensional array is the combination of multiple arrays.

![Two Dimentional Array](https://i.imgur.com/VvKLpFH.jpg[/img])

**To calculate size of array in bytes:**
20 \* 4 (bytes for each integer)
80 bytes.

![intilization of 2d pt1](https://i.imgur.com/ppuSDWK.jpg[/img])

![intilization of 2d pt2](https://i.imgur.com/mdXP0CL.jpg[/img])

**Accessing the 2D array elements**

```c
// i-row, j-column

for(i=0; i<4; i++)
{
for(j=0; j<5; j++)
{
printf(“%d”, a[i][j]);
}
}
```

![Three dimentional Array](https://i.imgur.com/3ENCDn1.jpg[/img])

![Intilization of three dimentional Array](https://i.imgur.com/HfRsjAZ.jpg[/img])

**Accessing the 3D array elements**

```c
// i– no of 2D array (z axis)
// j –row
// k= column
for(i=0; i<2; i++)
{
for(j=0; j<2; j++)
{
for(k=0; k<3; k++)
{
printf(“%d”, a[i][j][k]);
}
}
}
```

[Read the following 5X5 array of integers and calculate the row sum and column sum.](sum_col_row.c)

![question matrix](https://i.imgur.com/TXhvOeW.jpg[/img])

```c
#include <stdio.h>

void main()
{
    int i,j,sum1 = 0,sum2 = 0;
    int arr[5][5] =
    {{5,6,7,8,9},
    {10,11,12,13,14},
    {15,16,17,18,19},
    {20,21,22,23,24},
    {25,26,27,28,29}};

    for(i=0; i<5; i++){
        sum1 = 0;
        for(j=0; j<5; j++){
            sum1 += arr[i][j];
        }
        printf("%d ",sum1);
    }
    printf("\n");
    for(i=0; i<5; i++){
        sum2 = 0;
        for(j=0; j<5; j++){
            sum2 += arr[j][i];

        }
        printf("%d ",sum2);
    }

}
```

Output

```
35 60 85 110 135
75 80 85 90 95
```

# **_String_**

**What is string?**

Group of charachers(Alphabets, numbers, symbols) is called string.

- to specify character(use single quotes 'A')
- to specify string(Use double quotes "Hello")

**_Note:_** In the string last element is '\0'(end of the string)

![String array](https://i.imgur.com/jSFuaCU.jpg[/img])

example: "VIT\0VELLORE" printing this string gives output as VIT

**Implement of String**

we use One dimentional array

syntax:

1. char name_of_the_string[size] = {characters in single quote}
   `char vit[4] = {'V','I','T','\0'}`
2. char name_of_the_string[size] = "STRING"
   `char vit[4] = "VIT"`

## Read String in Runtime

**way 1:** scanf();

ex:
char str[5];
scanf("%s", str);

problem with is you can't real words with spaces

![String null](https://i.imgur.com/o3FkutM.jpg[/img])

**way 2:** gets();
can read lines

syntax:

```c
gets(string name);
```

ex:
char str[50]
gets(str);

![scanf vs gets](https://i.imgur.com/JgOHv0V.jpg[/img])

## Display a string

```c
printf("%s",string variable name);
puts(string variable name);
```

[Gets](string.c)
**case1**

```c
#include <stdio.h>

void main()
{
    char a[20];
    scanf("%s",a);     // try out with exchange
    //gets(a);         // try out with exchange

    puts(a);
}
```

Output

```
hello world
hello
```

**case2**

```c
#include <stdio.h>

void main()
{
    char a[20];
    //scanf("%s",a);     // try out with exchange
    gets(a);             // try out with exchange

    puts(a);
}
```

Output

```
hello world
hello world
```

[puts](string2.c)

```c
#include <stdio.h>

void main()
{
    char str[20] = "Hello World";
    printf("%s \n",str);
    puts(str);

}
```

Output

```
Hello World
Hello World
```

## String handling function

![string.h table](https://i.imgur.com/1KLF6gy.jpg[/img])

1. strlen();

[strlen](strlen_fuc.c)

```c
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "Vit Vellore";
    puts(str);

    // strlen();
    int length = strlen(str);
    printf("The of the given string is:%d \n",length);

}
```

Output

```
Vit Vellore
The of the given string is:11
```

2. strrev();
   [strrev](strrev_fuc.c)

```c
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "Vit Vellore";
    puts(str);

    // strrev();
    printf("The reverse of the string is: %s \n",strrev(str));
    puts(str);


}
```

Output

```
Vit Vellore
The reverse of the string is: erolleV tiV
erolleV tiV
```

3. strcpy();
   [strcpy](strcpy_fuc.c)

```c
#include <stdio.h>
#include <string.h>

void main()
{
    //strcpy()
    //strcpy( destination, source)
    char str[20] = "Vit Vellore";
    puts(str);

    char str2[20] = "Hello world";

    printf("%s \n", strcpy(str, str2));  // print str2
    puts(str);
    puts(str2);

}
```

Output

```
Vit Vellore
Hello world
Hello world
Hello world
```

4. strcmp();
   [strcmp](strcmp_fuc.c)

```c
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20];
    printf("Enter string1: ");
    gets(str);
    puts(str);

    char str2[20];
    printf("Enter string2: ");
    gets(str2);
    puts(str2);

    printf("The compared string :%d \n",strcmp(str,str2));

    // 0 means Equal
    // positive means greater
    // Negative means smaller
    // and the value is difference
}
```

Output

```
case1:
Enter string1: Hello
Hello
Enter string2: Hello
Hello
The compared string :0

case2:
Enter string1: Apple
Apple
Enter string2: America
America
The compared string :1

case3:
Enter string1: America
America
Enter string2: Apple
Apple
The compared string :-1

case4:
Enter string1: Hello1
Hello1
Enter string2: Hello2
Hello2
The compared string :-1

case5:
Enter string1: Apple
Apple
Enter string2: apple
apple
The compared string :-1

```

5. strcat();
   [strcat](strcat_fuc.c)

```c
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "Vit";
    puts(str);
    char str2[20] = "Hello";
    puts(str2);

    printf("The cat string is:%s \n",strcat(str,str2));
    puts(str);
    puts(str2);

}
```

Output

```
Vit
Hello
The cat string is:VitHello
VitHello
Hello
```

6. strlwr(); and strupr();
   [strlwr and strupr](strlwr_strupr.c)

```c
#include <stdio.h>
#include <string.h>

void main()
{
    char str[20] = "vit";
    puts(str);
    char str2[20] = "HELLO";
    puts(str2);

    printf("converted to upper case:%s \n",strupr(str));
    printf("converted to lower case:%s \n",strlwr(str2));
}
```

Output

```
vit
HELLO
converted to upper case:VIT
converted to lower case:hello
```

[Find the length of string without using string.h](str_length.c)

```c
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
```

Output

```
Enter the string: Hello World
11
```

[reversing the string without strrev](Print_rev_str.c)

```c
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
```

Output

```
Enter the string: Hello world
dlrow olleH
```

# **_Function_**

Syntax

```c

identity (argument list)
{
    .......
    .......
    Processing (input)
}
```

To produce the output - return type

example syntax

```c
addition(int x, int y) // function defintion
{
    ......
    ......
    int z = x+y;
    return z;
}


// identity - Name  of the function
// argument list - Takes input

```

**WHAT IS FUNCTION?**

- Block of instruction.
- Having an identity which takes input
- Process the input and produce the output.

## Classification of method

Function will be one of this four classification

1. No arguments & no return values
2. With arguments & no return values
3. With arguments & with return values
4. No arguments & with return values

### 1. No arguments & no return values

```c
//void func(no argument)

void func(void)
{

}

// OR

void func()
{

}
```

**Function call**

```c
func();
```

**Example**

[No Argument No Return]()

```c
#include<stdio.h>

void add();

int main()
{
    add();
    printf("END\n");
    return 0;
}

void add()
{
    int n1, n2, sum;
    printf("enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);
    sum= n1+n2;
    printf("sum of %d and %d is %d \n", n1, n2, sum);
}
```

Output

```
enter the first number: 5
Enter the second number:6
sum of 5 and 6 is 11
END
```

### 2. With arguments & no return values

```c
// void func(pass argument)

void func(int a)
{

}
```

**Function call**

```c
func(value of a);
```

**Example**

[With Argument No Return]()

```c
#include<stdio.h>

void add( int, int);

int main()
{
    int n1, n2;

    printf("enter the first number:");
    scanf("%d", &n1);
    printf("Enter the second number:");
    scanf("%d", &n2);

    add(n1, n2);
    printf("END\n");
    return 0;
}

void add(int x1, int x2)
{
    int sum = x1+x2;
    printf("sum of %d and %d is %d\n", x1, x2, sum);
}
```

Output

```
enter the first number:5
Enter the second number:6
sum of 5 and 6 is 11
END
```

### 3. With arguments & with return values

```c
// int func(pass argument)

int func(int a)
{

    return a;
}
```

**Function call**

```c
func(value of a);   // use printf() to print value
```

**Example**

[With Argument With Return]()

```c
#include<stdio.h>

int add( int, int);

int main()
{
    int x, y, sum;

    printf("enter the first number:");
    scanf("%d", &x);
    printf("Enter the second number:");
    scanf("%d", &y);

    sum = add(x, y);

    printf("sum is %d", sum);
    return 0;
}

int add(int n1, int n2)
{
    int z = n1+n2;
    return z;
}
```

Output

```
enter the first number:45
Enter the second number:50
sum is 95
```

### 4. No arguments & with return values

```c
// int func(no argument)

int func()
{

    return 3;
}
```

**Function call**

```c
func();  // use printf() to print value

```

**Example**

[No Argument With Return]()

```c
#include<stdio.h>

int add();

int main()
{
    int y = add();
    printf("sum is %d\n", y);
    return 0;
}

int add()
{
    int x1, x2, sum;

    printf("enter the first number: ");
    scanf("%d", &x1);
    printf("Enter the second number: ");
    scanf("%d", &x2);

    sum = x1+x2;
    return sum;
}
```

Output

```
enter the first number: 50
Enter the second number: 49
sum is 99
```

## Local and Golbal Variables

**Local Variable:** Declaration of variable inside the function or inside the block

Local variables can be accessed only within the block or function

```c
#include <stdio.h>
void main()
{
    int a,b = 5,c;      // Local variable
    c = a+b;            // a and c contaions garbage
    printf("The value of c is:%d",c);
}
```

```
The value of c is:2983 << random value value of a is garbage
```

**Global Variable:** Declaraton of variable outside the fuction

```c
#include <stdio.h>
void main()
int a,b = 5,c; // Global Variable
{
    c = a+b;            // value of a and c is 0
    printf("The value of c is:%d",c);
}
```

```
The value of c is:5
```

**What is SCOPE?**
Region where the variable is known

[Scope](Scope.c)

```c
#include <stdio.h>
int x = 5;
void fuc1();

void main()
{
    int x = 7;
    printf("The value of x is:%d\n", x); // prints 7 because it intially checks inside the local and go out for global
    fuc1();
}

void fuc1()
{
    printf("The value of x is:%d", x);  // prints 5 because there is no local variable
}
```

```
The value of x is:7
The value of x is:5
```

## Actual and Formal Parameters

**Actual Parameter:** Parameter passed to the function
**Formal Parameter:** Parameter recived by a function

```
int add(int a, int b)   // a,b Formal parameter
{
    return(a+b);
}

void main()
{
    int x = 1, y = 2;
    add(x,y);          // x,y are actual parameters
}
```

## Call by Value and Reference

[Call by Value](call_by_value.c)

example:

```c
#include <stdio.h>

void swap(int , int);

void main()
{
    int x=5, y=10;

    printf("Before swapping: %d %d\n", x, y);
    swap(x,y);
    printf("after swapping:%d %d\n", x, y);

}
void swap(int a, int b)
{
    int temp = a;
    a=b;
    b= temp;
    printf( "After swap:%d %d\n", a, b);
}
```

```
Before swapping: 5 10
After swap:10 5
after swapping:5 10
```

![call by value](https://i.imgur.com/cfWfxx4.jpg[/img])

[Call by Reference](call_by_reference.c)

example:

```c
#include <stdio.h>

void swap(int *, int *);

void main()
{
    int x=5, y=10;

    printf("Before swapping: %d %d\n", x, y);
    swap(&x,&y);
    printf("after swapping:%d %d\n", x, y);

}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf( "After swap:%d %d\n", *a, *b);
}
```

```
Before swapping: 5 10
After swap:10 5
after swapping:10 5
```

![call by reference](https://i.imgur.com/sNhKCkY.jpg[/img])

# **Practice problem**

[Calculate the factorial of a given number using iterative function. Implement for the following the cases:]()
1)NO ARGUMENTS AND NO RETURN
2)WITH ARGUMENTS AND NO RETURN
3)WITH ARGUMENTS WITH RETURN
4)WITHOUT ARGUMENTS AND WITH RETURN

**For the following program what is the output?**

For the function fun, if you pass the value (435), what does the function return?

[case 1:](func_out.c)

```c
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
```

Output

```
9
```

[Case2:](func_out2.c)

```c
# include <stdio.h>

int fun(int num)
{
    int count =0;
    while (num){
        count ++;
        num>>=2;
    }
    return (count);
}

void main()
{
    printf("%d",fun(435));
}
```

Output

```
5
```

# Write How it works above

[Given two matrix and you were asked to perform the multiplication operation and generate the resultant matrix.]()

![matrix multiplication](https://i.imgur.com/1fYFdSa.jpg[/img])

```c
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

```

Output

```
Enter the no of rows and columns:2
2
enter (1, 1)1
enter (1, 2)1
enter (2, 1)1
enter (2, 2)1
Enter the no of rows and columns:2
2
enter (1, 1)1
enter (1, 2)1
enter (2, 1)1
enter (2, 2)1
2       2
2       2
```

## Recursion function

**What is recursion?**

Recursion is a process in which function calls itself.

example syntax

```c
int fun()
{
    fun()
}
```

**Recursive structure example**

```c
int fun()
{
    if {             // to specify the base condition

    } else{          // to specify the recursive function

    }
}
```

Base condition -(does not require to call the same function again)

[Recursion example 1](recursion_example1.c)

```c
#include <stdio.h>

int fun(int n)
{
    if(n==1)
        return 1;
    else
        return 1 + fun(n-1);
}

int main()
{
    int n = 3;
    printf("%d",fun(n));
    return 0;
}
```

Output

```
3
```

![explain rec_fun](https://i.imgur.com/kjXMqQC.jpg[/img])

[recursion factorial](rec_factorial.c)

```c
#include <stdio.h>

int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n = 5;
    printf("%d",fact(n));
    return 0;
}
```

Output

```
120
```

![explain rec_factorial](https://i.imgur.com/DaUKSe4.jpg[/img])

[Write the recursion function for the finding the Fibonacci of any number.](rec_Fibonacci.c)

```c
#include <stdio.h>

int fibo(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else {
        return (fibo(n-1)+fibo(n-2));
    }
}

int main()
{
    int i, n = 4;
    for(i = 0; i<n; i++ ){
        printf("%d\n",fibo(i));
    }
    return 0;
}
```

Output

```
0
1
1
2
```
