#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int x = 1, y = 2;
    cout << "Before swaping  x = "<< x << " and y = "<< y<< endl;
    swap(&x, &y);
    cout << "After swaping  x = "<< x << " and y = "<< y<< endl;
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}