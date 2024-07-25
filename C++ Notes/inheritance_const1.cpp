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