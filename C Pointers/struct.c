#include <stdio.h>

struct stud
{
    int regno;          // 4 size
    char name[20];      // 20 
    float marks;        // 4
};

void main()
{
    struct stud s = {2020, "India", 99.99};
        //OR
    // struct stud s;
    // s.regno = 2020;
    // s.name[6] = "India";
    // s.marks = 99.99;

    printf("The student\n regno:%d\n name:%s\n marks:%0.2f\n"
    ,s.regno, s.name, s.marks);

    printf("size of struc datatype:%d", sizeof(s));

}
