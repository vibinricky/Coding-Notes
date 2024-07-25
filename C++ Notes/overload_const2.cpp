#include <iostream>
using namespace std;

class person
{
private:
    string name;
    int age;
    int height;
public:
//-----------------------------------
    person(string x = "NULL", int y = 0, int z = 0)
    {
        name = x;     // Overload constructor 
        age = y;
        height = z;
    }
//-----------------------------------
    person(person &obj)  // copy constructor 
    {
        name = obj.name;
        age = obj.age;
        height = obj.height;
    }
//-----------------------------------

    void print()
    {
        cout << name<<endl;
        cout << age<<endl;
        cout << height<<endl;
    }
};

int main()
{
    person person1;
    person person2("Josh", 21, 170);
    person person3(person2);

    person1.print();
    person2.print();
    person3.print();

}