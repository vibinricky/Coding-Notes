#include <iostream>
using namespace std;

class vit
{
    int n;
    static int count;
    public: 
    void fuc(int a)
    {
        n = a;
        count += 1;
    }
    void display()
    {
        cout<<"count = "<<count<<endl;
    }
};

int vit::count;
int main()
{
    
    vit a,b;
    a.fuc(5);
    a.display();
    b.fuc(4);
    a.display();
    for(int i = 0; i<3; i++){
        a.fuc(1);
    }
    a.display();

    return 0;
}