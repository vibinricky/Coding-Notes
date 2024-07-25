#include <iostream>
using namespace std;

class person
{
private:
    int weight;
public:
    person(int w)
    {
        weight = w;
    }

    friend bool operator> (person x, person y);
    friend bool operator< (person x, person y);
};

bool operator> (person x, person y)
{
    return x.weight > y.weight;
}

bool operator< (person x, person y)
{
    return x.weight < y.weight;
}

int main()
{
    person p1(50), p2(75);

    if (p1 > p2) 
    {
        cout << " person 1 is heavy";
    }
    if (p1 < p2)  
    {
        cout << "Person 2 is heavy";
    }
    return 0;
}