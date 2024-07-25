#include <iostream>
using namespace std;

int partition(int arr[], int lb, int ub)
{
    int pivot = arr[lb];
    int start = lb;
    int end = ub;
    while(start < end)
    {
        while(arr[start] <= pivot)
        {
            start++;
        }
        while(arr[end] > pivot)
        {
            end--;
        }
        if(start < end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}

void Quicksort(int arr[],int lb, int ub)
{
     if(lb<ub)
     {
        int loc = partition(arr,lb,ub);
        Quicksort(arr,lb,loc-1);
        Quicksort(arr,loc+1,ub);
     }
}

int main()
{
    int arr[] = {7,6,10,5,9,2,1,15,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int lb = 0;
    int ub = n-1;

    Quicksort(arr,lb,ub);

    for(int k = 0; k<n; k++)
    {
        cout << arr[k]<<endl;
    }

}