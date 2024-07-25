#include <iostream>
using namespace std;

class vit
{
    int x, y;
    public:
    void read();
    void display();
};

inline void vit::read()
{
    x = 1;
    y = 3;
}
inline void vit::display()
{
    cout << "value of x: "<< x << " y: "<< y ;
}

int main()
{
    vit obj;
    obj.read();
    obj.display();
    return 0;
}