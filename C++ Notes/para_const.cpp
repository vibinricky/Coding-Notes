#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    vit(int a, int b)
    {
        x = a;
        y = b;
    }
    void add()
    {
        cout << "The sum of two numbers is:" << (x+y)<< endl;
    }
};

int main()
{
    vit n(1,4);
    n.add();

    vit m(4,5);
    m.add();
    return 0;
}