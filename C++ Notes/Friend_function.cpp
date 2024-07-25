#include <iostream>
using namespace std;

class Alpha
{
private:
    int a1;
public:
    Alpha(int arg = 0)
    {
        a1 = arg;
    }
    friend void Fun();
};

class Beta
{
private:
    int b1;
public:
    Beta(int arg = 0)
    {
        b1 = arg;
    }
    friend void Fun();
};

void Fun()
{
    Alpha alpha_obj(8);
    Beta beta_obj(2);

    int x = alpha_obj.a1 + beta_obj.b1;

    cout << "sum: "<< x;
}

int main()
{
    Fun();
}