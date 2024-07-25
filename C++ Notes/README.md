# **`cout` and `cin`**

Pre-defined objects -controlled by stream
Stream –flow of characters
Two types of stream –istream and ostream

![iostream](https://i.imgur.com/13rJ8hl.jpg[/img])

```c++
#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "sum of x and y: " << x+y;
    return 0;
}
```

Output

```
Enter the value of x: 10
Enter the value of y: 20
sum of x and y: 30
```

**Class**

![c vs c++](https://i.imgur.com/OXpOMEn.jpg[/img])

C++ is introduced for security purpose, if C++ structure is public, then it is accessible outside the structure

Therefore class is introduced , provides security (data hiding)

Class is user defined data type contains data member and member function.

**Object**

Any real time entity (that exits in the real world)

In OOPS program is divided as object and class

**What is relation between class and object?**

Class is a blue print of object

To have a object we must have a class (class is a original copy)

**ex:** CERTIFICATE –original copy (class)
create any number xerox(objects)

**ex:** (people as an object)

![property and action](https://i.imgur.com/hPfO8XI.jpg[/img])

**Properties** – data member
**Actions** – member function

If we design a class (if it has object only then memory gets created)

Class is logical copy
Object is a physical copy

Syxtax:

```c
class class name
{
    data member1;
    data member 2;

    member function 1
    member function 2
};
```

# **Class and Object**

## Class

User defined data type, holds data member and member function
Class is a blueprint of object
Class is template to create an object
Class is a model for creating an object

Data members are accessed through the member function of class

**Why we need Member function**

1)To pass the value to the data member
2)To access the value of data member

```c++
class VIT
{
    int a;
    public:
    void show()
    {
        a = 10;
        cout <<"The value of a: "<<a;
    }
};
```

## Object

Instance of class
Xerox copy of a class
Variable type of class

Syntax:

```c++
<class name> <object name>;
VIT a;
```

[Member function is declared and definition is inside the class](mf_in_class.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x,y;
    public:
    void add()
    {
        x = 1;
        y = 2;
        cout << "sum of x and y :"<< (x+y);
    }
};

int main()
{
    vit a;
    a.add();
    return 0;
}
```

Output

```
sum of x and y :3
```

[Member function Outside the class](mf_out_class.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    void add();
};

void vit::add()
{
    x = 4;
    y = 2;
    cout <<"sum of two numbers: "<<(x+y);
}

int main()
{
    vit a;
    a.add();
    return 0;
}
```

Output

```
sum of two numbers: 6
```

[example sum of 2 num mf out class](sum_using_class.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y, z;
    public:
    void add();
};

void vit::add()
{
    cout << "Enter first num: ";
    cin >> x;
    cout << "Enter second num: ";
    cin >> y;
    z = x+y;
    cout <<"The sum is: "<<z;
}

int main()
{
    vit a;
    a.add();
    return 0;
}
```

Output

```
Enter first num: 10
Enter second num: 20
The sum is: 30
```

[example sum of 2 num mf inside class](sum_using_class2.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y, z;
    public:
    void add()
    {
        cout << "Enter first num: ";
        cin >> x;
        cout << "Enter second num: ";
        cin >> y;
        z = x+y;
        cout <<"The sum is: "<<z;
    }
};


int main()
{
    vit a;
    a.add();
    return 0;
}
```

Output

```
Enter first num: 10
Enter second num: 20
The sum is: 30
```

## Access Specifier

### public

[compute the area of the circle (public)](public_data_m.cpp)

```c++
#include <iostream>
using namespace std;

class circle
{
    public:
    double radius;
    double area()
    {
        return 3.14*radius*radius;
    }
};

int main()
{
    circle a;
    cout << "Enter the radius: ";
    cin >> a.radius;                           // important
    cout << "The radius entered: "<< a.radius <<endl;
    cout << "The area is: "<< a.area();
    return 0;
}
```

Output

```
Enter the radius: 10
The radius entered: 10
The area is: 314
```

### Private

[compute the area of the circle (private)](private_data_m.cpp)

```c++
#include <iostream>
using namespace std;

class circle
{
    private:
    double radius;
    public:
    void area()
    {
        double ans;
        cout << "Enter the radius: ";
        cin >> radius;
        cout << "The radius entered: "<< radius <<endl;
        ans =  3.14*radius*radius;
        cout << "The area is: "<< ans;
    }
};

int main()
{
    circle a;
    a.area();
    return 0;
}
```

Output

```
Enter the radius: 10
The radius entered: 10
The area is: 314
```

### Protected

[compute the area of the circle (protected)]()

```c++
#include <iostream>
using namespace std;

class circle
{
    protected:
    double radius;
};
class circle1: public circle
{
    public:
    void a()
    {
        double b;
        b = radius;
        cout << "Enter the radius: ";
        cin >> b;
        double c;
        c =  3.14*b*b;
        cout << "area is: "<<c;
    }

};

int main()
{
    circle1 a;
    a.a();
    return 0;
}
```

Output

```
Enter the radius: 10
area is: 314
```

# **Constructor**

Special member function to initialize instance variables of class.
Data members are called as instance variable (or class variable)

How to implement (rules)

1. Class name and constructor name should be same
2. No return type
3. Implicit call –constructor is automatically called when the object is created.

Syntax:

```c++
Class_name ()
{
----
----
}
```

Where to write:
With in the class and in public

[example]()

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    vit() // constructor
    {
        x = 1;
        y = 2;
    }
    void add() // member function
    {
        cout<<"The sum of two number: "<< (x+y);
    }
};

int main()
{
    vit obj;
    obj.add();
    return 0;
}
```

Output

```
The sum of two number: 3
```

## Type of constructor

### Default

Constructor without arguments

[default const](default.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    vit()
    {
        cout << "Enter the value of x and y"<< endl;
        cin >> x >> y;
    }
    void add()
    {
        cout << "The sum of two numbers is:" << (x+y)<< endl;
    }
};

int main()
{
    vit a;
    a.add();
    vit b;
    b.add();
    return 0;
}
```

Output

```
Enter the value of x and y
1
2
The sum of two numbers is:3
Enter the value of x and y
23
34
The sum of two numbers is:57
```

### Parameterized

[parameterized const](para_const.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    vit(int a, int b)
    {
        x = a;
        y = b;
    }
    void add()
    {
        cout << "The sum of two numbers is:" << (x+y)<< endl;
    }
};

int main()
{
    vit n(1,4);
    n.add();

    vit m(4,5);
    m.add();
    return 0;
}
```

Output

```
The sum of two numbers is:5
The sum of two numbers is:9
```

### copy

[copy const](copy_const.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x;
    public:
    vit()
    {
        x = 10;
    }
    vit(vit &obj)
    {
        x = obj.x;
    }
    void display()
    {
        cout << "The value of x: "<<x<<endl;
    }
};

int main()
{
    vit obj1;
    vit obj2 = obj1;
    obj1.display();
    obj2.display();
    vit obj3(obj1);
    obj3.display();
    return 0;
}
```

Output

```
The value of x: 10
The value of x: 10
The value of x: 10
```

### Overload

parameterized and default constructor are combined to create overload constructor

[overload_const](overload_const.cpp)

```c++
#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    int height;
public:
//-----------------------------------
    person()          // default constructor
    {
        name = "NULL";
        age = 0;
        height = 0;
    }
//-----------------------------------
    person(string x, int y, int z)
    {
        name = x;     // parameterized constructor
        age = y;
        height = z;
    }
//-----------------------------------
    person(person &obj)  // copy constructor
    {
        name = obj.name;
        age = obj.age;
        height = obj.height;
    }
//-----------------------------------

    void print()
    {
        cout << name<<endl;
        cout << age<<endl;
        cout << height<<endl;
    }
};

int main()
{
    person person1;
    person person2("Josh", 21, 170);
    person person3(person2);

    person1.print();
    person2.print();
    person3.print();

}
```

Output

```
NULL
0
0
Josh
21
170
Josh
21
170
```

[overload_const2](overload_const2.cpp)

```c++
#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    int height;
public:
//-----------------------------------
    person()          // default constructor
    {
        name = "NULL";
        age = 0;
        height = 0;
    }
//-----------------------------------
    person(string x, int y, int z)
    {
        name = x;     // parameterized constructor
        age = y;
        height = z;
    }
//-----------------------------------
    person(person &obj)  // copy constructor
    {
        name = obj.name;
        age = obj.age;
        height = obj.height;
    }
//-----------------------------------

    void print()
    {
        cout << name<<endl;
        cout << age<<endl;
        cout << height<<endl;
    }
};

int main()
{
    person person1;
    person person2("Josh", 21, 170);
    person person3(person2);

    person1.print();
    person2.print();
    person3.print();

}
```

Output

```
NULL
0
0
Josh
21
170
Josh
21
170
```

# **Operator Overloading**

[operator_overloading with binary operator](operator_overloading.cpp)

```c++
#include <iostream>
using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout << real << " + " << imag << "i"<<endl;
    }

    complex operator+ (complex part2)
    {
        complex temp;
        temp.real = real + part2.real;
        temp.imag = imag + part2.imag;
        return temp;
    }

};

int main()
{
    complex c1(3,4);
    complex c2(2,7);
    complex c3;
    c3 = c1+c2; // c3 =  c1.add(c2)

    c1.print();
    c2.print();
    c3.print();

    complex c4;

    c4 = c1+c2+c3; // c4 = c1.(add(c2.add(c3)))

    c4.print();
}
```

Output

```
3 + 4i
2 + 7i
5 + 11i
10 + 22i
```

[Operator overloading with unary operator overloading]

# **Destructor**

Constructor is used to – initialize the object
Destructor – to destroy the object.

Is a special member function used to destroy the object as soon as scope of object ends

Rules of Destructor

Destructor name should be same as class name, but start with ~ (tilde symbol)
It should be public
It doesnt contains arguments
No return type
Implicit calling.(called automatically when the object goes out of the scope)

when destructor is called in program: just before the program termination

syntax:

```c++
~class name
{
    --------
    --------
}
```

**why to use:** memory allocated for the object should not be wasted after the execution of code, the memory created for the object should not go waste.

[example](destructor.cpp)

```c++
#include <iostream>
using namespace std;

class Box
{
    int length, width;
    public:

    Box(int x, int y)
    {
        length = x;
        width = y;
    }

    void Print()
    {
        cout << "Lenght: "<< length<< endl;
        cout << "Width: "<< width << endl;
    }

    ~Box()
    {
        cout << "Object deleted"<<endl;
    }
};

int main()
{
    if(1){
        Box box1(10, 20);
        cout << "Box1 Details"<< endl;
        box1.Print();
    }                                  // Scope ended here

    cout << "Test Case";
    return 0;
}
```

Output

```
Box1 Details
Lenght: 10
Width: 20
Object deleted
Test Case
```

## Instance and Static members

**Instance**

![inst_static_members](https://i.imgur.com/6e27QPO.jpg[/img])

**Static**

![static](https://i.imgur.com/UO3wXP6.jpg[/img])

**Instance vs Static**

![Inst vs static](https://i.imgur.com/SAuBYNO.jpg[/img])

[Create instance and static variable inside the class,the name of the instance variable is n,the name of static variable is count. Create two objects to provide the value to the instance variable,count should be increased every time when the value is passed to the instance variable.Initialize the count=5.]()

```c++
#include <iostream>
using namespace std;

class vit
{
    int n;
    static int count;
    public:
    void fuc(int a)
    {
        n = a;
        count += 1;
    }
    void display()
    {
        cout<<"count = "<<count<<endl;
    }
};

int vit::count;
int main()
{

    vit a,b;
    a.fuc(5);
    a.display();
    b.fuc(4);
    a.display();
    for(int i = 0; i<3; i++){
        a.fuc(1);
    }
    a.display();

    return 0;
}
```

Output

```
count = 1
count = 2
count = 5
```

# **Special Functions**

## Friend Function

- Non member of a class
- Used to access data member(private) of a class

The non member function cannot access the private data memeber of a class
Outside the class if you want access data member(private) of a class.
Use FRIEND FUNCTION

draw back example of outside function

```c++
class vit
{
    int x,y; // data member (default it private)
    public:
    void add()// member function
    {
        --------
        --------    // it can acces x and y
    }
};

void display()    // Non- member function
{
     --------
     --------    // it cant access data member because it private
}
```

**How to implement Friend function**

syntax

```c++
class vit
{
    int x,y;
    public:
    void add()
    {
        ----
        ----
    }
    friend void display(argument);
};
```

- Friend function is non-MF, treat as normal function
- How to call friend function –without object (like calling the normal function)

[friend function example](friend.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x,y;
    public:
    vit()
    {
        x = 1;
        y = 2;
    }
    friend void display(vit &obj);
};

void display(vit &obj)
{
    cout<<"The value of x: "<<obj.x<<endl;
    cout<<"The value of y: "<<obj.y<<endl;
}
int main()
{
    vit obj;
    display(obj);      // obj.display() then it is member function but we did do
}                      // we just call like normal function

```

Output

```
The value of x: 1
The value of y: 2
```

## Inline Member function

![normal vs inline function](https://i.imgur.com/v60Uhv3.jpg[/img])

**Implementing a inline function**

- Single instruction in function definition
- No looping statement, switch, goto.
- No recursive function

Syntax:

```c++
inline return_type func_name(arg)
{
    single instruction
}
```

[Inline example](inline.cpp)

```c++
#include <iostream>
using namespace std;

inline void func(int, int);
int main()
{
    func(2,3);
    return 0;
}
inline void func(int a, int b)
{
    cout << "The sum of two number is: "<< (a+b);
}
```

Output

```
The sum of two number is: 5
```

[inline example 2](inline2.cpp)

```c++
#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a+b);
}

int main()
{
    int a = 1, b = 2;
    cout << "sum of a and b: "<< add(a,b);
    return 0;
}
```

Output

```
sum of a and b: 3
```

[WRITE THE STATEMENT IN THE FUNCTION DEIFNITION IN THE SINGLE LINE TO INTILAIZE THE VALUE FOR TWO DATA MEMBER AND DISPLAY THE VALUE OF TWO DATA MEMBER ON THE CONSOLE WINDOW. IMPLEMENT USING CLASS AND INLINE FUNCTION.](class_inline.cpp)

```c++
#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    void read();
    void display();
};

inline void vit::read()
{
    x = 1;
    y = 3;
}
inline void vit::display()
{
    cout << "value of x: "<< x << " y: "<< y ;
}

int main()
{
    vit obj;
    obj.read();
    obj.display();
    return 0;
}
```

Output

```
value of x: 1 y: 3
```

[Write a C++ program to swap two numbers using pointers.Implement using function(write function declaration,function call, function definition).](swap.cpp)

```c++
#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int x = 1, y = 2;
    cout << "Before swaping  x = "<< x << " and y = "<< y<< endl;
    swap(&x, &y);
    cout << "After swaping  x = "<< x << " and y = "<< y<< endl;
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
```

Output

```
Before swaping  x = 1 and y = 2
After swaping  x = 2 and y = 1
```

## Function Overloading

# **Inheritance**

Inheritance allows us to define a class in terms of(from another) another class.

Provides REUSABILITTY and MAINTAINABLITY of code

The class from which the new class inherits properties (data members and memeber function) is called **BASE CLASS** and the new created class is called **DERIVED CLASS**

syntax:

```c++
class derived_class: acess_specifier base_class
{
    // data member and member function of derived class
}
```

[inheritance_intro](inheritance_intro.cpp)

```c++
#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    void area()
    {
        cout<< length * breadth<<endl;
    }
};

class cuboid: public rectangle
{
public:
    int height;

    void volume()
    {
        cout<< length * breadth * height<<endl;
    }
};

int main()
{
    cuboid obj1;
    obj1.length = 10; obj1.breadth = 20; obj1.height = 30;

    obj1.area();
    obj1.volume();
    return 0;
}
```

Output

```
200
6000
```

## Inheritance and constructor

[part1](inheritance_const1.cpp)

```c++
#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default const of base class"<<endl;
    }

    base(int b)
    {
        cout << "Paramaterized const of base class"<<endl;
    }
};

class derived : public base
{
    //empty
};

int main()
{
    derived d1;   // calls base class default constructor

    //derived d2(9);

    // get error
    // because derived class cant call base class
    // paramaterized constructor

    return 0;
}
```

Output

```
Default const of base class
```

[part2](inheritance_const2.cpp)

```c++
#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default const of base class"<<endl;
    }

    base(int b)
    {
        cout << "Paramaterized const of base class"<<endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "Default const of Derived class"<<endl;
    }

    derived(int d)
    {
        cout << "Paramaterized const of Derived class"<<endl;
    }
};

int main()
{
    derived d1; // calls base class default const and derived class default const

    cout <<endl;

    derived d2(9);  // calls base class default and paramaterized const of derived class
    return 0;
}
```

Output

```
Default const of base class
Default const of Derived class

Default const of base class
Paramaterized const of Derived class
```

[part3](inheritance_const3.cpp)

```c++
#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default const of base class"<<endl;
    }

    base(int b)
    {
        cout << "Paramaterized const of base class "<< b <<endl;
    }
};

class derived : public base
{
public:
    derived() : base() // we declare base class or leave it because it is default
    {
        cout << "Default const of Derived class"<<endl;
    }

    derived(int d) : base(d) // to call paramaterized const of base class
    {
        cout << "Paramaterized const of Derived class "<< d <<endl;
    }
};

int main()
{
    derived d1; // calls base class default const and derived class default const

    cout <<endl;

    derived d2(7);  // calls base class default and paramaterized const of derived class
    return 0;
}
```

Output

```
Default const of base class
Default const of Derived class

Paramaterized const of base class 7
Paramaterized const of Derived class 7
```

## Types of Inheritance

![inheritance](https://i.imgur.com/be2DIFL.jpg[/img])

![Types of Inheritance](https://i.imgur.com/0FaeS9A.png[/img])

```c++
class base
{
    public:
    int x;
    protected:
    int y;
    private:
    int z;
};
class publicDerived: public base
{
    // x is public
    // y is protected
    // z is not accessible from publicDerived
};
class protectedDerived: protected base
{
    // x is protected
    // y is protected
    // z is not accessible from protectedDerived
};
class privateDerived: private base
{
    // x is private
    // y is private
    // z is not accessible from privateDerived
};
```

![acessibility of Inheritance](https://i.imgur.com/o0Pp9GY.jpg[/img])

[example](inheritance.cpp)

```c++
#include <iostream>
using namespace std;

// Base class
class Shape
{
    protected:
    int width;
    int height;
    int radius;

    public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setRadius(int r)
    {
        radius = r;
    }
};

// Derived  class

class Rect: public Shape
{
    public:
    int getArea()
    {
        return(width * height);
    }
};

// 2nd Deived class

class circle: public Shape
{
    public:
    int getArea2()
    {
        return (3.14 * radius * radius);
    }
};

int main()
{
    Rect r1;

    r1.setWidth(5);
    r1.setHeight(7);

    // print
    cout << "Total area: "<<r1.getArea()<< endl;

    circle c1;

    c1.setRadius(10);

    // print
    cout << "Total area: "<<c1.getArea2()<< endl;
    return 0;
}
```

Output

```
Total area: 35
Total area: 314
```

## Function Overriding

- If **derived class** defines **same function** as defined in its **base class**, it is known as **function overriding** in c++

- If you create an object of the derived class and call the member function which exists in both classes(base and derived),the member function of the derived class is invoked and the function of the base class is ignored.

- It enables you to provide specific implementation of the function which is already provided by its base class.

![Function Overriding](https://i.imgur.com/AoI4mhe.jpg[/img])

![Function Overriding 2](https://i.imgur.com/cvj08Oz.jpg[/img])

[overriding member function](overriding_mfunc.cpp)

```c++
#include <iostream>
using namespace std;

class base
{
public:
    void msg()
    {
        cout << "base class msg"<<endl;
    }
};

class derived: public base
{
    public:
    void msg()
    {
        cout << "derived class msg"<<endl;
        base::msg();         // calling base class msg()
    }
};

int main()
{

    base obj;
    obj.msg();

    cout <<endl;
    derived obj1;
    obj1.msg();
    return 0;
}
```

[Example](function_overriding.cpp)

```c++
#include <iostream>
using namespace std;

class animal
{
    public:
    void makesound()
    {
        cout << "animal sound"<<endl;
    }
};

class dog: public animal
{
    public:
    // void makesound()
    // {
    //     cout << "dogs Bark"<<endl;
    // }
};
class Cat: public animal
{
    public:
    void makesound()
    {
        cout << "cat meow"<<endl;
    }
};
int main()
{
    animal a1;
    a1.makesound();
    dog d1;
    d1.makesound();
    Cat c1;
    c1.makesound();
    return 0;
}

```

Output

```
case1
animal sound
dogs Bark
cat meow

case2
animal sound
animal sound
cat meow
```

# **Polymorphism**

## Runtime Polymorphism

**_concept: Base class pointer and virtual class object_**

[](ptr_InClass.cpp)

```c++
#include <iostream>
using namespace std;

class basicCar
{
    public:
    void body(){cout << "body"<<endl;}
    void door(){cout << "door"<<endl;}
    void window(){cout << "window"<<endl;}
    void tyres(){cout << "tyres"<<endl;}
};

class advCar: public basicCar
{
    public:
    void ABS(){cout << "ABS"<<endl;}
    void PS(){cout << "PS"<<endl;}
    void EngineV8(){cout << "EngineV8"<<endl;}
    void AT(){cout << "AT"<<endl;}
};

int main()
{
    basicCar *ptr;
    ptr = new advCar();

    ptr->body();         // not getting error
    ptr->door();
    ptr->tyres();
    ptr->window();

    // ptr->ABS();       // you cant acess these
    // ptr->PS();
    // ptr->EngineV8();
    // ptr->AT();

    return 0;
}
```

Output

```
body
door
tyres
window
```

### Virtual Function

[Virtual Function](Virtual_Function.cpp)

```c++
#include <iostream>
using namespace std;

class person
{
public:
    virtual void give()   // with virutal and without
    {
        cout << "Bun"<<endl;
    }
};

class boy : public person
{
public:
    void give()
    {
        cout << "Brown Bun"<<endl;
    }
};

class girl : public person
{
public:
    void give()
    {
        cout << "Pink Bun"<<endl;
    }
};

int main()
{
    person *ptr = NULL;

    ptr = new boy();
    ptr->give();

    ptr = new girl();
    ptr->give();

    return 0;
}
```

Output

```
case1: without virtual
Bun
Bun

case2: with virtual
Brown Bun
Pink Bun
```

#### Abstract Function

[Abstract Function](Abstract_func.cpp)

```c++
#include <iostream>
using namespace std;

class person
{
public:
    virtual void give() = 0;    // Pure Virtual Function
};

class boy : public person
{
public:
    void give()
    {
        cout << "Brown Bun"<<endl;
    }
};

class girl : public person
{
public:
    void give()
    {
        cout << "Pink Bun"<<endl;
    }
};

int main()
{
    person *ptr = NULL;

    ptr = new boy();
    ptr->give();

    ptr = new girl();
    ptr->give();

    return 0;
}

```

Output

```
Brown Bun
Pink Bun
```

## Virtual Destructor

Only half class destruction problem

[virtual Destructor](virtual_destructor.cpp)

```c++
#include <iostream>
using namespace std;

class base
{
public:
    virtual ~base()  // with virtual and without
    {
        cout << "Base class Destroyed"<<endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "Derived Class Destroyed"<<endl;
    }
};

int main()
{
    base *b1 = new derived;

    delete b1;
}
```

Output

```
Case1: without virtual
Base class Destroyed

Casse2: with virtual
Derived Class Destroyed
Base class Destroyed
```

## Friend Function

[Friend Function](Friend_function.cpp)

```c++
#include <iostream>
using namespace std;

class Alpha
{
private:
    int a1;
public:
    Alpha(int arg = 0)
    {
        a1 = arg;
    }
    friend void Fun();
};

class Beta
{
private:
    int b1;
public:
    Beta(int arg = 0)
    {
        b1 = arg;
    }
    friend void Fun();
};

void Fun()
{
    Alpha alpha_obj(8);
    Beta beta_obj(2);

    int x = alpha_obj.a1 + beta_obj.b1;

    cout << "sum: "<< x;
}

int main()
{
    Fun();
}
```

Output

```
sum: 10
```

## Friend Class

[Friend Class](Friend_Class.cpp)

```c++
#include <iostream>
using namespace std;

class Alpha
{
private:
    int a1;
public:
    Alpha(int arg = 0)
    {
        a1 = arg;
    }
    friend class Beta;
};

class Beta
{
private:
    int b1;
public:
    Beta(int arg = 0)
    {
        b1 = arg;
    }

    int Sum()
    {
        Alpha alpha_obj(3);

        int sum = alpha_obj.a1 + b1;

        return sum;
    }
};

int main()
{
    Beta beta_obj(9);

    cout << "Sum: "<< beta_obj.Sum();
}
```

Output

```
Sum: 12
```

## Operator Overloading + Friend Concept

[example](Operator_FriendOverLoading.cpp)

```c++
#include <iostream>
using namespace std;

class person
{
private:
    int weight;
public:
    person(int w)
    {
        weight = w;
    }

    friend bool operator> (person x, person y);
    friend bool operator< (person x, person y);
};

bool operator> (person x, person y)
{
    return x.weight > y.weight;
}

bool operator< (person x, person y)
{
    return x.weight < y.weight;
}

int main()
{
    person p1(50), p2(75);

    if (p1 > p2)
    {
        cout << " person 1 is heavy";
    }
    if (p1 < p2)
    {
        cout << "Person 2 is heavy";
    }
    return 0;
}
```

Output

```
Person 2 is heavy
```

## Static

### Static Member

[Static member](static_Member.cpp)

```c++
#include <iostream>
using namespace std;

class Alpha
{
    private:
    int a;
    int b;

    public:
    Alpha()
    {
        a = 5;
        b = 5;
        stat++;
    }
    static int stat;
};
int Alpha::stat = 0;

int main()
{
    Alpha a1;  // stat = 1 is incremented
    Alpha a2;  // stat = 2 is incremented

    cout<< a1.stat<<endl;
    cout<< a2.stat<<endl;
    cout<< Alpha::stat;
    return 0;
}
```

Output

```
2
2
2
```

### Static Member Function

[static member function](static_mFunction.cpp)

```c++
#include <iostream>
using namespace std;

class Alpha
{
    private:
    int a;
    int b;

    public:
    Alpha()
    {
        a = 5;
        b = 5;
    }
    static int stat;
    static int getstat()
    {
        stat++;
        return stat;
    }
};
int Alpha::stat = 0;

int main()
{
    cout<< Alpha::getstat()<<endl;
    Alpha a1;
    Alpha a2;
    cout<<a1.getstat()<<endl;
    cout<<a2.getstat();
    return 0;
}
```

Output

```
1
2
3
```

## Compile time Polymorphism

# **Practice Questions**

1. Write a program showing ATM functionalities using OOP's
   1. Check Balance
   2. Cash With Draw
   3. User Details
   4. Update Mobile No.

Answer:

[]
