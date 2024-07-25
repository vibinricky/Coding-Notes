#include <iostream>
using namespace std;

class vit
{
    int x, y, z;
    public:
    void add();
};

void vit::add()
{
    cout << "Enter first num: ";
    cin >> x;
    cout << "Enter second num: ";
    cin >> y;
    z = x+y;
    cout <<"The sum is: "<<z;
}

int main()
{
    vit a;
    a.add();
    return 0;
}