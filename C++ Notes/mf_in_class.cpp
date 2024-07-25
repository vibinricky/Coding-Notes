#include <iostream>
using namespace std;

class vit
{
    int x,y;
    public:
    void add()
    {
        x = 1;
        y = 2;
        cout << "sum of x and y :"<< (x+y);
    }
};

int main()
{
    vit a;
    a.add();
    return 0;
}