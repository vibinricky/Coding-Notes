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
    }
    static int stat;
    static int getstat()
    {
        stat++;
        return stat;
    }
};
int Alpha::stat = 0;

int main()
{
    cout<< Alpha::getstat()<<endl;
    Alpha a1;  
    Alpha a2; 
    cout<<a1.getstat()<<endl;
    cout<<a2.getstat();
    return 0;
}