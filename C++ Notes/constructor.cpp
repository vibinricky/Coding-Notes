#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    vit() // constructor
    {
        x = 1;
        y = 2;
    }
    void add() // member function
    {
        cout<<"The sum of two number: "<< (x+y);
    }
};

int main()
{
    vit obj;
    obj.add();
    return 0;
}