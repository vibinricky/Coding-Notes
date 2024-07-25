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