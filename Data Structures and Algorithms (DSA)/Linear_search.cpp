#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[] = {1,4,7,3,0,7,8};
    int data = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int flag = 0;

    for(i=0; i<n; i++)
    {
        if (arr[i] == data)
        {
            cout <<"Location of the data: "<<i<<endl;
            flag = 1;
        }
    }

    if (flag)
    {
        cout << "data found";
    } else {
        cout << "data is not found";
    }

}