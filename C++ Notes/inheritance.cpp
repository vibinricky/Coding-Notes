#include <iostream>
using namespace std;

// Base class
class Shape 
{
    protected:
    int width;
    int height;
    int radius;

    public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
    void setRadius(int r)
    {
        radius = r;
    }
};

// Derived  class

class Rect: public Shape 
{
    public: 
    int getArea()
    {
        return(width * height);
    }
};

// 2nd Deived class

class circle: public Shape
{
    public:
    int getArea2()
    {
        return (3.14 * radius * radius);
    }
};

int main()
{
    Rect r1;

    r1.setWidth(5);
    r1.setHeight(7);

    // print 
    cout << "Total area: "<<r1.getArea()<< endl;

    circle c1;

    c1.setRadius(10);

    // print 
    cout << "Total area: "<<c1.getArea2()<< endl;
    return 0;
}