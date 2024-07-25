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