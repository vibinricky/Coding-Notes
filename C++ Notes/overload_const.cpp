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
    person()          // default constructor 
    {
        name = "NULL";
        age = 0;
        height = 0;
    }
//-----------------------------------
    person(string x, int y, int z)
    {
        name = x;     // parameterized constructor 
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