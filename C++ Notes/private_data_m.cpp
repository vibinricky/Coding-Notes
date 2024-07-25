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