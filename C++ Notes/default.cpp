#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    vit()
    {
        cout << "Enter the value of x and y"<< endl;
        cin >> x >> y;
    }
    void add()
    {
        cout << "The sum of two numbers is:" << (x+y)<< endl;
    }
};

int main()
{
    vit a;
    a.add();
    vit b;
    b.add();
    return 0;
}