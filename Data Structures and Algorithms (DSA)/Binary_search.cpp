#include <iostream>
using namespace std;

int binarysearch(int arr[],int n, int data,int l,int r);
void Quicksort(int arr[],int lb,int ub);

int main()
{
    int arr[] = {11,4,61,8,30,7,5,3,2};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int data = 7;

    int lb = 0;
    int ub = n-1;
    Quicksort(arr,lb,ub);

    int l = 0;
    int r = n-1;
    cout << "new index for sorted array: "<<binarysearch(arr,n,data,l,r);
    return 0;
}

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

int binarysearch(int arr[],int n,int data,int l,int r)
{
    int mid = (l+r)/2;
    while (l<r)
    {
        if (arr[mid] == data)
        {
            return mid;
        }
        else if (data < arr[mid])
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return -1;
}