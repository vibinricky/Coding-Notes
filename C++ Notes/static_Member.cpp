#include <iostream> 
using namespace std;

class Alpha
{
    private:
    int a;
    int b;

    public:
    Alpha()
    {
        a = 5;
        b = 5;
        stat++;
    }
    static int stat;
};
int Alpha::stat = 0;

int main()
{
    Alpha a1;  // stat = 1 is incremented
    Alpha a2;  // stat = 2 is incremented

    cout<< a1.stat<<endl;
    cout<< a2.stat<<endl;
    cout<< Alpha::stat<<endl;
    return 0;
}