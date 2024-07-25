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