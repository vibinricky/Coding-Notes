#include <iostream>
using namespace std;

class basicCar
{
    public:
    void body(){cout << "body"<<endl;}
    void door(){cout << "door"<<endl;}
    void window(){cout << "window"<<endl;}
    void tyres(){cout << "tyres"<<endl;}
};

class advCar: public basicCar
{
    public:
    void ABS(){cout << "ABS"<<endl;}
    void PS(){cout << "PS"<<endl;}
    void EngineV8(){cout << "EngineV8"<<endl;}
    void AT(){cout << "AT"<<endl;}
};

int main()
{
    basicCar *ptr;
    ptr = new advCar();

    ptr->body();         // not getting error 
    ptr->door();
    ptr->tyres();
    ptr->window();

    // ptr->ABS();       // you cant acess these 
    // ptr->PS();
    // ptr->EngineV8();
    // ptr->AT();

    return 0;
}