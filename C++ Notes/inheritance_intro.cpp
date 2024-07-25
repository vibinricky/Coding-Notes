#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    void area()
    {
        cout<< length * breadth<<endl;
    }
};

class cuboid: public rectangle
{
public:
    int height;

    void volume()
    {
        cout<< length * breadth * height<<endl;
    }
};

int main()
{
    cuboid obj1;
    obj1.length = 10; obj1.breadth = 20; obj1.height = 30;

    obj1.area();
    obj1.volume();
    return 0;
}