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