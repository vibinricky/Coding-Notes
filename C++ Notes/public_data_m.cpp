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