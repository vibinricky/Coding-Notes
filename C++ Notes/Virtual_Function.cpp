#include <iostream>
using namespace std;

class person
{
public:
    virtual void give()   // with virutal and without
    {
        cout << "Bun"<<endl;
    }
};

class boy : public person
{
public:
    void give()
    {
        cout << "Brown Bun"<<endl;
    }
};

class girl : public person
{
public:
    void give()
    {
        cout << "Pink Bun"<<endl;
    }
};

int main()
{
    person *ptr = NULL;

    ptr = new boy();
    ptr->give();

    ptr = new girl();
    ptr->give();

    return 0;
}
