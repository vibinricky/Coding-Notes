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