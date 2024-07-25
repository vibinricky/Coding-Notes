#include <iostream> 
using namespace std;


void Heapify(int Arr[], int n, int i)
{
    int largest = i;
    int l = (2*i)+1;
    int r = (2*i)+2;
    if (l< n && Arr[l]>Arr[largest])
    {
        largest = l;
    } 
    if (r< n && Arr[r]>Arr[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(Arr[i],Arr[largest]);
        Heapify(Arr, n, largest);
    }
    
}

void HeapSort(int Arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        Heapify(Arr, n, i);

    for (int i = n-1; i>=0; i--)
    {
        swap(Arr[0],Arr[i]);

        Heapify(Arr, i, 0);
    }
}


int main()
{
    int Arr[] = {15,5,20,1,17,10,30};
    int n = sizeof(Arr)/sizeof(Arr[0]);
    
    HeapSort(Arr, n);

    for(int i = 0; i<n; i++)
        cout << Arr[i] << " ";
}
