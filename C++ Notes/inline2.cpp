#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return (a+b);
}

int main()
{
    int a = 1, b = 2;
    cout << "sum of a and b: "<< add(a,b);
    return 0;
}