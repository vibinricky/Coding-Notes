#include <iostream> 
using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    void print()
    {
        cout << real << " + " << imag << "i"<<endl;
    }

    complex operator+ (complex part2)
    {
        complex temp;
        temp.real = real + part2.real;
        temp.imag = imag + part2.imag;
        return temp;
    }

};

int main()
{
    complex c1(3,4);
    complex c2(2,7);
    complex c3;
    c3 = c1+c2; // c3 =  c1.add(c2)

    c1.print();
    c2.print();
    c3.print();

    complex c4;

    c4 = c1+c2+c3; // c4 = c1.(add(c2.add(c3)))

    c4.print();
}