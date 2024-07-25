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
