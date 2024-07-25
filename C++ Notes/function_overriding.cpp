#include <iostream>
using namespace std;

class animal
{
    public:
    void makesound()
    {
        cout << "animal sound"<<endl;
    }
};

class dog: public animal 
{
    public:
    // void makesound()
    // {
    //     cout << "dogs Bark"<<endl;
    // }
};
class Cat: public animal 
{
    public:
    void makesound()
    {
        cout << "cat meow"<<endl;
    }
};
int main()
{
    animal a1;
    a1.makesound();
    dog d1;
    d1.makesound();
    Cat c1;
    c1.makesound();
    return 0;
}
