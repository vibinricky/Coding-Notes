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

