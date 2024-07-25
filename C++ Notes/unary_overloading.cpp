#include <iostream>
using namespace std;

class person
{
private: 
    int weight;
public: 
    person (int w = 0)
    {
        weight = w;
    }

    void show()
    {
        cout << "Weight: "<<weight<<endl;
    }

    void operator++ ()   // pre-increment
    {
        ++weight;
    }

    void operator++ (int)  // post-increment
    {
        weight++;
    }
};

int main()
{
    person p1(55);
    person p2(74);

    p1++;
    p1.show();

    ++p2;
    p2.show();
}