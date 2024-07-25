#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[] = {2,1,1,0,2,5,4,0,2,8,7,9,2,0,1,9}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = arr[0];
    for(i = 1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

    int k = max;
    int count[k+1];
    int b[n];

    for(i=0; i<=k; i++)
    {
        count[i] = 0;
    }

// counting sort 
    for(i=0; i<n; i++)
    {
        count[arr[i]]++;
    }
    
    for(i=1; i<=k; i++)
    {
        count[i] = count[i]+count[i-1];
    }

    for(i = n-1; i>=0; i--)
    {
        b[--count[arr[i]]] = arr[i];
    }

    for(i = 0; i<n; i++)
    {
        arr[i] = b[i];
    }

// Printing the array
    for(i = 0; i<n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}