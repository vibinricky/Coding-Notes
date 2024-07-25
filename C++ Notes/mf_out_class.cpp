#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    void add();
};

void vit::add()
{
    x = 4;
    y = 2;
    cout <<"sum of two numbers: "<<(x+y);
}

int main()
{
    vit a;
    a.add();
    return 0;
}