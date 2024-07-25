#include <iostream>
using namespace std;

class Box
{
    int length, width;
    public:

    Box(int x, int y)
    {
        length = x;
        width = y;
    }

    void Print()
    {
        cout << "Lenght: "<< length<< endl;
        cout << "Width: "<< width << endl;
    }

    ~Box()
    {
        cout << "Object deleted"<<endl;
    }
};

int main()
{
    if(1){
        Box box1(10, 20);
        cout << "Box1 Details"<< endl;
        box1.Print();
    }                                  // Scope ended here 

    cout << "Test Case";
    return 0;
}