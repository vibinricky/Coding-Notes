#include <iostream>
using namespace std;

inline void func(int, int);
int main()
{
    func(2,3);
    return 0;
}
inline void func(int a, int b)
{
    cout << "The sum of two number is: "<< (a+b);
}

